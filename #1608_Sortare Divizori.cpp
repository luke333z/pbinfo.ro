#include <string.h>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std;

ifstream fin("sortare_divizori.in");
ofstream fout("sortare_divizori.out");

int main() {
    int n;
    int v[1000];
    int div[1000];

    fin >> n;
    for (int i = 1; i <= n; i++) {
        fin >> v[i];
        int aux = v[i];
        int j = 2;
        int nrDiv = 1;

        while (aux != 1) {
            int nr = 0;
            while (aux % j == 0) {
                nr++;
                aux /= j;
            }
            nrDiv = nrDiv *(nr + 1);
            j++;
            if (j * j > aux)
                j = aux;
        }
        

        div[i] = nrDiv;
    }

    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (div[i] < div[j]) {
                swap(v[i], v[j]);
                swap(div[i], div[j]);
            }
            else if (div[i] == div[j])
                if (v[i] > v[j]) {
                    swap(v[i], v[j]);
                    swap(div[i], div[j]);
                }
        }
    }
    for (int i = 1; i <= n; i++)
        fout << v[i] << " ";

}