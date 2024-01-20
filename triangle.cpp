#include<iostream>
using namespace std;
int main()
{
	double x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0;
	int equisides = 0, d1 = 0, d2 = 0, d3 = 0;
	cout << "Enter your first sides point coordinates precisely : ";
	cin >> x1 >> y1;
	cout << "Enter your second sides point coordinates precisely : ";
	cin >> x2 >> y2;
	cout << "Enter your third sides point coordinates precisely : ";
	cin >> x3 >> y3;
	d1 = ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2));
	d2 = ((x2 - x3) * (x2 - x3)) + ((y2 - y3) * (y2 - y3));
	d3 = ((x3 - x1) * (x3 - x1)) + ((y3 - y1) * (y3 - y1));
	if (d1 != d2 && d2 != d3 && d3 != d1)
	{
		equisides = 0;
	}
	else if (d1 == d2 && d2 == d3)
	{
		equisides = 3;
	}
	else if ((d1 == d2 && d2 != d3) || (d1 == d3 && d3 != d2) || (d2 == d3 && d3 != d1))
	{
		equisides = 2;
	}
	switch (equisides)
	{
	case 0:
		cout << "It is a scalence triangle" << endl;
		break;
	case 3:
		cout << "It is an equilateral triangle" << endl;
		break;
	case 2:
		cout << "It is an isosceles triangle" << endl;
		break;
	}
	if ((d1 == (d2 + d3)) || (d2 == (d1 + d3)) || (d3 == (d1 + d2)))
	{
		cout << "It is also a right angled triangle" << endl;
	}
	system("pause");
	return 0;
}