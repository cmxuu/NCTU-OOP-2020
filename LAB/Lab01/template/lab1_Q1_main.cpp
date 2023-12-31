#include <iostream>
#include "lab1_Q1.h"

using namespace std;

int main()
{
	int n;
	cin >> n;

	while (n--)
	{
		char command;
		cin >> command;

		switch (command) {

			int a1, b1, c1, d1, a2, b2, c2, d2;

			case 'p':
			{
				cin >> a1 >> b1 >> c1 >> d1;
				MATRIX m1(a1, b1, c1, d1);
				m1.print();
				break;
			}
				

			case '+':
			{
				cin >> a1 >> b1 >> c1 >> d1 >> a2 >> b2 >> c2 >> d2;
				MATRIX m1(a1, b1, c1, d1), m2(a2, b2, c2, d2);
				m1.add(m2);
				m1.print();
				break;
			}

			case '*':
			{
				cin >> a1 >> b1 >> c1 >> d1 >> a2 >> b2 >> c2 >> d2;
				MATRIX m1(a1, b1, c1, d1), m2(a2, b2, c2, d2);
				m1.multiple(m2);
				m1.print();
				break;
			}
			case 'd':
			{
				cin >> a1 >> b1 >> c1 >> d1;
				MATRIX m1(a1, b1, c1, d1);
				m1.det();
				break;
			}
			default:
			{
				cout << "wrong input!";
				break;
			}
		}
	}

	system("pause");
	return 0;
}