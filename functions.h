#include <iostream>
#include <stack>
#include <unordered_map>
#include <cctype>
#include <string>
#include <queue>

using namespace std;

//signatures of functions

bool isOpeningParenthesis(char c);

bool isClosingParenthesis(char c);

bool isMatchingPair(char opening, char closing);

bool balancedParentheses(const std::string& expression);

int getPrecedence(char op);

string infixToPostfix(const string& infix);

void Menu();






