#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#pragma pack(1)

struct TestScore{
	int studentID;
	double score;
	char grade;
};

//TestScore scores[] = {
//	{1, 6.8, 'D'},
//	{2, 7.9, 'B'},
//	{3, 9.5, 'A'}
//};

TestScore score[3];

int main() {
	
	//fstream outfile("scores.bin", ios::out | ios::binary);
	////cach 1
	//for (int num = 0; num < 100; num++)
	//	outfile.write((const char*)&num, sizeof(num));


	// cach2
	/*int nums[100];
	for (int num = 0; num < 100; num++) {
		nums[num] = num;
	}
	outfile.write((const char*)nums, sizeof(nums));*/


	/*outfile.write((const char*)&scores[0], sizeof(TestScore));
	outfile.write((const char*)&scores[1], sizeof(TestScore));
	outfile.write((const char*)&scores[2], sizeof(TestScore));
	outfile.close();*/

	fstream infile("scores.bin", ios::in || ios::binary);
	infile.seekg(0, ios::end);
	long int pos = infile.tellg();
	cout << pos << endl;
	int n = pos / sizeof(TestScore);
	cout << n << endl;
	cout << sizeof(TestScore);;
	

	/*infile.seekg(2 * sizeof(TestScore), ios::beg);
	infile.read((char *)&score, sizeof(TestScore) * 3);*/

		/*cout << score.studentID << endl;
		cout << score.score << endl;
		cout << score.grade << endl;*/

	

	
	infile.close();
	return 0;
}