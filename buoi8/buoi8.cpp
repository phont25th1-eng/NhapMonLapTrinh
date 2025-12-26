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
    int vt = vitrichandautien(a, n);
    if (vt == -1) {
        cout << "Khong co gia tri chan trong mang" << endl;
    }
    else {
        cout << "vi tri chan dau tien: " << vt << endl;
    }
}

