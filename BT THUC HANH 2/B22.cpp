#include<bits/stdc++.h>

using namespace std;

class NSX
{
private:
    string MANSX,TENNSX,DCNSX;
public:
    void NHAP();
    void XUAT();
};
class HANG
{
private:
    string MAHANG,TENHANG;
    NSX x;
public:
    void NHAP();
    void XUAT();
};
void NSX::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ma nha san xuat: ";
    getline(cin, MANSX);

    fflush(stdin);
    cout<<"\nnhap ten nha san xuat: ";
    getline(cin, TENNSX);

    fflush(stdin);
    cout<<"\nnhap dia chi nha san xuat: ";
    getline(cin, DCNSX);
}
void NSX::XUAT()
{
    cout<<"\nma nha san xuat: "<<MANSX;
    cout<<"\nten nha san xuat: "<<TENNSX;
    cout<<"\ndia chi nha san xuat: "<<DCNSX;
}
void HANG::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ma hang: ";
    getline(cin, MAHANG);

    fflush(stdin);
    cout<<"\nnhap ten hang: ";
    getline(cin, TENHANG);

    cout<<"\n\t=====NHA SAN XUAT=====\n";
    x.NHAP();
}
void HANG::XUAT()
{
    cout<<"\nma hang: "<<MAHANG;
    cout<<"\nten hang: "<<TENHANG;

    cout<<"\n\t=====NHA SAN XUAT=====\n";
    x.XUAT();
}
int main()
{
    HANG a;
    a.NHAP();

    cout<<"\n\t\t=======DANH SACH VUA NHAP========\n";
    a.XUAT();

    return 0;
}

