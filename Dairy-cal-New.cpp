#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int x = 0;

	while (x != 6)
	{
		cout << "\n\n\t\t\"TOHEED DAIRIES PATTOKI\"";
		cout << endl;
		cout << endl;
		cout << "\n 1. DESI GHEE";
		cout << "\n 2. FRESH BUTTER";
		cout << "\n 3. FRESH CREAM";
		cout << "\n 4. FRESH KHOYA";
		cout << "\n 5. POWDERED MILK";
		cout << "\n 6. EXIT" << endl;

		cout << "\n\tEnter your choice: ";
		cin >> x;

		if (x == 1)
		{
			cout << "\t\"Desi Ghee Menu\"";
			int b, total;
			cout << "\n Price = Rs.700";
			cout << "\n Enter Quantity: ";
			cin >> b;
			total = 700 * b;
			cout << "\tTotal= " << total << endl;

			cout << "Press any key to return to menu......";
			_getch();

		}
		else if (x == 2)
		{
			cout << "\t\"Fresh Butter Menu\"";
			int c, total;
			cout << "\n Price = Rs.580";
			cout << "\n Enter Quantity: ";
			cin >> c;
			total = 580 * c;
			cout << "\tTotal= " << total << endl;

			cout << "Press any key to return to menu......";
			_getch();
		}
		else if (x == 3)
		{
			cout << "\t\"Fresh Cream Menu\"";
			int d, total;
			cout << "\n Price = Rs.350";
			cout << "\n Enter Quantity: ";
			cin >> d;
			total = 350 * d;
			cout << "\tTotal= " << total << endl;

			cout << "Press any key to return to menu.....";
			_getch();
		}
		else if (x == 4)
		{
			cout << "\t\"Fresh Khoya Menu\"";
			int e, total;
			cout << "\n Price = Rs.320";
			cout << "\n Enter Quantity: ";
			cin >> e;
			total = 320 * e;
			cout << "\tTotal= " << total << endl;

			cout << "\nPress any key to return to menu.....";
			_getch();
		}
		else if (x == 5)
		{
			cout << "\t\"Powdered Milk Menu\"";
			int i;
			cout << "\n  1.Ameican";
			cout << "\n  2.Power";
			cout << "\n  3.Victoria";
			cout << "\n\tEnter Your Choice: ";
			cin >> i;
			if (i == 1)
			{
				int f, total;
				cout << " Price = Rs.500";
				cout << "\n Enter Quantity: ";
				cin >> f;
				total = 500 * f;
				cout << "\tTotal= " << total << endl;

				cout << "\nPress any key to return to menu.....";
				_getch();
			}
			else if (i == 2)
			{
				int f, total;
				cout << " Price = Rs.480";
				cout << "\n Enter Quantity: ";
				cin >> f;
				total = 480 * f;
				cout << "\tTotal= " << total << endl;

				cout << "\nPress any key to return to menu.....";
				_getch();
			}
			else if (i == 3)
			{
				int f, total;
				cout << " Price = Rs.350";
				cout << "\n Enter Quantity: ";
				cin >> f;
				total = 350 * f;
				cout << "\tTotal= " << total << endl;

				cout << "\nPress any key to return to menu.....";
				_getch();
			}
		}
		system("cls");
	}
}
