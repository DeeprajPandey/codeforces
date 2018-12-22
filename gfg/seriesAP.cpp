#include <iostream>
using namespace std;

void ap(int x, int y, int n) {
	int term = x + (n-1) * (y-x);
	cout << term << endl;
}

int main(void) {
	int a, b, n, t;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		cin >> n;
		ap(a, b, n);
	}
	return 0;
}