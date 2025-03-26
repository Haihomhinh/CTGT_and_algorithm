// Fibonacci
//input:7
//output: 0 1 1 2 3 5 8
#include <iostream>
using namespace std;

int Fibonacci(int n);

int main() {
	int n;
	cout << "Nhap so n: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << Fibonacci(i)<<" ";
	}
	return 0;
}

int Fibonacci(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}