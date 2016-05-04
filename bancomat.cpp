#include <iostream>
#include <fstream>	

using namespace std;

ifstream fin("bancomat.in");
ofstream fout ("bancomat.out");

int main ()
{
    int s,n,a,p,i; fin >> s; fin>> n;
    for (i = 0; i < n; ++i) {
        fin >> a;
        p = a % 10;
        a = a /10;
        if (p == 2) {
            s +=a;
        }
        else if (s>a) {
            s-=a;
        }
    }
    fout << s;
    return 0;
}
