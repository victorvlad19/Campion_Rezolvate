#include <iostream>
#include <fstream>	

using namespace std;

ifstream fin("conturi.in");
ofstream fout ("conturi.out");

int max (int a,int b){
    return a>b?a:b;
}

int main ()
{
    int n,i,b,a,aux,r,nrb,maxim=0; fin >> n >> b;
    for (i = 0; i < n; ++i) {
        fin >> a;  
        aux = a;
        r = aux/100000;
        nrb = (a/10000)%10;
        if (r==b && nrb==1) {
            maxim = max(maxim,a%10000);
        }
    }
    fout << maxim;
    return 0;
}
