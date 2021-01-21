

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	
	cout << "Print number m:";
	int m, a;
	cin >> a;
	cout << "Print number n:";
	int n, b;
	cin >> b;
	n = b;
	m = a;
	cout << "Rachet:" << endl;
	cout << "Result 1: " << n-- - m << endl;
	n = b;
	m = a;
	cout << "Result 2: " << ((m-- < n) ? "true" : "false") << endl;
	n = b;
	m = a;
	cout << "Result 3: " << ((n++ > m) ? "true" : "false") << endl;
	cout << "Rachet:" << endl;
	n = b;
	m = a;
	cout << "Result 1: " << n-- - m << endl;
	cout << "Result 2: " << ((m-- < n) ? "true" : "false") << endl;
	cout << "Result 3: " << ((n++ > m) ? "true" : "false") << endl;
	system("pause");
	return 0;
}


