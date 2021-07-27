#include <iostream>
#include <fstream>
#include <stack>
using namespace std;

int main() {
	int num;
	stack<int> st;
	fstream infile("C:\\danduong\\input.txt", ios::in);
	fstream outfile("output.txt", ios::out);
	while (!infile.eof()) {
		infile >> num;
		st.push(num);
	}

	while (!st.empty()){ //empty la tap rong. !st.empty co nghia la tap khong rong.
		outfile << st.top() << endl;
		st.pop();
	}
	infile.close();
	outfile.close();

	return 0;
}