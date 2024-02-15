#include <iostream>
#include <cstdlib>
#include <ctime>
#define DUNG 0
#define TOM 1
#define CUA 2
#define BAU 3
#define CA 4
#define GA 5
#define NAI 6
#define RUNG 7
using namespace std;

void xuat(int cuoc[]) {
    if (cuoc[TOM] + cuoc[CUA] + cuoc[BAU] + cuoc[CA] + cuoc[GA] + cuoc[NAI] == 0)
        cout << "Ban chua dat cuoc";
    else {
        cout << "Ban dang dat cuoc: ";
        if (cuoc[TOM] > 0)
            cout << "Tom (" << cuoc[TOM] << "$) ";
        if (cuoc[CUA] > 0)
            cout << "Cua (" << cuoc[CUA] << "$) ";
        if (cuoc[BAU] > 0)
            cout << "Bau (" << cuoc[BAU] << "$) ";
        if (cuoc[CA] > 0)
            cout << "Ca (" << cuoc[CA] << "$) ";
        if (cuoc[GA] > 0)
            cout << "Ga (" << cuoc[GA] << "$) ";
        if (cuoc[NAI] > 0)
            cout << "Nai (" << cuoc[NAI] << "$) ";
    }
    cout << "\nBan muon (0-Dung, 1-Tom, 2-Cua, 3-Bau, 4-Ca, 5-Ga, 6-Nai, 7-Rung): ";
}

int main() {
    int cmd;
    int cuoc[7] = { 0 };
    srand(time(0));

    while (true) {
        xuat(cuoc);
        cin >> cmd;

        if (cmd >= TOM && cmd <= NAI) {
            int tien;
            int index = cmd;
            cout << "Ban dat " << ((index == TOM) ? "Tom" : (index == CUA) ? "Cua" : (index == BAU) ? "Bau"
                : (index == CA) ? "Ca" : (index == GA) ? "Ga" : "Nai") << " bao nhieu tien? ";
            cin >> tien;
            cuoc[index] = tien;
        }
        else if (cmd == RUNG) {
            int totalCuoc = 0;
            int sotom = 0, socua = 0, sobau = 0, soca = 0, soga = 0, sonai = 0;

            for (int i = 1; i <= 3; i++) {
                int t = rand() % 6 + TOM;
                switch (t) {
                case TOM:
                    sotom++;
                    cout << "Tom ";
                    break;
                case CUA:
                    socua++;
                    cout << "Cua ";
                    break;
                case BAU:
                    sobau++;
                    cout << "Bau ";
                    break;
                case CA:
                    soca++;
                    cout << "Ca ";
                    break;
                case GA:
                    soga++;
                    cout << "Ga ";
                    break;
                case NAI:
                    sonai++;
                    cout << "Nai ";
                    break;
                }
            }

            totalCuoc += sotom > 0 ? sotom * cuoc[TOM] : -cuoc[TOM];
            totalCuoc += socua > 0 ? socua * cuoc[CUA] : -cuoc[CUA];
            totalCuoc += sobau > 0 ? sobau * cuoc[BAU] : -cuoc[BAU];
            totalCuoc += soca > 0 ? soca * cuoc[CA] : -cuoc[CA];
            totalCuoc += soga > 0 ? soga * cuoc[GA] : -cuoc[GA];
            totalCuoc += sonai > 0 ? sonai * cuoc[NAI] : -cuoc[NAI];

            cout << "\nBan con " << totalCuoc << "$\n";
            for (int i = 0; i < 7; i++) {
                cuoc[i] = 0;
            }
        }
        else if (cmd == DUNG) {
            cout << "Chuc mung nam moi!";
            return 0;
        }
    }

    return 0;
}