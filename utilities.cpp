//Justin Mckenna
//Utilities Definitions

#include "utilities.hpp"

String infixToPostfix(String infix) {
    std::vector<String> token = infix.split(' ');
    stack<String> result;
    for(std::vector<String>::iterator it = token.begin(); it != token.end(); ++it) {
        if(*it == ")") {
            String right = result.pop();
            String oper = result.pop();
            String left = result.pop();
            result.push(left + " " + right + " " + oper);
        } else {
            if(*it != "(" && *it != ";" && *it != ";\n" &&
               *it != ";\r" && *it != ";\t") result.push(*it);
        }
    }
    return String(result.top());
}

String postfixToAssembly(String postfix) {
    std::vector<String> token = postfix.split(' ');
    stack<String> assemblyStack;
    int n = 1; //for counting TMPs
    String result = "";
    for(std::vector<String>::iterator it = token.begin(); it != token.end(); ++it) {
        if(*it != "*" && *it != "/"
        && *it != "+" && *it != "-") {
            assemblyStack.push(*it);
        } else {
            String right = assemblyStack.pop();
            String left = assemblyStack.pop();
            assemblyStack.push(evaluate(left, *it, right, result, n));
            ++n;
        }
    }
    return result;
}

String evaluate (String left, String oper, String right, String &result, int n) {
    String assemblyOper;
    String tempn = (char(n + '0'));//converting int to string
    if(oper == "*") assemblyOper = "MU";
    else if(oper == "/") assemblyOper = "DV";
    else if(oper == "+") assemblyOper = "AD";
    else if(oper == "-") assemblyOper = "SB";

    result += ("   LD   " + left + '\n' +
              "   " + assemblyOper + "   " + right + '\n' +
              "   ST   " + "TMP" + tempn + '\n');

    String topOfStack = "TMP" + tempn;
    return topOfStack;
}
