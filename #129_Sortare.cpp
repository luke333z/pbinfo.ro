#include <iostream>
#include <fstream>
using namespace std;
ifstream in("sortare.in");
ofstream out("sortare.out");
int v[1001], n;
int main()
{
    in >> n;
    for(int i = 1; i <= n; i++)
    {
        in >> v[i];
    }
    for(int i = 1; i < n; i++)
    {
        for(int j = i + 1; j <= n; j++)
        {
            if(v[i] < v[j])
            {
                swap(v[i], v[j]);
            }
        }
    }
    for(int i = 1; i <= n; i++)
    {
        out << v[i] << " ";
    }
    return 0;
}