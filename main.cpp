
#include <iostream>
using namespace std;

int main() {
    int menu, total = 0;
    int ulang;

    do {
        cout << " MENU MAKANAN " << endl;
        cout << "1. Pecel = Rp10000" << endl;
        cout << "2. Teh = Rp3000" << endl;
        cout << "3. Kopi = Rp5000" << endl;
        cout << "Pilih menu: ";
        cin >> menu;

        if (menu == 1) {
            total = total + 10000;
        } else if (menu == 2) {
            total = total + 3000;
        } else if (menu == 3) {
            total = total + 5000;
        } else {
            cout << "Menu tidak tersedia!" << endl;
        }

        cout << "Pilih lagi tekan y atau Y: ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "Total pembayaran: Rp" << total << endl;

    return 0;
}
