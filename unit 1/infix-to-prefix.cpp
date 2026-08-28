#include <bits/stdc++.h>
using namespace std;

// Function to return precedence of operators
int precedence(char ch) {
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/' || ch == '%')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return 0;
}

// Function to convert infix to prefix
string infixToPrefix(string s) {

    // Step 1: Reverse the infix expression
    reverse(s.begin(), s.end());

    // Step 2: Swap '(' and ')'
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(')
            s[i] = ')';
        else if (s[i] == ')')
            s[i] = '(';
    }

    stack<char> st;
    string ans = "";

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        // Operand
        if ((ch >= 'A' && ch <= 'Z') ||
            (ch >= 'a' && ch <= 'z') ||
            (ch >= '0' && ch <= '9')) {
            ans += ch;
        }

        // Left parenthesis
        else if (ch == '(') {
            st.push(ch);
        }

        // Right parenthesis
        else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                ans += st.top();
                st.pop();
            }
            if (!st.empty())
                st.pop();
        }

        // Operator
        else {
            while (!st.empty() &&
                   precedence(st.top()) > precedence(ch)) {
                ans += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    // Pop remaining operators
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    // Step 3: Reverse the postfix to get prefix
    reverse(ans.begin(), ans.end());

    return ans;
}

int main() {
    string infix;

    cout << "Enter infix expression: ";
    getline(cin, infix);

    cout << "Prefix expression: " << infixToPrefix(infix);

    return 0;
}