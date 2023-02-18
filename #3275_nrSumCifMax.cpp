 #include <iostream>

using namespace std;

int main()
{
    int a,b,c,A,B,C;
    cin>>a>>b>>c;
    A=a%10+a/10;
    B=b%10+b/10;
    C=c%10+c/10;
    if(A>B && A>C)
    {
        cout<<a;
    }
    if(B>A && B>C)
    {
        cout<<b;
    }
    if(C>B && C>A)
    {
        cout<<c;
    }
    if(A==B && B>C)
    {
        cout<<a<<" "<<b;
    }
     if(A==C && C>B)
    {
        cout<<a<<" "<<c;
    }
     if(C==B && B>A)
    {
        cout<<b<<" "<<c;
    }
    if(A==B && B==C)
    {
        cout<<a<<" "<<b<<" "<<c;
    }

    return 0;
}