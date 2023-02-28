#include <iostream> 
using namespace std;

struct thanhPho {
    float dienTich;
    char tenThanhPho[30];
    short maThanhPho;
};

int main() {
    thanhPho tp;
    cout << "Nhap ma thanh pho :";
    cin >> tp.maThanhPho;
    cout << "Nhap ten thanh pho :";
    cin >> tp.tenThanhPho;
    cout << "Nhap dien tich :";
    cin >> tp.dienTich;
    cout << "Ma thanh pho la :" << tp.maThanhPho << endl;
    cout << "Ten thanh pho la :" << tp.tenThanhPho << endl;
    cout << "Dien tich la :" << tp.dienTich << endl;
    return 0;
}

