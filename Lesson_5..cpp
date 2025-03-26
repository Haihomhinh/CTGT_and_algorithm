//The Array is in sorted or not sorted 
//Input:5 and 1 3 4 8 9
//Output: The array is sorted order.
//Input:5 and 1 3 4 8 2
//Output: The array is not sorted order.
#include<iostream>
using namespace std;

bool checkAscendenSort(int*a, int n) {
	if (n<=1) {
		return true;
	}
	if (a[0] > a[1]) return false;

	else {
		return checkAscendenSort(a+1, n - 1);
	}
}

bool checkDecendenSort(int* a, int n) {
	if (n <= 1) {
		return true;
	}
	if (a[0] < a[1]) return false;
	else {
		return checkDecendenSort(a + 1, n - 1);
	}
}

int main() {

	int n;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;

	int* a = new int[n];

	cout << "Nhap mang: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	if (checkAscendenSort(a, n) || checkDecendenSort(a, n)) {
		cout << "The array is sorted order." << endl;
	}
	else {
		cout << "The array is not sorted order." << endl;
	}

	delete a;
	return 0;
}