//Justin Mckenna
//reads a set of infix expressions from a file and
//writes the infix, postfix, and assembly code to another

#include <cstdlib>
#include <iostream>
#include <fstream>
#include "utilities.hpp"

int main(int argc, char *argv[]) {
    //only 2 or 3 things can be on cmd line
    if (argc != 2 && argc != 3) {
        std::cerr << "There can only be 2 or 3 arguments. \n";
        exit(2);
    }

    //opening input file
    std::ifstream inputFile(argv[1]);
    if (!inputFile) {
        std::cerr << "Could not open " << argv[1] << '\n';
        exit(2);
    }

    //if there is no output file
    if (argc == 2) {
        //gets infix from file and converts to outfix, prints results
        String infixExpression;
        while (getline(inputFile, infixExpression)) {

            //converting to postfix
            String postfixExpression = infixToPostfix(infixExpression);

            //converting to assembly
            String assemblyExpression = postfixToAssembly(postfixExpression);

            //printing
            std::cout << "Infix: " << infixExpression << std::endl
                      << "Postfix: " << postfixExpression << std::endl
                      << std::endl << assemblyExpression << std::endl;

            //resetting infix expression for next getline
            infixExpression = "";
        }
    }

    //if there is an output file
    if (argc == 3) {
        //opening output file
        std::ofstream outputFile(argv[2]);
        if (!outputFile) {
            std::cerr << "Could not open " << argv[2] << '\n';
            exit(2);
        }

        //gets infix from file and converts to outfix, prints results
        String infixExpression;
        while (getline(inputFile, infixExpression)) {

            //converting to postfix
            String postfixExpression = infixToPostfix(infixExpression);

            //converting to assembly
            String assemblyExpression = postfixToAssembly(postfixExpression);

            //writing to output file
            outputFile << "Infix: " << infixExpression << std::endl
                       << "Postfix: " << postfixExpression << std::endl
                       << std::endl << assemblyExpression << std::endl;

            //resetting infix expression for next getline
            infixExpression = "";
        }
        outputFile.close();
    }

    inputFile.close();

    return 0;
}
