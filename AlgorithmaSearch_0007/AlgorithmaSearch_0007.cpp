#include <iostream>
using namespace std;

int arr[20]; // Array to be searched
int n;       // Number of elements in the array

void input() {
    while (true) {
        cout << "masukan jumlah element array: ";
        cin >> n;
        if (n > 0 && n <= 20) {
            break;
        }
        else {
            cout << "\narray harus mempunyai minim 1 dan maksimum 20.\n\n";
        }
    }

    cout << "\nmasukan elemen array:\n";
    for (int i = 0; i < n; i++) {
        cout << "<" << (i + 1) << "> ";
        cin >> arr[i];
    }
}
