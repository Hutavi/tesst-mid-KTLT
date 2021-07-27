#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	string s;
	string s1;
	ifstream filein("info.txt");
	ofstream fileout("inforout.txt");
	while (filein.eof() == false) {
		getline(filein, s);
		cout << s << "\n"; //(cach 1)
		//s1.append(s + " "); //ham noi chuoi (cach 2)
		//cout << s << " "; // cach 2
	}

	//fileout << s1; //cach2
	

	return 0;
}