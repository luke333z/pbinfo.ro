#include <fstream>
using namespace std;
ifstream cin("blackfriday.in");
ofstream cout("blackfriday.out");

double n, a[11], b[11], x, Max = -1, nr;

int main()
{
cin >> n;
for (int i = 1; i <= n; i++)
{
cin >> a[i];
}
for (int i = 1; i <= n; i++)
{
cin >> b[i];
}
for (int i = 1; i <= n; i++)
{
x = (a[i] - b[i]) * 100 / a[i];
if(x > Max)
{
Max = x;
nr = i;
}
}
cout << nr;
return 0;
}