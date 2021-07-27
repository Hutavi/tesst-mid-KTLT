#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main() {
	int a[101][101];
	int n = 0, m = 0;
	fstream filein;
	filein.open("input.txt");
	filein >> n;
	filein >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			filein >> a[i][j];
		}
	}
	ofstream fileout;
	fileout.open("output.txt");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			fileout << a[i][j] << " ";
		}
		fileout << "\n";
	}
	return 0;
}