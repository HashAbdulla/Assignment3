#include "functions.h"

//function definitions

// STACK FUNCTIONS //

//checks if the character is an opening paranthesis
bool isOpeningParenthesis(char c) {
    return c == '(' || c == '{' || c == '[';
}

// checks if the character is closing paranthesis
bool isClosingParenthesis(char c) {
    return c == ')' || c == '}' || c == ']';
}

// function check if a pair of opening and closing parentheses match.
bool isMatchingPair(char opening, char closing) {
    return (opening == '(' && closing == ')') ||
           (opening == '{' && closing == '}') ||
           (opening == '[' && closing == ']');
}
// Function to check if the parentheses in the given expression are balanced.
bool balancedParentheses(const std::string& expression) {
    stack<char> stack;

    for (char c : expression) {
        if (isOpeningParenthesis(c)) {
            stack.push(c);
        } else if (isClosingParenthesis(c)) {
            if (stack.empty() || !isMatchingPair(stack.top(), c)) {
                return false;
            }
            stack.pop();
        }
    }

    return stack.empty();
}
// function to assign precedence values to operators for the infix to postfix conversion
int getPrecedence(char op) {
    switch (op) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
        case '%':
            return 2;
        default:
            return -1;
    }
}
//Converts the infix expression to a postfix expression.
string infixToPostfix(const string& infix) {
    string postfix;
    stack<char> stack;

    for (char c : infix) {
        if (isalnum(c)) {
            postfix += c;
        } else if (isOpeningParenthesis(c)) {
            stack.push(c);
        } else if (isClosingParenthesis(c)) {
            while (!stack.empty() && !isMatchingPair(stack.top(), c)) {
                postfix += stack.top();
                stack.pop();
            }
            if (!stack.empty()) {
                stack.pop();
            }
        } else {
            while (!stack.empty() && getPrecedence(c) <= getPrecedence(stack.top())) {
                postfix += stack.top();
                stack.pop();
            }
            stack.push(c);
        }
    }

    while (!stack.empty()) {
        postfix += stack.top();
        stack.pop();
    }

    return postfix;
}

// menu yahoo

void Menu() {
    cout << "\nWelcome! What would you like to do?"
       << "\n======================="
       << "\n\t1 - Stack - infix to postfix"
       << "\n\t2 - Queue - various functions"
       << "\n\tQ - Quit"
       << "\n======================="
       << "\nYour Choice: ";
}
