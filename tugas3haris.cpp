#include <iostream>
using namespace std;

int main() {
    int score;

    // Meminta pengguna memasukkan nilai score
    cout << "Masukkan nilai score: ";
    cin >> score;

    // Evaluasi nilai score menggunakan logika if-else
    if (score >= 80) {
        cout << "Anda mendapatkan nilai B." << endl;
    } else if (score >= 70) {
        cout << "Anda mendapatkan nilai C." << endl;
    } else if (score >= 60) {
        cout << "Anda mendapatkan nilai D." << endl;
    } else {
        cout << "Anda mendapatkan nilai E." << endl;
    }

    return 0;
}
