#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("permutari.in");
ofstream fout("permutari.out");

int n , x[10];

void afisare()
{
    for(int i=1;i<=n;i++)
        fout<<x[i]<<" ";
    fout<<endl;
}
int verify(int k)
{
    for(int i=1; i<k; i++)
        if(x[i]==x[k]) return 0;
    return 1;
}
void start(int k)
{
    for(int i=1;i<=n;i++)
    {
        x[k] = i;
        if(verify(k))
        {
            if(k == n) afisare();
            else start(k + 1);

        }
    }
}
int main()
{
    fin >> n;
    start(1);
    return 0;
}