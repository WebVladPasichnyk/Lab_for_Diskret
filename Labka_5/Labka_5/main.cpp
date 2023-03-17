#include <iostream>
#include <stack>
#include <string>
#include <map>
#include <set>
#include <bits/stdc++.h>

using namespace std;


bool isOperator(char c)
{
    return (!isalpha(c) && !isdigit(c));
}

int getPriority(char C)
{
    if (C == '-' || C == '+')
        return 1;
    else if (C == '*' || C == '/')
        return 2;
    else if (C == '^')
        return 3;
    return 0;
}

string infixToPostfix(string infix)
{
    infix = '(' + infix + ')';
    int l = infix.size();
    stack<char> char_stack;
    string output;

    for (int i = 0; i < l; i++) {

        // If the scanned character is an
        // operand, add it to output.
        if (isalpha(infix[i]) || isdigit(infix[i]))
            output += infix[i];

        // If the scanned character is an
        // С(С, push it to the stack.
        else if (infix[i] == '(')
            char_stack.push('(');

        // If the scanned character is an
        // С)Т, pop and output from the stack
        // until an С(С is encountered.
        else if (infix[i] == ')') {
            while (char_stack.top() != '(') {
                output += char_stack.top();
                char_stack.pop();
            }

            // Remove '(' from the stack
            char_stack.pop();
        }

        // Operator found
        else
        {
            if (isOperator(char_stack.top()))
            {
                if(infix[i] == '^')
                {
                      while (getPriority(infix[i]) <= getPriority(char_stack.top()))
                       {
                         output += char_stack.top();
                         char_stack.pop();
                       }

                }
                else
                {
                    while (getPriority(infix[i]) < getPriority(char_stack.top()))
                       {
                         output += char_stack.top();
                         char_stack.pop();
                       }

                }

                // Push current Operator on stack
                char_stack.push(infix[i]);
            }
        }
    }
      while(!char_stack.empty()){
          output += char_stack.top();
        char_stack.pop();
    }
    return output;
}

string infixToPrefix(string infix)
{
    /* Reverse String
     * Replace ( with ) and vice versa
     * Get Postfix
     * Reverse Postfix  *  */
    int l = infix.size();

    // Reverse infix
    reverse(infix.begin(), infix.end());

    // Replace ( with ) and vice versa
    for (int i = 0; i < l; i++) {

        if (infix[i] == '(') {
            infix[i] = ')';
        }
        else if (infix[i] == ')') {
            infix[i] = '(';
        }
    }

    string prefix = infixToPostfix(infix);

    // Reverse postfix
    reverse(prefix.begin(), prefix.end());

    return prefix;
}
// part 2
struct Entry_
{
 string expr_;
 string op_;
};

bool PrecedenceLess(const string& lhs, const string& rhs, bool assoc)
{
 static const map<string, int> KNOWN({ { "+", 1 }, { "-", 1 }, { "*", 2 }, { "/", 2 }, { "^", 3 } });
 static const set<string> ASSOCIATIVE({ "+", "*" });
 return (KNOWN.count(lhs) ? KNOWN.find(lhs)->second : 0) < (KNOWN.count(rhs) ? KNOWN.find(rhs)->second : 0) + (assoc && !ASSOCIATIVE.count(rhs) ? 1 : 0);
}
void Parenthesize(Entry_* old, const string& token, bool assoc)
{
 if (!old->op_.empty() && PrecedenceLess(old->op_, token, assoc))
  old->expr_ = '(' + old->expr_ + ')';
}

void AddToken(stack<Entry_>* stack, const string& token)
{
 if (token.find_first_of("0123456789") != string::npos)
  stack->push(Entry_({ token, string() })); // it's a number, no operator
 else
 { // it's an operator
  if (stack->size() < 2)
   cout<<"Stack underflow";
  auto rhs = stack->top();
  Parenthesize(&rhs, token, false);
  stack->pop();
  auto lhs = stack->top();
  Parenthesize(&lhs, token, true);
  stack->top().expr_ = lhs.expr_ + ' ' + token + ' ' + rhs.expr_;
  stack->top().op_ = token;
 }
}

string ToInfix(const string& src)
{
 stack<Entry_> stack;
 for (auto start = src.begin(), p = src.begin(); ; ++p)
 {
  if (p == src.end() || *p == ' ')
  {
   if (p > start)
    AddToken(&stack, string(start, p));
   if (p == src.end())
    break;
   start = p + 1;
  }
 }
 if (stack.size() != 1)
  cout<<"Incomplete expression";
 return stack.top().expr_;
}

// Driver code
int main()
{
    setlocale (LC_CTYPE, "ukr");
    cout << "\n ¬вед≥ть ваш вираз : ";
    string s;
    cin >> s;
    cout << "\n ќбер≥ть тип перeведенн€ з ≥нф≥ксноњ :  \n 1 - ѕреф≥ксна: \n  2 - ѕостф≥ксна : ";
    int num;
    cin >> num;
    if (num == 1){
        cout << infixToPrefix(s) << std::endl;
    }else if (num == 2){
        cout << infixToPostfix(s) << std::endl;
    }

    cout << "\n ¬вед≥ть ваш вираз : ";
    cin >> s;
    cout << "\n ќбер≥ть тип перeведенн€ з ≥нф≥ксноњ :  \n 1 - ѕреф≥ксна: \n  2 - ѕостф≥ксна : ";
    cin >> num;
    if (num == 1){
        cout << infixToPrefix(s) << std::endl;
    }else if (num == 2){
        cout << infixToPostfix(s) << std::endl;
    }
    return 0;

}
