#include <bits/stdc++.h>
using namespace std;

int evaluatePrefix(string s) {
    stack<int> st;

    // Scan expression from right to left
    for (int i = s.length() - 1; i >= 0; i--) {
        char ch = s[i];

        // If operand, push into stack
        if (ch >= '0' && ch <= '9') {
            st.push(ch - '0');
        }

        // If operator
        else {
            int val1 = st.top();
            st.pop();

            int val2 = st.top();
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
    string prefix;

    cout << "Enter Prefix Expression: ";
    cin >> prefix;

    cout << "Result: " << evaluatePrefix(prefix);

    return 0;
}