#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
    int a[1000]; 
    int n = 0; 

    cout << "Nhap vao cac phan tu cua mang (ket thuc khi nhap vao so 0):" << endl;
    do {
        cin >> a[n]; 
        n++; 
    } while (a[n-1] != 0 && n < 1000); 

    sort(a, a+n);

    cout << "Mang sau khi sap xep tang dan la:" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
