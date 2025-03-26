//GenerateBinaryStrings
//input:3
//output: 000 001 010 011 100 101 110 111
#include<iostream>
#include<string>

using namespace std;
void generateBinaryStrings(int n, string s);

int main() {
	int n;
	cout << "Nhap so n: ";
	cin >> n;
	generateBinaryStrings(n, "");
	return 0;
}

void generateBinaryStrings(int n, string s) {
	if (n == 0) {
		cout << s << endl;
		return;
	}
	generateBinaryStrings(n - 1, s + "0");
	generateBinaryStrings(n - 1, s + "1");
}
