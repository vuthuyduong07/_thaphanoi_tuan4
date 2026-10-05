<<<<<<< HEAD
#include <iostream>
using namespace std;

void thaphn(int sodia, char cotnguon, char cotdich, char cotgiua) {
    if (sodia == 1) {
        cout << "Chuyen dia 1 tu cot " << cotnguon << " sang coc " << cotdich << endl;
        return;
    }
    thaphn(sodia - 1, cotnguon, cotgiua, cotdich);
    cout << "Chuyen dia " << sodia << " tu cot " << cotnguon << " sang cot " << cotdich << endl;
    thaphn(sodia - 1, cotgiua, cotdich, cotnguon);
}
int main() {
    int sodia;
    cout << "Nhap so luong dia: ";
    cin >> sodia;
    thaphn(sodia, 'A', 'C', 'B'); 

=======
#include <iostream>
using namespace std;

void thaphn(int sodia, char cotnguon, char cotdich, char cotgiua) {
    if (sodia == 1) {
        cout << "Chuyen dia 1 tu cot " << cotnguon << " sang coc " << cotdich << endl;
        return;
    }
    thaphn(sodia - 1, cotnguon, cotgiua, cotdich);
    cout << "Chuyen dia " << sodia << " tu cot " << cotnguon << " sang cot " << cotdich << endl;
    thaphn(sodia - 1, cotgiua, cotdich, cotnguon);
}
int main() {
    int sodia;
    cout << "Nhap so luong dia: ";
    cin >> sodia;
    thaphn(sodia, 'A', 'C', 'B'); 

>>>>>>> d8a4de7caf3e38e100d66188f26538020cc28a97
    return 0;