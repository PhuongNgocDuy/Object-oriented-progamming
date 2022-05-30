#include<bits/stdc++.h>

using namespace std;

class SINHVIEN
{
private:
    char MASV[30];
    char HOTEN[30];
    int TUOI;
    friend istream& operator>>(istream& x,SINHVIEN &a);
    friend ostream& operator<<(ostream& x, SINHVIEN a);

};
// dùng đối thứ nhất để nhập đối thứ hai
istream& operator>>(istream& x,SINHVIEN &a) // hàm toán tử
{
    fflush(stdin);
    cout<<"\nnhap ma sinh vien: ";
    x.getline(a.MASV, 30);

    fflush(stdin);
    cout<<"\nnhap ho va ten: ";
    x.getline(a.HOTEN, 30);

    cout<<"\nnhap tuoi ";
    x>>a.TUOI;

    return x;
}
//dùng đối thứ nhất để xuất đối thứ 2
ostream& operator<<(ostream& x, SINHVIEN a) // hàm toán tử
{
    x<<setw(10)<<a.MASV;
    x<<setw(20)<<a.HOTEN;
    x<<setw(20)<<a.TUOI<<endl;

    return x;
}
int main()
{
    SINHVIEN a;
   // cin>>a; // cin:nhập từ bàn phím  
    // cout<<a; // cout:xuất ra màn hình
    //ios:du lieu moi de/ len du lieu cu~
    // app: ghi bo sung du~ lieu cu khong bi mat di

    istream f("D:/PHUONG.txt", ios::in);
    f>>a;
    cout<<a;


 /*   ofstream f("D:/aPHUONG.txt", ios::app);
    f<<a;
    f.close();*/

    return 0;
}
