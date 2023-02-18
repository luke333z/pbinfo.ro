#include <iostream>

using namespace std;

int main()
{
    long long M,N,T1,T2,S;
    cin>>M>>N;
    T1=M-1;
    T2=M*(N-1);
    S=T1+T2;
    cout<<S;
    return 0;
}