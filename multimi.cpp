#include <iostream>
#include <fstream>	

using namespace std;

ifstream fin("multimi.in");
ofstream fout ("multimi.out");

int main ()
{
    long long n,a,b,max=0,min=9223372036854775807;
    fin >> n;
    for (int i = 0; i <n; ++i) {
        fin >> a >> b;
        if (max<a) {
            max=a;
        }
        if (min>b) {
            min=b;
        }
    }
    for (int i = max; i <=min; ++i) {
        fout << i <<" ";
    }

    return 0;
}
