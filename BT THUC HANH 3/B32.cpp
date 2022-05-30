#include<bits/stdc++.h>

using namespace std;

class NSX
{
private:
    string MANSX,TENNSX,DCNSX;
    friend class HANG;
};
class HANG
{
private:
    string MAHANG,TENHANG;
    float DONGIA,TRONGLUONG;
    NSX x;
public:
    void NHAP();
    void XUAT();
};
void HANG::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ma hang: ";
    getline(cin, MAHANG);

    fflush(stdin);
    cout<<"\nnhap ten hang: ";
    getline(cin, TENHANG);

    cout<<"\nnhap don gia: ";
    cin>>DONGIA;

    cout<<"\nnhap trong luong: ";
    cin>>TRONGLUONG;

    fflush(stdin);
    cout<<"\nnhap ma nha san xuat: ";
    getline(cin, x.MANSX);

    fflush(stdin);
    cout<<"\nnhap ma nha san xuat: ";
    getline(cin, x.TENNSX);

    fflush(stdin);
    cout<<"\nnhap ten nha san xuat: ";
    getline(cin, x.DCNSX);
}
void HANG::XUAT()
{
    cout<<"\nma hang: "<<MAHANG;
    cout<<"\nten hang: "<<TENHANG;
    cout<<"\ndongia: "<<DONGIA;
    cout<<"\ntrong luong: "<<TRONGLUONG;
    cout<<"\nma nha san xuat: "<<x.MANSX;
    cout<<"\nten nha san xuat: "<<x.TENNSX;
    cout<<"\ndia chi nha san xuat: "<<x.DCNSX<<endl;
}
int main()
{
    HANG a;
    a.NHAP();

    cout<<"\n\t\t=======THONG TIN MOT MAT HANG========\n";
    a.XUAT();
    
    return 0;
}