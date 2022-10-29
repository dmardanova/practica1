#include <iostream>
using namespace std;
int main() {
	//1
	cout << sizeof(int) << "\n" << sizeof(short int) << "\n" << sizeof(long int) << "\n"
		<< sizeof(float) << "\n" << sizeof(double) << "\n" << sizeof(long double) << "\n" << sizeof(char) << "\n" << sizeof(bool) << "\n" << endl;
	// 2
	int number;
	cin >> number;
	int a = sizeof(int) * 8;
	unsigned int mask = 1 << sizeof(int) * 8 - 1;
	for (int i = 0; i < sizeof(int) * 8; i++) {
		if (i == 1 || i % 8 == 0) {
			putchar(' ');
		}
		putchar(number & mask ? '1' : '0');
		mask = mask >> 1;
	}
	//3
	mask = 1 << (a - 1);

	cout << "\n\n\t\tTask 3\n";
	union {
		int tool;
		float f;

	};
	cout << "Enter float";
	cin >> f;

	for (int i = 1; i <= a; i++)
	{
		cout << ((tool & mask) ? 1 : 0);
		if (i == 1 || i % 8 == 0)
			cout << " ";
		mask >>= 1;
	}
	cout << "\n";
	//4
	cout << "\n\n\t\tTask 4\n";
	union {
		double d;
		int arr[2];
	};
	cout << "Enter double";
	cin >> d;
	mask = 1 << (a - 1);

	for (int i = 1; i <= a; i++)
	{
		cout << ((arr[0] & mask) ? 1 : 0);
		if ( i == 1 || i % 8 == 0)
			cout << " ";
		mask >>= 1;
	}
	mask = 1 << (a - 1);
	for (int i = 1; i <= a; i++)
	{
		cout << ((arr[1] & mask) ? 1 : 0);
		if (i % 8 == 0)
			cout << " ";
		mask >>= 1;
	}
	cout << "\n";
	//идз
	int c;
	int b;
	cin >> b;
	c = number >> b;
	cout << endl;
	mask = 1 << (a - 1);
	for (int i = 0; i < sizeof(int) * 8; i++) {
		if (i == 1 || i % 8 == 0) {
			putchar(' ');
		}
		putchar(c & mask ? '1' : '0');
		mask = mask >> 1;
	}

	cout << endl << c;
}
