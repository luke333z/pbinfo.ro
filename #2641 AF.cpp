#include <bits/stdc++.h>
using namespace std;

ifstream in("af.in");
ofstream out("af.out");

int main()
{
    int n;
    in >> n;
    for(int i = 0 ; i < n ; ++i)
    {
        long long int x , y , z;
        char c1 , c2;
        in >> x >> c1 >> y >> c2 >> z;
        if(c1=='+')
            if(x + y == z)
                out << "Adevarat" << '\n';
            else
                out << "Fals" << '\n';
        if(c1=='-')
            if(x - y == z)
                out << "Adevarat" << '\n';
            else
                out << "Fals" << '\n';
        if(c1=='x')
            if(x * y == z)
                out << "Adevarat" << '\n';
            else
                out << "Fals" << '\n';
        if(c1==':' && y != 0)
            if(x / y == z)
                out << "Adevarat" << '\n';
            else
                out << "Fals" << '\n';
        else if(c1==':')
                out << "Fals" << '\n';
    }
    return 0;
}