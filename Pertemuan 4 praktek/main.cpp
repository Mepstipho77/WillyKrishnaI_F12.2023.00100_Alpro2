#include <iostream>

using namespace std;

int isKelipatan3(int x) {
    return x % 3 == 0 ? 1 : 0;
}

int main() {
    int number;
    cout << "Masukkan nilai: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "Bilangan Genap" << endl;
    } else {
        cout << "Bilangan Ganjil" << endl;
    }

    if (isKelipatan3(number)) {
        cout << "Bilangan Kelipatan 3" << endl;
    } else {
        cout << "Bilangan Bukan Kelipatan 3" << endl;
    }

    return 0;
}
