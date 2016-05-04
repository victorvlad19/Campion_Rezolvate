#include <iostream>
#include <fstream>	

using namespace std;

ifstream fin("xyz.in");
ofstream fout ("xyz.out");

int main ()
{
    int x,y,z,i; fin >> x >> y >> z;
    for (i = 0; i < x-1; ++i) {
        y=y*10+z;
    }
    fout << y;

    return 0;
}
