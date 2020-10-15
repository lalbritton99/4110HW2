#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main(){

	ofstream fout;
	fout.open("dataset.txt");					//output to "dataset.txt"
	//for(int i=0;i<1;i++){						//Add for multiple lines of datasets
		for(int i=0;i<1000000;i++){
			int randNum = (((rand()%2000))-1000); 		//1000 to -1000
			fout << randNum << " ";				//" " delimited
		}
		fout << endl;						//newline marks EOF
	//}

	fout.close();

return 0;
}
