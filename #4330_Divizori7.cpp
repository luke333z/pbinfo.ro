#include <iostream>
using namespace std;
int n, d, ok, s;
int main ()
{
    cin>>n;
    for (d=2; d<=n; d++)//iei fiecare divizor de la 2 (pt ca 1 nu e propriu asa ca degeaba il mai verifici)
        if(n%d==0)
        {
            s+=d;//cand gasesti un divizor il adaugi la suma s+=d; = s=s+d;
            ok++;//numeri de cate ori ai gasit un divizor
            if(ok==2)//cand gasesti doi
            {
                cout<<s;//afisezi
                return 0;//opresti programu ca sa nu mai caute altii
            }
        }
    return 0;
}