#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream f;
	f.open("INPUT.TXT");
	int n;
	//doc n 
	f >> n;
	int a[101];
	for (int i = 1; i <= n; i++) {
		f >> a[i];
	}
	ofstream f1;
	f1.open("OUTPUT.TXT");
	for (int i = 1; i <= n; i++) {
		f1 << a[i] << " ";
	}
	return 0;
}