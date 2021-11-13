#include <iostream>

using namespace std;

int main()
{
	int a, b, c, i;
	cout << "do add vared konid:\n";
	cin >> a >> b;
	for (i = 1;; i++) {
		if (a < b) {
			c = b;
		}
		else {
			c = a;
		}
		c *= i;
		if ((c % a == 0) && (c % b == 0)) {
			cout << "k.m.m mored nazar:   " << c << endl;
			break;
		}
	}
	return 0;
}