#include <iostream>
#include <fstream>	

using namespace std;

ifstream fin("alo.in");
ofstream fout ("alo.out");

int main ()
{
    int s,n,a,b,i,z;
    // 9 Din retea , 5 Alta Retea || 1 Suna ea , 2 Este sunata
    fin >> s >> n;
    for (i = 0; i < n; ++i) {
        fin >> a >> b;
        if (a%10==5) {
            z = a/10000;
            if (z==1) {
                s -=b*2;
            }
            else s+=b;
        }
    }
    fout << s;
    return 0;
}
