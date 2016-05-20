#include <iostream>
#include <fstream>	

using namespace std;

ifstream fin("comori.in");
ofstream fout ("comori.out");

int main ()
{
    int a,b,x=0,y=0,n;
    fin >> n;
    for (int i = 0; i < n; ++i) {
        fin >> a >> b;
        if (a == 1) {y+=b;}
        if (a == 2) {x+=b;y+=b;}
        if (a == 3) {x+=b;}
        if (a == 4) {x+=b; y-=b;}
        if (a == 5) {y-=b;}
        if (a == 6) {x-=b; y-=b;}
        if (a == 7) {x-=b;}
        if (a == 8) {x-=b; y+=b;}
    }
    fout << x <<" "<< y;
    return 0;
}
