#include<iostream>
using namespace std;

void calculateAggregate(int additionalMarks) {
	int interYear, matricMarks, interMarks, entryMarks;
	cout << "\n Matric Marks: ";
	cin >> matricMarks;
	cout << "\n Intermediate Marks: ";
	cin >> interMarks;
	cout << "\n PUCIT Entry Test Marks: ";
	cin >> entryMarks;
	cout << "\n Passing Year of Last Degree: ";
	cin >> interYear;
	int presentYear;
	cout << "\n Enter Present Year: ";
	cin >> presentYear;
	int yearDeduction = 2 * (presentYear - interYear);
	float totalAggregate = 70 * ((matricMarks / 4.0) + interMarks + additionalMarks) / (1375);
	totalAggregate += (30 * entryMarks / 140.0);
	cout << "\n Morning Aggregate: " << totalAggregate - yearDeduction;
	cout << "\n Afternoon Aggregate:  " << totalAggregate;
}

int main() {

	cout << "\n\t\t\t\t\t786\n";
	cout << "\n\t\t\t\tPUCIT MERIT CALCULATOR\n";
	char hafiz;
	cout << "\n\n\n Are you Hafiz-e-Quran or Not[ 'Y' , 'y' AND 'N' OR 'n' ]: ";
	cin >> hafiz;
	if (hafiz == 'Y' || hafiz == 'y')
		calculateAggregate(20);
	else if (hafiz == 'N' || hafiz == 'n')
		calculateAggregate(0);
	else
		printf("\n\t\t\t\aWrong Input!");

	cout << endl;
	system("pause");
	return 0;
}