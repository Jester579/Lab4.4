#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, y, R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;

	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(10) << "y" << " |" << endl;
	cout << "----------------------" << endl;

	x = xp;

	while (x <= xk)
	{

		if (x < -2)
			y = 3 + x;
		else
			if (-2 <= x && x < 4)
				y = -1. / 2. * x;
			else
				if (4 <= x && x <= 8 - R)
					y = -R;
				else 
					if (8 - R < x && x <= 8 + R)
						y = -sqrt(R * R - pow(x - 8, 2));
					else 
						y = -R;
				
		
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "----------------------" << endl;
	return 0;
}
