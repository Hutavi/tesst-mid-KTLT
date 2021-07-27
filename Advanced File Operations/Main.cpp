#include <iostream>
#include <fstream>
#include <string>


using namespace std;
int main() {
	fstream outfile("C:\\danduong\\data.bin", ios::out | ios::binary);

	for (int num = 0; num < 100; num++)
		outfile.write((const char*) &num, sizeof(num));

	outfile.close();

	return 0;
}