#include<iostream>
using namespace std;

void calculateAggregate(int additionalMarks) {
	int interYear, matricMarks, interMarks;
	cout << "\n Matric Marks: ";
	cin >> matricMarks;
	cout << "\n Intermediate Marks: ";
	cin >> interMarks;
	cout << "\n Passing Year of Inter: ";
	cin >> interYear;
	int presentYear;
	cout << "\n Enter Present Year: ";
	cin >> presentYear;
	int yearDeduction = 2 * (presentYear - interYear);
	double totalAggregate = 100 * ((matricMarks / 4.0) + interMarks + additionalMarks) / (1375);	
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
