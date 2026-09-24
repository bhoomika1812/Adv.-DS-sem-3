//WAp to remove adjacent duplicates using stack

#include <bits/stdc++.h>
using namespace std;

int main () {
    string s = "abbaca";
    stack <char> st;
    for (int i = 0; i < s.length(); i++) {
        if (st.empty() && st.top() != s[i]) {
            st.push(s[i]);
        }
        else {
            st.pop();
        }
    }
    string NEW = " ";
    
}