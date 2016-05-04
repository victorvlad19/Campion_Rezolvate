#include <iostream>
#include <fstream>	

using namespace std;

ifstream fin("sume4.in");
ofstream fout ("sume4.out");

int main ()
{
    int n,i,dr=0,st=0,mij=0,num,s1=0,s2=0;
    fin >> n;
    for (i = 0; i < n; ++i) {
        fin >> num;
        dr = num % 100; num = num / 100;
        mij = num % 10; num = num / 10;
        st = num;
        s1 += st; s2 += dr;
        if (st<dr) {s1=s1+mij;}
        if (dr<st) {s2=s2+mij;}
    }
    fout << s1 << " "<< s2;
    return 0;
}
