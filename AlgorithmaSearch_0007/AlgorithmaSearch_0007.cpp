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

void LinearSearch() {
    char ch;
    do {
        int ctr = 0; // Number of comparisons
        int item;
        cout << "\nmasukan element yang ingin kamu cari: ";
        cin >> item;

        bool found = false;
        for (int i = 0; i < n; i++) {
            ctr++;
            if (arr[i] == item) {
                found = true;
                cout << "\n" << item << " ditemukan pada posisi " << (i + 1) << endl;
                break;
            }
        }

        if (!found) {
            cout << "\n" << item << " array tidak ditemukan\n";
        }
        cout << "\nJumlah perbandingan: " << ctr << endl;

        cout << "\nlanjukan mencari (y/n): ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
}

void display() {
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; 
}

int main() {  
    input();
    LinearSearch();
    display();
    return 0;
}
