#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
std::string filename = "file";
std::ifstream in(filename + ".in");
std::ofstream out(filename + ".out");
int main()
{
    int n;
    std::cin >> n;
    int a[1001];
    for(int i = 1; i <= n; ++i)
        std::cin >> a[i];

    for(int i = 1; i <= n; ++i){
        int aux = a[i];
        int d = 2, cnt = 1;
        while(aux > 1){
            int p = 0;
            while(aux % d == 0)
                aux /= d, p++;
            cnt *= (p + 1);
            d++;
            if(d * d > aux)
                d = aux;
        }
        if(cnt == 2){
            for(int j = i + 1; j <= n; ++j)
                a[j-1] = a[j];
            n--;
            i--;
        }
    }
    for(int i = 1; i <= n; ++i)
        std::cout << a[i] << " ";
    return 0;
}