#include <iostream>
#include <cmath>

using namespace std;
double h(const double x);

int main()
{
	double qp, qk, z;
	int h;

	cout << "qp = "; cin >> qp;
	cout << "qk = "; cin >> qk;
	cout << "h = "; cin >> h;

	double dq = (qk - qp) / h;
	double q = qp;

	while (q <= qk)
	{
		z = h * (q + 1) + h * (q*q + 1) + h*h * (q*q);
		cout << q << " " << z << endl;

		q += dq;
	}

	return 0;
}
double h(const double x)
{
	if (abs(x) >= 1)
		return (cos(x) + 1) / (cos(x)*cos(x) + 1);
	else
	{
		double S = 0;
		int i = 0;
		double a = x;
		S = 1 / cos(x) * a;
		do
		{
			i++;
			double R = x*x/((2*i - 1) * 2*i);
			a *= R;
			S += a;

		} while (i < 6);

		return S;
	}
}