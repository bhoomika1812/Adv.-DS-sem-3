#include <bits/stdc++.h>
using namespace std;

int precedence(char ch) {
    if (ch == '^') {
        return 3;
    }
    else if (ch == '*' || ch == '/' || ch == '%') {
        return 2;
    }
    else if (ch == '+' || ch == '-') {
        return 1;
    }
    else {
        return 0;
    }
}   // <-- End precedence function

// Function to convert infix to postfix
string infixToPostfix(string s) {
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
                st.pop();          // <-- Missing in your code
            }
            if (!st.empty()) {
                st.pop();          // Remove '('
            }
        }

        // Operator
        else {
            while (!st.empty() &&
                precedence(st.top()) >= precedence(ch)) {
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

    return ans;
}

int main() {
    string infix;

    cin >> infix; // getline(cin, infix); - to read the spaces between operator and operand

    cout << infixToPostfix(infix);

    return 0;
}

// Sample Input
// 2+4/6*7-5
// Your Output
// 246/7*+5-