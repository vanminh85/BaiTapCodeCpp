#include <iostream>
#include <cstdlib>

using namespace std;

// Định nghĩa struct để lưu trữ thông tin về thời điểm
struct Time {
    int hour;
    int minute;
    int second;
};

// Hàm kiểm tra tính hợp lệ của thời điểm
bool is_valid_time(const Time& time) {
    return (time.hour >= 0 && time.hour <= 23) && 
           (time.minute >= 0 && time.minute <= 59) && 
           (time.second >= 0 && time.second <= 59);
}

// Hàm chuyển đổi thời điểm sang số giây
int time_to_seconds(const Time& time) {
    return time.hour * 3600 + time.minute * 60 + time.second;
}

// Hàm so sánh thời điểm và trả về kết quả
string compare_times(const Time& time1, const Time& time2) {
    int time1_seconds = time_to_seconds(time1);
    int time2_seconds = time_to_seconds(time2);

    if (time1_seconds == time2_seconds) {
        return "Hai thời điểm trùng nhau";
    }
    else if (time1_seconds < time2_seconds) {
        return "Thời điểm 1 trước thời điểm 2";
    }
    else {
        return "Thời điểm 2 trước thời điểm 1";
    }
}

// Hàm tính tổng số giây trôi qua giữa hai thời điểm
int time_difference(const Time& time1, const Time& time2) {
    int time1_seconds = time_to_seconds(time1);
    int time2_seconds = time_to_seconds(time2);
    return abs(time1_seconds - time2_seconds);
}

//int main() {
//    Time time1, time2;
//
//    // Nhập thời điểm thứ nhất
//    cout << "Nhập thời điểm thứ nhất:" << endl;
//    cout << "Giờ: ";
//    cin >> time1.hour;
//    cout << "Phút: ";
//    cin >> time1.minute;
//    cout << "Giây: ";
//    cin >> time1.second;
//
//    // Nhập thời điểm thứ hai
//    cout << "\nNhập thời điểm thứ hai:" << endl;
//    cout << "Giờ: ";
//    cin >> time2.hour;
//    cout << "Phút: ";
//    cin >> time2.minute;
//    cout << "Giây: ";
//    cin >> time2.second;
//
//    // Kiểm tra tính hợp lệ của thời điểm
//    if (!is_valid_time(time1) || !is_valid_time(time2)) {
//        cout << "\nThời điểm không hợp lệ." << endl;
//        return 1;
//    }
//
//    // So sánh thời điểm và tính tổng số giây trôi qua
//    cout << "\nKết quả:" << endl;
//    cout << compare_times(time1, time2) << endl;
//    cout << "Tổng số giây trôi qua: " << time_difference(time1, time2) << endl;
//
//    return 0;
//}