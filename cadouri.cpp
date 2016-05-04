#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int fete, baieti, cadouri, eticheta;

	ifstream in("cadouri.in");
	in >> fete >> baieti >> cadouri;
	
	for(int i = 0; i < cadouri; i++){
		in >> eticheta;
		
		if(eticheta%2 == 0){
			if(fete > 0) 
				fete--;
		}
		else{
			if(baieti > 0)
				baieti--;
		}
	}

	in.close();

	ofstream out("cadouri.out");
	out << fete << endl << baieti;
	out.close();

	return 0;
}
