#include <fstream>
using namespace std;
int N, M, P, n[500000], m[10], maxim[10], pozmax;
int main()
{
    ifstream fin("maxim.in");
    ofstream fout("maxim.out");
    fin >> P >> N >> M;
    for(int i = 1; i <= N; i++)
    {
        fin >> n[i];
    }
    if(P == 1) 
    {
        for(int i = 1; i <= M; i++) 
        {
            m[n[i]]++; 
        }
        for(int i = 9; i >= 0; i--) 
        {
            for(int j = 1; j <= m[i]; j++) 
            {
                fout << i; 
            }
        }
    }
    else 
    {                                           
        for(int i = 1; i <= N - M + 1; i++)     
        {                                       
            for(int j = 0; j <= 9; j++)         
            {
                m[j] = 0;
            }
            for(int j = i; j < i + M; j++)      
            {
                m[n[j]]++;
            }
            int k = 9;
            while(k >= 0 && m[k] == maxim[k])   
                k--;                            
            if(m[k] > maxim[k])                
            {                                   
                k = 9;                        
                while(k >= 0)
                {
                    maxim[k] = m[k];
                    k--;
                }
                pozmax = i;
            }
            if(m[k] == maxim[k])           
                pozmax = i;                  
        }                                      
        fout << pozmax;                        
    }
    return 0;
}