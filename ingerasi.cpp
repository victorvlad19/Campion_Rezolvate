#include <iostream>
#include <fstream>	

using namespace std;

ifstream fin("ingerasi.in");
ofstream fout ("ingerasi.out");

int euclid (int a, int b)
{
    if (b==0) return a;
    else return euclid (b,a%b);
}

int main ()
{
    int n,a,b,d;
    fin >> n >> a >> b;
    d=euclid (a,b);
    for (int i = 0; i < n; ++i) {
        fin >> a;
        d = euclid (a,d);
    }
    fout << d;
    return 0;
}
