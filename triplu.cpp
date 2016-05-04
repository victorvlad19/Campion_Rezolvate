#include <iostream>
#include <fstream>	

using namespace std;

ifstream fin ("triplu.in");
ofstream fout ("triplu.out");

int combine(int a, int b) {
   int times = 1;
   while (times <= b)
      times *= 10;
   return a*times + b;
} 
int max (int a, int b){
    return a > b ? a : b; 
}

int main ()
{
    int a,b,c,d;
    fin >> a >> b;
    c = combine (a,b);
    d = combine (b,a);
    fout << max (c,d) * 3;
    return 0;
}
