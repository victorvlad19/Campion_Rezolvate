#include <iostream>
#include <fstream>	

using namespace std;

ifstream fin("prize.in");
ofstream fout ("prize.out");

int main ()
{
    int n,a,i,s=0;
    fin >> n;
    for (int i = 0; i <n; ++i) {
        fin >> a;
        s=s+a;
    }
    fout << s-(n-1);
    return 0;
}
