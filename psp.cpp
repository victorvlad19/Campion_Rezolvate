#include <iostream>
#include <fstream>

using namespace std;

int main()
{	
	unsigned int nJoc, memorie, joc, instalate = 0;
	
	ifstream in("psp.in");
	in >> nJoc >> memorie;

	for(unsigned int i = 0; i < nJoc; i++){
		in >> joc;

		if(!memorie) break;

		if(joc <= memorie){
			memorie -= joc;
			instalate++;
		}
	} 

	in.close();

	ofstream out("psp.out");
	out << instalate << " " << memorie;
	out.close();

	return 0;
}
