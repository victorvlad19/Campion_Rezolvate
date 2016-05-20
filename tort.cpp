#include <iostream>
#include <fstream>	

using namespace std;

ifstream fin("tort.in");
ofstream fout ("tort.out");

int main ()
{
    int m, n, mul,l=0,portii=0;
    fin >> m >> n;
    
    mul = m * n;
    
    while(m != n) {
        if(m > n)
            m -= n;
        else
            n -= m;
    }

    l = n*n;
    portii = mul / l;
    
    fout << portii << " "<< l/n;
    return 0;
}
