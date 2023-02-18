    #include <iostream>
    #include <fstream>
    #include <iomanip>
    std::string filename = "file";
    std::ifstream in(filename + ".in");
    std::ofstream out(filename + ".out");

    int main()
    {
        int n, x;
        std::cin>>n;
        for(int i=1;i<=n;i++)
        {
            std::cin>>x;
           
                int ndiv = 0;
           for(int d =1 ; d * d <= x ; d ++ )
                if(x % d == 0)
                {
                    ndiv++;
                if(d * d < x) 
                    ndiv++;
                }
            if(ndiv == 2) {
                std::cout << "DA";
                return 0;
            }
        }
        std::cout<<"NU";
        return 0;
    }