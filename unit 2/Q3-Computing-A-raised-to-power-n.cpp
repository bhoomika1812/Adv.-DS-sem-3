#include <bits/stdc++.h>
using namespace std;

int power(int a, int n)
{
    if(n == 0)
        return 1;

    if(n % 2 == 0)
        return power(a, n / 2) * power(a, n / 2);

    return a * power(a, n - 1);
}

int main()
{
    int a, n;

    cout << "Enter a and n: ";
    cin >> a >> n;

    cout << "Answer = " << power(a, n);

    return 0;
}