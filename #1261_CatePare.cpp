#include <iostream>

using namespace std;
int C=0,n;
int main()
{
    do{
        cin>>n;
        if(n!=0 && n%2==0)
        {
            C++;
        }
    }while(n!=0);
    if(C!=0)
    {
        cout<<C;
    }
    else
    {
        cout<<"NU EXISTA";
    }
    return 0;
}