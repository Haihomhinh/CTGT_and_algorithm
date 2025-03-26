//Factorial_of_a_number
//input:10
//output: 3628800
#include<iostream>
using namespace std;

int Factorial(int n);

int main() {
	int n;
	cout << "Nhap so n: ";
	cin >> n;
	cout << "Giai thua cua " << n << " la: " << Factorial(n);
	return 0;
}

int Factorial(int n) {
	if (n == 0)return 1;
	return n * Factorial(n - 1);
}