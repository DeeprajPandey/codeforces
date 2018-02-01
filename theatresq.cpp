#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n, m, a;
	cin >> n >> m >> a;

	cout << ceil(n / (double)a) * ceil(m / (double)a) << endl;

	return 0;
}
