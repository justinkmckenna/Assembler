//Justin Mckenna
//class definitions

#include "string.hpp"

//default ctor
String::String() {
    stringSize = 1;
    str = new char[stringSize];
    str[0] = 0;
}

//char ctor
String::String(char ch) {
    stringSize = 2;
    str = new char[stringSize];
    str[0] = ch;
    str[1] = 0;
}

//char array ctor
String::String(const char s[]) {
    stringSize = 0;
    while(s[stringSize] != 0) ++stringSize;
    ++stringSize;
    str = new char[stringSize];
    for(int i = 0; i < stringSize; i++) {
        str[i] = s[i];
    }
}

//int ctor empty
String::String(int n) {
    stringSize = n + 1;
    str = new char[stringSize];
    for(int i = 0; i < stringSize; i++) {
        str[i] = 0;
    }
}

//int and char array ctor, initialized to char array
String::String(int n, const char s[]) {
    stringSize = n + 1;
    str = new char[stringSize];
    int sLength = 0;
    while(s[sLength] != 0) ++sLength;
    for(int i = 0; i <= sLength; i++) {
        str[i] = s[i];
    }
}

//resets capacity
void String::resetCapacity(int n) {
    char *temp = new char[n + 1];
    int smaller = stringSize;
    if((n + 1) < smaller) smaller = n + 1;
    for(int i = 0; i < smaller - 1; i++) {
        temp[i] = str[i];
    }
    delete[] str;
    str = temp;
    stringSize = n + 1;
}

//copy ctor
String::String(const String& actual) {
    stringSize = actual.stringSize;
    str = new char[stringSize];
    for (int i = 0; i < stringSize; i++) {
        str[i] = actual.str[i];
    }
}

//destructor
String::~String() {
    delete[] str;
}

//constant time swap
void String::swap(String& rhs) {
    char *temp = str;
    str = rhs.str;
    rhs.str = temp;

    int tempSize = stringSize;
    stringSize = rhs.stringSize;
    rhs.stringSize = tempSize;
}

//assignment overload
String& String::operator=(String rhs) {
    swap(rhs);
    return *this;
}

//subscript for mutation
char& String::operator[](int i) {
    assert(i >= 0);
    assert(i <= length());
    return str[i];
}

//subscript for accessing
char String::operator[](int i) const {
    assert(i >= 0);
    assert(i <= length());
    return str[i];
}

//total possible size of String
int String::capacity() const {
    return stringSize - 1;
}

//current size of String
int String::length() const {
    int i = 0;
    while(str[i] != 0) i++;
    return i;
}

//concatination, String and String
String String::operator+(const String& rhs) const {
    String result(length() + rhs.length());

    int i = 0;
    //copys chars from lhs
    while(str[i] != 0) {
        result.str[i] = str[i];
        i++;
    }
    //copys chars from rhs
    while(rhs.str[i - length()] != 0) {
        result.str[i] = rhs.str[i - length()];
        i++;
    }
    result.str[i] = 0;
    return result;
}

//plus equals concatination, String and String
String& String::operator+=(const String& rhs) {
    int offset = length();
    int i = 0;
    resetCapacity(length() + rhs.length());

    while(rhs.str[i] != 0) {
        str[offset + i] = rhs.str[i];
        i++;
    }
    str[offset + i] = 0;
    return *this;
}

//equal, String and String
bool String::operator==(const String& rhs) const {
    int i = 0;
    while (str[i] != 0 && str[i] == rhs.str[i]) ++i;
    return str[i] == rhs.str[i];
}

//less than, String and String
bool String::operator<(const String& rhs) const {
    int i = 0;
    while((str[i] != 0) && (rhs.str[i] != 0) && (str[i] == rhs.str[i]))
        ++i;
    if(str[i] == 0 && rhs.str[i] == 0) return false; //str == rhs
    if(str[i] == 0) return true; //aa < aaaa
    if(str[i] < rhs.str[i]) return true; //aa < ab
    return false;
}

//return substring of String
String String::substr(int start, int end) const {
    if(start < 0) start=0;
    if(start > end) return String();
    if(start >= length()) return String();

    int substrCapacity = end - start + 1;
    String result(substrCapacity);
    int i = start;
    while(i <= end && str[i] != 0) {
        result.str[i - start] = str[i];
        i++;
    }

    result.str[i - start] = 0;
    return result;
}

//find character position of a String
int String::findch(int pos, char ch) const {
    if(pos > length() || pos < 0) return -1;

    while(str[pos] != 0 && str[pos] != ch) ++pos;
    if(str[pos] == 0) return -1;
    else return pos;
}

//find string position of a String
int String::findstr(int pos, const String& sub) const {
    int subLen = sub.length();
    int searchLen = length() - subLen;

    if(pos > length() || pos < 0) return -1;

    for(int i = pos; i <= searchLen; i++)
        if(substr(i, i + subLen - 1) == sub) return i;

    return -1;
}

std::istream& operator>>(std::istream& in, String& rhs) {
    char* buffer = new char[45]; //so that istream is not overflowed by a
    for(int i = 0; i < 45; i++) buffer[i] = 0;                           //word too large
    in >> buffer;
    rhs = String(buffer);
    delete [] buffer;
    return in;
}

std::ostream& operator<<(std::ostream& out, const String& rhs) {
    out << rhs.str;
    return out;
}


std::istream& getline(std::istream& in, String& line) {
    String temp;
    char ch = 0;
    in.get(ch);
    while(ch != '\n' && !in.eof()) {
        temp += ch;
        in.get(ch);
    }
    line = temp;
    return in;
}

int String::convertToNum() {
    int digit = 0;
    int sum = 0;
    for(int i = 0; i < length(); i++) {
        sum = sum * 10;
        digit = str[i] - '0';
        sum = sum + digit;
    }
    return sum;
}

//splits String and puts sub strings into vector
std::vector<String> String::split(char ch) const {
    std::vector<String> result;
    String subString;
    int i = 0;
    while(str[i] != 0) {
        if(str[i] != ch) {
            subString += str[i];
        } else {
            result.push_back(subString);
            subString = "";
        }
        ++i;
    }
    result.push_back(subString);
    return result;
}

//concatination, char array and String
String operator+(const char s[], const String& rhs) {
    return String(s) + rhs;
}

//concatination, char and String
String operator+(char ch, const String& rhs) {
    return String(ch) + rhs;
}

//plus equals concatination, String and char array
String& operator+=(String& lhs, const char s[]) {
    return lhs += String(s);
}

//plus equals concatination, String and char
String& operator+=(String& lhs, char ch) {
    return lhs += String(ch);
}

//equals, char array and String
bool operator==(const char s[], const String& rhs) {
    return String(s) == rhs;
}

//equals, char and String
bool operator==(char ch, const String& rhs) {
    return String(ch) == rhs;
}

//less than, char array and String
bool operator<(const char s[], const String& rhs) {
    return String(s) < rhs;
}

//less than, char and String
bool operator<(char ch, const String& rhs) {
    return String(ch) < rhs;
}

//less than equals, String and String
bool operator<=(const String& lhs, const String& rhs) {
    return (lhs < rhs || lhs == rhs);
}


//not equals, String and String
bool operator!=(const String& lhs, const String& rhs) {
    return !(lhs==rhs);
}

//greater than equals, String and String
bool operator>=(const String& lhs, const String& rhs) {
    return !(lhs < rhs);
}

//greater than, String and String
bool operator>(const String& lhs, const String& rhs) {
    return rhs < lhs;
}
