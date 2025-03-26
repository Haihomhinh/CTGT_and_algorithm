// Test case 1
// Input:6
//      56 45 8 56 32 12
// Output:8 45 12 32 56 56
// Test case 2
// Input:5
//      12  10  3   98  7
// Output: 10 12 3 98 7
// Test case 3
// Input:10
//      10 9 8 7 6 5 4 3 2 1 
// Output: 2 9 4 7 6 5 8 3 10 1
#include <iostream>
#include <algorithm> 
using namespace std;

void nhapMang(int a[], int& n);
void sapXepChan(int a[], int n);

int main() {
    int a[100], n;
    nhapMang(a, n);
    sapXepChan(a, n);
    cout << "Mang sau khi sap xep cac so chan tu be den lon: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

void nhapMang(int a[], int& n) {
    cout << "Nhap so phan tu n: ";
    cin >> n;
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void sapXepChan(int a[], int n) {
    int chan[100], j = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            chan[j++] = a[i];
        }
    }
    sort(chan, chan + j);
    j = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            a[i] = chan[j++];
        }
    }
}

