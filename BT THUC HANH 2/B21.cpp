#include<bits/stdc++.h>

using namespace std;

class DATE
{
private:
    int D ,M ,Y;
public:
    void NHAP();
    void XUAT();
};
class NHANSU
{
private:
    string MANHANSU,HOTEN;
    DATE NS;
public:
    void NHAP();
    void XUAT();
};
void DATE::NHAP()
{
    cout<<"\nnhap ngay: ";
    cin>>D;

    cout<<"\nnhap thang: ";
    cin>>M;

    cout<<"\nnhap nam: ";
    cin>>Y;
}
void DATE::XUAT()
{
    cout<<setw(10)<<D<<"-"<<M<<"-"<<Y;
}
void NHANSU::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ma nhan su: ";
    getline(cin, MANHANSU);

    fflush(stdin);
    cout<<"\nnhap ho va ten: ";
    getline(cin, HOTEN);

    cout<<"\nnhap ngay thanng nam sinh: ";
    NS.NHAP();
}
void NHANSU::XUAT()
{
    cout<<"\nma nhan su: "<<MANHANSU;
    cout<<"\nho ten: "<<HOTEN;
    
    cout<<"\nngay thang nam sinh: ";
    NS.XUAT();
}
int main()
{
    NHANSU n;
    n.NHAP();

    n.XUAT();
    return 0;
}