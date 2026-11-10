#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string infix = "A+B*C";
    string prefix = "";

    reverse(infix.begin(), infix.end());

    for(int i = 0; i < infix.length(); i++)
    {
        if(infix[i] == '(')
            infix[i] = ')';
        else if(infix[i] == ')')
            infix[i] = '(';
    }

    string postfix = "";
    string stack = "";

    for(int i = 0; i < infix.length(); i++)
    {
        char ch = infix[i];

        if(ch >= 'A' && ch <= 'Z')
            postfix += ch;
        else
        {
            while(!stack.empty())
            {
                postfix += stack.back();
                stack.pop_back();
            }

            stack += ch;
        }
    }

    while(!stack.empty())
    {
        postfix += stack.back();
        stack.pop_back();
    }

    reverse(postfix.begin(), postfix.end());

    cout << "Infix: A+B*C" << endl;
    cout << "Prefix: " << postfix;

    return 0;
}
