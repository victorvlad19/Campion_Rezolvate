#include <iostream>
#include <fstream>	

using namespace std;

ifstream fin("rachete.in");
ofstream fout ("rachete.out");

int main ()
{
    int n,i,nr1=0,nr2=0,nr3=0,a;
    fin >> n;
    for (int i = 0; i <n; ++i) {
        fin >> a;
        if (a==1) nr1++;
        if (a==2) nr2++;
        if (a==3) nr3++;
    }
    for (int i = 0; i <nr1; ++i) {
        fout << "1"<<" ";
    }
    for (int i = 0; i <nr2; ++i) {
        fout << "2"<<" ";
    }
    for (int i = 0; i <nr3; ++i) {
        fout << "3"<< " ";
    }
    return 0;
}
