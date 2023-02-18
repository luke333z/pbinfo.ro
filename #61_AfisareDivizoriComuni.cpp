#include <iostream>
using namespace std;

int main() {
    int a, b, r;
    cin >> a >> b;
 
    while(b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    int cmmdc = a;
    for(int d = 1; d <= cmmdc; d++) {
        if(cmmdc % d == 0) {
            cout << d << " ";
        }
    }
} 