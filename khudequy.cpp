#include <iostream>
#include <stack>
using namespace std;
struct sx{
    bool labuochuyen; 
    int sodia;           
    char cotnguon, cotdich, cotgiua;
};
void thaphn(int sodia, char cotnguon, char cotdich, char cotgiua) {
    stack<sx> nganXep;
    nganXep.push({false, sodia, cotnguon, cotdich, cotgiua});
while (!nganxep.empty()) {
        sx hientai = nganxep.top();
        nganxep.pop();
         if (hientai.labuochuyen) {
            cout << "Chuyen dia " << hientai.sodia << " tu cot " << hientai.cotnguon << " sang cot " << hientai.cotdich << endl;
        } else {
            if (hientai.sodia == 1) {
                cout << "Chuyen dia 1 tu cot " << hientai.cotnguon << " sang cot " << hientai.cotdich << endl;
            } else {
                nganxep.push({false, hientai.sodia - 1, hientai.cotgiua, hientai.cotdich, hientai.cotnguon});
                nganxep.push({true, hientai.sodia, hientai.cotnguon, hientai.cotdich, hientai.cotgiua});
                nganxep.push({false, hientai.sodia - 1, hientai.cotnguon, hientai.cotgiua, hientai.cotdich});
            }
        }
    }
}

int main() {
    int sodia;
    cout << "Nhap so luong dia: ";
    cin >> sodia;
    thaphn(sodia, 'A', 'C', 'B');
    return 0;
}