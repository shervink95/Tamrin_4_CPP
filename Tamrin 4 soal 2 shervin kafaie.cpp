#include <iostream>

using namespace std;

int main()
{
	int a, i, b;
	cout << "add mored nazar ra vared konid:\n";
	cin >> a;
	for (i = 1, b = 1; b < a; i++) {
		b *= i;
		if (a == b) {
			cout << "yes\n";
		}
	}
	if (b > a) {
		cout << "no\n";
	}
	if (a == 1) {
		cout << "yes\n";
	}
	return 0;
}