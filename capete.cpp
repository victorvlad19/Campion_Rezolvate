#include <iostream>
#include <fstream>	

using namespace std;

ifstream fin("capete.in");
ofstream fout ("capete.out");

int main ()
{
    int n,a=5,i;
    fin >> n;
    for (i = 0; i < n-1; ++i) {
        a=a+5;
    }
    fout << a;
    return 0;
}
