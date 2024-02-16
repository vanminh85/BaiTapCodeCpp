#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum LuaChon { DUNG, TOM, CUA, BAU, CA, GA, NAI, RUNG };
const string tenLuaChon[] = { "Dung", "Tom", "Cua", "Bau", "Ca", "Ga", "Nai", "Rung" };

int main() {
    // Tiền cược ban đầu bằng 0
    int cuoc[8] = { 0 };
    // Số lần xuất hiện của con vật ban đầu bằng 0
    int lanLap[8] = { 0 };
    // Tiền cược tổng cộng ban đầu bằng 0
    int chon, cuocTong = 0;
    srand(time(nullptr));

    while (true) {
        cout << "Ban chon (0-Dung, 1-Tom, 2-Cua, 3-Bau, 4-Ca, 5-Ga, 6-Nai, 7-Rung): ";
        cin >> chon;

        if (chon == DUNG) {
            cout << "Chuc mung nam moi!" << endl;
            return 0;
        }
        if (chon >= TOM && chon <= NAI){
            cout << "Ban dat " << tenLuaChon[chon] << " bao nhieu tien? ";
            cin >> cuoc[chon];
            cuocTong = cuocTong + cuoc[chon];
        }
        else if (chon == RUNG) {
            cout << "Ban da dat cuoc " << cuocTong << "$" << endl;
            cout << "Ket qua rung: ";
            for (int i = 0; i < 3; ++i) {
                int t = rand() % 6 + TOM;
                lanLap[t]++; // Số lần con vật xuất hiện
                cout << tenLuaChon[t] << " ";
            }
            for (int i = 1; i <= NAI; ++i) {
                // Nếu con vật xuất hiện với số lần là "lanLap" thì tiền cược nhân với "lanLap" 
                // Nếu con vật không xuất hiện tiền cược
                cuocTong += lanLap[i] > 0 ? lanLap[i] * cuoc[i] : -cuoc[i];
                lanLap[i] = 0;
            }
            cout << endl;
            cout << "Ban con " << cuocTong << "$" << endl;
        }        
    }
}