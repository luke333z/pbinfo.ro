#include <bits/stdc++.h>
using namespace std;

int fct(int n)
{
    if(n == 0)
        return 0;
    else 
        return fct(n - 1) + n * (n + 1);
}

int main()
{
    int n;
    cin >> n;
    cout << "Rezultatul este" << ' ' << fct(n);
    return 0;
}