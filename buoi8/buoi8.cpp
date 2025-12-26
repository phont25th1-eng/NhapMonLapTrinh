#include <iostream>
#include "Array.h"
#define MAX 100
using namespace std;
int main()
{
    int a[MAX], n = 0;
    input(a, n);
    //output(a, n);
    //giatrichan(a, n);
    //vitriam(a, n);
    //giatrilonnhat(a, n);
    //vitrinhonhat(a, n);
    //nguyentonhohon100(a, n);
  //tonggiatriam(a, n);
//sapxeptangdan(a, n);
  //output(a, n);
    int kq = giatriduongdautien(a, n);
    if (kq < 0) {
        cout << "Khong co gia tri tuong duong mang" << endl;
    }
    else {
        cout << "Gia tri duong dau tien: " << kq << endl;
    }
}

