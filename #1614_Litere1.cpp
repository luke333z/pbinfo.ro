#include <fstream>

using namespace std;

int main()
{
    int P, n;
    string nume, aux;
    ifstream fin("litere1.in");
    ofstream fout("litere1.out");
    fin >> P >> n >> nume;
    for(int i = 1; i < n; i++)
    {
        fin >> aux;
        nume += aux;
    }
    int nrlinii = 1;
    while( nrlinii * nrlinii < n)
    {
        nrlinii++;
    }
    int caractere = nrlinii * nrlinii;
    for(int i = 1; i <= caractere - n; i++)
    {
        nume += '*';
    }
    if (P == 1)
    {
        fout << caractere - n;
    }
    if (P == 2)
    {
        int poz;
        for(int i = 1; i <= nrlinii; i++)
        {
            poz = (i - 1) * (i - 1);
            fout << nume[poz] << " ";
        }
    }
    if (P == 3)
    {
        int pozitie = 0;
        while(caractere > 0) 
        {
            int lc = nrlinii; 
            int pozaux = pozitie; 
            while (pozaux >= 0) 
            {
                int pozafis = (lc - 1) * (lc - 1) + pozaux; 
                if(nume[pozafis] != '*') 
                {
                    fout << nume[pozafis] << " ";
                }
                pozafis--;
                pozaux--;
                caractere--;
                if(pozaux >= 0) 
                {
                    if(nume[pozafis] != '*')
                    {
                        fout << nume[pozafis] << " ";
                    }
                    pozafis--;
                    pozaux--;
                    caractere--;
                }
                lc--; 
            }
            fout << endl; 
            pozitie += 2; 
        }
    }

    return 0;
}