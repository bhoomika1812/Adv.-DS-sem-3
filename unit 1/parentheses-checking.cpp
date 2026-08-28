#include <bits/stdc++.h>
using namespace std;

bool isValid (string str) {
    stack <char> st;
    for (char ch : str) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (st.empty()) {
                return false;
            }
            else {
                if ((ch == ')' && st.top() != '(') || (ch == '}' && st.top() != '{') || (ch == ']' && st.top() != '[')) {
                    return false;
                }
                st.pop();
            }
        }
    }
    return st.empty();
}

int main () {
    string str;
    cin >> str;
    if (isValid (str)) {
        cout << "Result: VALID" << endl;
    }
    else {
        cout << "Result: INVALID" << endl;
    }
    return 0;
}