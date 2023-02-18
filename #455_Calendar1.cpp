#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
int main() 
{ 
 int z,l,a,z1,l1,a1; 
 std::cin>>z>>l>>a;
 z1=z+1; l1=l+1; 
 a1=a+1; 
 if((l==1 || l==3 || l==5 || l==7 || l==8 || l==10 || l==12)&& z<31) 
     std::cout<<z1<<" "<<l<<" "<<a; 
 if((l==1 || l==3 || l==5 || l==7 || l==8 || l==10)&& z==31) 
         std::cout<<1<<" "<<l1<<" "<<a; 
 if(l==12 && z==31) 
          std::cout<<1<<" "<<1<<" "<<a1; 
 if((l==4 || l==6 || l==9 || l==11 )&& z<30) 
     std::cout<<z1<<" "<<l<<" "<<a; 
 if((l==4 || l==6 || l==9 || l==11 )&& z==30)
     std::cout<<1<<" "<<l1<<" "<<a; 
 if(l==2 && z<29 && a%4==0 && (a%100!=0 || a%400==0)) 
     std::cout<<z1<<" "<<l<<" "<<a;
 if(l==2 && z==29 && a%4==0 && (a%100!=0 || a%400==0)) 
     std::cout<<1<<" "<<l1<<" "<<a; 
 if(l==2 && z<28 && !(a%4==0 && (a%100!=0 || a%400==0))) 
     std::cout<<z1<<" "<<l<<" "<<a; 
 if(l==2 && z==28 && !(a%4==0 && (a%100!=0 || a%400==0))) 
     std::cout<<1<<" "<<l1<<" "<<a; 
 return 0; 
}