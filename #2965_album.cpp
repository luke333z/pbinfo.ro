#include <iostream>
#include <fstream>
using namespace std;
int c,n,v[800001];
int main()
{
    ifstream fin("album.in");
    ofstream fout("album.out");
    fin>>c;
    fin>>n;
    for(int i=1; i<=n;i++)
    {
        fin>>v[i];
    }
    if(c==1)
    {
        int x = v[n];
        int a = 0, b = 0;
        int cif;
        while(x > 0)
        {
            cif = x % 10; 
            if(cif > b) 
                b = cif;
            if(b > a)
                swap(a, b); 
            x =x/10;
        }
        fout << b << " " << a;
    }
    else
    {
        int i = 1, mutare = 0, vic = 0, radu = 0; 
        while(i <= n) 
        {
            mutare++;
            if(mutare % 2 == 1)
                vic++; 
            else
                radu++;
            int a = 0, b = 0, cif, x = v[i]; 
            while(x > 0)
            {
                cif = x % 10;
                if(cif > b)
                    b = cif;
                if(b > a)
                    swap(a, b);
                x /= 10;
            }
            for(int j = i + 1; j <= n; j++) 
            {
                if(v[j] > 0) 
                {
                    int aj = -1, bj = -1, cifj, xj = v[j], nraj = 0; 
                    while(xj > 0) 
                    {
                        cifj = xj % 10;
                        if(cifj == a) 
                        {
                            aj = cifj;
                            nraj++; 
                        }
                        if(cifj == b) 
                            bj = cifj;
                        xj =xj/10;
                    }
                    if(a == b) 
                    {
                        if(nraj >= 2) 
                        {
                            v[j] = 0;
                            if(mutare % 2 == 1) 
                                vic++;
                            else
                                radu++;
                        }
                    }
                    else if(a == aj && b == bj) 
                    {
                        v[j] = 0;
                        if(mutare % 2 == 1)
                            vic++;
                        else
                            radu++;
                    }
                }
            }
            v[i] = 0; 
            while(v[i] == 0) 
                i++;
        }
        if(vic > radu)
        {
            fout << "V" << endl;
            fout << vic;
        }
        if(vic == radu)
        {
            fout << "V R" << endl;
            fout << vic;
        }
        if(vic < radu)
        {
            fout << "R" << endl;
            fout << radu;
        }
    }
}