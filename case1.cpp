#include <iostream>
#include <fstream>	

using namespace std;

ifstream fin("case1.in");
ofstream fout ("case1.out");

int main ()
{
    int n,a,aux,nr1=0,nr2=0,nr3=0,nr4=0,nr5=0,nr6=0; fin >> n;
    for (int i = 0; i < n; ++i) {
        fin >> a;
        aux = a;
        if (a/1000 == 1) nr1++;
        if (a/1000 == 2) nr2++;
        if (a/1000 == 3) nr3++;
        nr4=nr4+(aux/100)%10;
        aux = a;
        nr5=nr5+(aux/10)%10;
        aux = a;
        nr6 = nr6 + aux%10;
    }
    fout << nr1<< endl<< nr2<< endl << nr3<<endl<<nr4<<endl<<nr5<<endl<<nr6;
    return 0;
}
