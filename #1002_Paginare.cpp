#include <iostream>

const int volume = 792;

int main() {

    
    int n;
    int pages = 0;
    int result;
    int temp;

    std :: cin >> n;

    if (n >= volume) {
        if (n % volume != 0)
            temp = n / volume + 1;
        else
            temp = n / volume;
        
        result = n % volume;

        if (result < 10) {
            pages = result;
        } else {
            pages = 9;
            result -= 9;
            if (result < 181) {
                if (result % 2 == 0)    
                       pages += result / 2;
                else {
                    std :: cout << "IMPOSIBIL";
                    return 0;
                }
            } else {
                pages = 99;
                result -= 180;
                if (result % 3 == 0)
                    pages += result / 3;
                else {
                    std :: cout << "IMPOSIBIL";
                    return 0;
                }
            }
        
        }

        std :: cout << temp << ' ';
        if (n % volume == 0) {
            std :: cout << 300;
        } else {
            std :: cout << pages;
        }
    } else {
        std :: cout << "IMPOSIBIL";
    }
    return 0;
}