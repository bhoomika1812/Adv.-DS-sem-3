#include <bits/stdc++.h>
using namespace std;

int evaluatePostfix(string s) {
    stack<int> st;

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        // If operand
        if (ch >= '0' && ch <= '9') {
            st.push(ch - '0');
        }

        // If operator
        else {
            int val2 = st.top();
            st.pop();

            int val1 = st.top();
            st.pop();

            switch (ch) {
                case '+':
                    st.push(val1 + val2);
                    break;

                case '-':
                    st.push(val1 - val2);
                    break;

                case '*':
                    st.push(val1 * val2);
                    break;

                case '/':
                    st.push(val1 / val2);
                    break;

                case '%':
                    st.push(val1 % val2);
                    break;

                case '^':
                    st.push(pow(val1, val2));
                    break;
            }
        }
    }

    return st.top();
}

int main() {
    string postfix;

    cout << "Enter Postfix Expression: ";
    cin >> postfix;

    cout << "Result: " << evaluatePostfix(postfix);

    return 0;
}