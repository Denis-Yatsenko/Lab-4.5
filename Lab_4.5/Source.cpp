#include <iostream>
#include <cmath>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y;
	int R;

	cout << "R = ";cin >> R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if ((y >= 0 && (y * y) <= pow(R, 2) - pow(x, 2)) || (y <= 0 && y >= -R && y <= x))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;

	}
	cout << endl << fixed;
	for (int i = 0; i < 10; i++)
	{
		double x = -R + rand() * (2 * R) / RAND_MAX;
		double y = -R + rand() * (2 * R) / RAND_MAX;
		if ((y >= 0 && (y * y) <= pow(R, 2) - pow(x, 2)) || (y <= 0 && y >= -R && y <= x))
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(2) << x << " "
			<< setw(8) << setprecision(2) << y << " " << "no" << endl;
	}
	return 0;
}
