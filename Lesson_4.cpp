// Towers of Hanoi puzzle
//input:3
//ouput: 
//Di chuyen dia 1 tu A den C
//Di chuyen dia 2 tu A den B
//Di chuyen dia 1 tu C den B
//Di chuyen dia 3 tu A den C
//Di chuyen dia 1 tu B den A
//Di chuyen dia 2 tu B den C
//Di chuyen dia 1 tu A den C

#include <iostream>
using namespace std;


void towersOfHanoi(int n, char from, char to, char temp) {
	if (n == 1) {
		cout << "Di chuyen dia 1 tu " << from << " den " << to << endl;
		return;
	}
	towersOfHanoi(n - 1, from, temp, to);
	cout << "Di chuyen dia " << n << " tu " << from << " den " << to << endl;
	towersOfHanoi(n - 1, temp, to, from);
}

int main() {
	int n;
	cout << "Nhap so dia: ";
	cin >> n;
	towersOfHanoi(n, 'A', 'C', 'B');
	return 0;
}