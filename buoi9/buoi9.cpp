#include <iostream>
#include <cmath>
using namespace std;


bool kiemTraSoNguyenTo(int n) {
    if (n <= 1) {
        return false; 
    }

    
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false; 
        }
    }
    return true; 
}

int main() {
    int n;

        cout << "Nh?p s? nguyên n: ";
    cin >> n;

    if (kiemTraSoNguyenTo(n)) {
        cout << n << " là s? nguyên t?." << endl;
    }
    else {
        cout << n << " không ph?i là s? nguyên t?." << endl;
    }

    return 0;
}


#include <iostream>
using namespace std;


int tinhTong(int a, int b) {
    return a + b;
}


float tinhTrungBinh(int a, int b) {
    return (a + b) / 2.0;  
}

int main() {
    int a, b;

   
    cout << "Nh?p s? nguyên a: ";
    cin >> a;
    cout << "Nh?p s? nguyên b: ";
    cin >> b;

    
    int tong = tinhTong(a, b);
    cout << "T?ng c?a " << a << " và " << b << " là: " << tong << endl;

    
    float trungBinh = tinhTrungBinh(a, b);
    cout << "Trung bình c?ng c?a " << a << " và " << b << " là: " << trungBinh << endl;

    return 0;
}
