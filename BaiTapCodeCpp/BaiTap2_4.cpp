#include <iostream>
#include <unordered_map>
using namespace std;

int RomanToInt(string s) {
    unordered_map<char, int> romanNum = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int result = 0;
    int prevVal = 0; 
    // Chuyển từ chuỗi số La Mã sang cơ số 10.
    // Xét chuỗi số La Mã, xét từ số cuối dãy đến số đầu dãy.
    for (int i = s.size() - 1; i >= 0; i--) {
        int val = romanNum[s[i]];
        // Nếu số La Mã sau lớn hơn số La Mã trước thì cộng thêm.
        // Nếu số La Mã sau nhỏ hơn số La Mã trướ thì trừ đi.
        if (val < prevVal) {
            result -= val; // Trường hợp cộng giá trị
        }
        else {
            result += val; // Trường hợp trừ giá trị
        }
        prevVal = val;
    }
    return result;
}

int main() {
    string romanNumeral = "MDCLXVI";
    int decimalNum = RomanToInt(romanNumeral);
    cout << "Chuoi so La Ma " << romanNumeral << " chuyen thanh so nguyen: " << decimalNum << endl;
    return 0;
}