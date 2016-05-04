#include <iostream>
#include <fstream>	

using namespace std;

ifstream fin("daruri.in");
ofstream fout ("daruri.out");

int max1 (int a, int b){
    return a > b ? a : b;
}


int main ()
{
    int t,l,max,a,b;
    fin >> t >> l; 
    max = max1 (t,l);
    if (max == t) {
        max = max-l;
    }
    else max = max - t;
    cout << max;

    return 0;
}
