#include <iostream>

using namespace std;

int main()
{
    int n1,n2,n3,s,C3,C1,C2;
    cin>>n1>>n2>>n3;
    s=n1+n2+n3;
    C1=s/3;
    C2=(s-C1*3)*10/3;
    C3=((s-C1*3)*10-(s-C1*3)*10/3*3)*10/3;
    cout<<C1<<"."<<C2<<C3;

    return 0;
}