#include <iostream>
using namespace std;

// Assumption: only 3 digit input
bool amstrng(int x) {
	int t = x;
	int r, s;
	while(t) {
		r = t%10;
		s += (r*r*r);
		t /= 10;
	}
	return (s==x);
}

int main(void) {
	int t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		if (amstrng(n)) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
	}
	return 0;
}