#ifndef CS2_STACK_HPP_
#define CS2_STACK_HPP_
////////////////////////////////////////////////////////////////////////////
//
// File: stack.hpp
//
// Programmer: Justin Mckenna
// Updated:     03/2018
//
//
//

#include <new>
#include <cassert>

////////////////////////////////////////////////////////////////////////////
//
template<typename T>
class Node {
public:
    Node() : next(0) {};
    Node(const T &x) : data(x), next(0) {};
    T data;
    Node<T> *next;
};


////////////////////////////////////////////////////////////////////////////
// CLASS INV: tos -> x1 -> x2 -> ... xN -> 0
//
//
template <typename T>
class stack {
public:
              stack     () : tos(0) {};;
              stack     (const stack<T>&);
              ~stack    ();
    void      swap      (stack<T>&);
    stack<T>& operator= (stack<T>);

        bool      empty     () const {return tos == 0;};
        bool      full      () const;
        T         top       () const;
        T         pop       ();
        void      push      (const T&);

private:
        Node<T>   *tos;
};

//copy ctor
template <typename T>
stack<T>::stack(const stack<T>& actual) :tos(0) {
    Node<T> *temp = actual.tos, *bottom = 0;
    while (temp != 0) {
        if (tos == 0) {
            tos = new Node<T> (temp->data);
            bottom = tos;
        } else {
            bottom->next = new Node<T> (temp->data);
            bottom = bottom->next;
        }
        temp = temp->next;
    }
}

//dtor
template <typename T>
stack<T>::~stack() {
    while (tos != 0) {
        Node<T> *temp;
        temp = tos;
        tos = tos->next;
        delete temp;
    }
}

//swap
template <typename T>
void stack<T>::swap(stack<T>& rhs) {
    Node<T> *temp = tos;
    tos = rhs.tos;
    rhs.tos = temp;
}

//assignment
template <typename T>
stack<T>& stack<T>::operator=(stack<T> rhs) {
    swap(rhs);
    return *this;
}

//checks if memory is full
template <typename T>
bool stack<T>::full() const {
    Node<T> *temp = new(std::nothrow) Node<T>();
    if (temp == 0) return true;
    delete temp;
    return false;
}

//returns data from top of stack
template <typename T>
T stack<T>::top() const{
    assert(!empty());
    return tos->data;
}

//removes item from top of stack
template <typename T>
T stack<T>::pop() {
    assert(!empty());
    T result = tos->data;
    Node<T> *temp = tos;
    tos = tos->next;
    delete temp;
    return result;
}

//pushes an item onto the stack
template <typename T>
void stack<T>::push(const T& item) {
    assert(!full());
    Node<T> *temp = new Node<T>(item);
    temp->next = tos;
    tos = temp;
}



#endif
