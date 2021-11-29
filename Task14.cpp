#include <iostream>
using namespace std;
int main() {
	setlocale(0,"");
	int i[]{ 0,1,2,3,4,5,6,7,8,9 };
	short s[]{ 0,1,2,3,4,5,6,7,8,9 };
	long l[]{ 0,1,2,3,4,5,6,7,8,9 };
	float f[]{ 0,1,2,3,4,5,6,7,8,9 };
	double d[]{ 0,1,2,3,4,5,6,7,8,9 };
	char c[]{ '0','1','2','3','4','5','6','7','8','9' };
	bool b[]{ 0,1,0,1,0,1,0,1,0,1 };
	string ss[]{ "0","1","2","3","4","5","6","7","8","9" };
	cout << "[+]Ìàññèâ INT:\n";
	for (int i2 = 0; i2 < 10; i2++)
		cout << "[+]i[" << i2 << "] = " << i[i2] << endl;
	cout << endl;
	cout << "[+]Ìàññèâ SHORT:\n";
	for (int i2 = 0; i2 < 10; i2++)
		cout << "[+]s[" << i2 << "] = " << s[i2] << endl;
	cout << endl;
	cout << "[+]Ìàññèâ LONG:\n";
	for (int i2 = 0; i2 < 10; i2++)
		cout << "[+]l[" << i2 << "] = " << l[i2] << endl;
	cout << endl;
	cout << "[+]Ìàññèâ FLOAT:\n";
	for (int i2 = 0; i2 < 10; i2++)
		cout << "[+]f[" << i2 << "] = " << f[i2] << endl;
	cout << endl;
	cout << "[+]Ìàññèâ DOUBLE:\n";
	for (int i2 = 0; i2 < 10; i2++)
		cout << "[+]d[" << i2 << "] = " << d[i2] << endl;
	cout << endl;
	cout << "[+]Ìàññèâ CHAR:\n";
	for (int i2 = 0; i2 < 10; i2++)
		cout << "[+]c[" << i2 << "] = " << c[i2] << endl;
	cout << endl;
	cout << "[+]Ìàññèâ BOOL:\n";
	for (int i2 = 0; i2 < 10; i2++)
		cout << "[+]b[" << i2 << "] = " << b[i2] << endl;
	cout << endl;
	cout << "[+]Ìàññèâ STRING:\n";
	for (int i2 = 0; i2 < 10; i2++)
		cout << "[+]ss[" << i2 << "] = " << ss[i2] << endl;
	cout << endl;
	return 0;
}
