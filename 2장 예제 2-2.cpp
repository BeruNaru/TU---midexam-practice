#include <iostream>

using namespace std;

double area(int a);

double area(int a) {
	return 3.14*a*a;
}

int main() {
	int n = 3;
	char c = '#';

	cout << c << 5.5 << '-' << n << "hello" << true << endl;
	cout << "a + 5" << n + 5 << '\n';
	cout <<  "면적은" << area(n);
}
