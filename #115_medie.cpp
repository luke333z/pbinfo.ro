#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
string filename = "file";
ifstream in(filename + ".in");
ofstream out(filename + ".out");

int main(){
    int n;
    int x,cnt=0;
    double sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2==0){
            sum+=x;
            cnt++;}
    }  
    double medie=sum/cnt;
    cout<<fixed<<setprecision(2)<<medie; 
    return 0;
}