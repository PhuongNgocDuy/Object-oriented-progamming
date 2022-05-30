#include<bits/stdc++.h>

using namespace std;

class MAY
{
private:
    string MAMAY,KIEUMAY,TINHTRANG;
public:
    void NHAP();
    void XUAT();
};
class QUANLY
{
private:
    string MAQL,HOTEN;
public:
    void NHAP();
    void XUAT();
};
class PHONGMAY
{
private: 
    string MAPHONG,TENPHONG;
    float DIENTICH;
    QUANLY x;
    MAY *y;
    int n;
public:
    void NHAP();
    void XUAT();
};
void MAY::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ma may: ";
    getline(cin, MAMAY);
    
    fflush(stdin);
    cout<<"\nnhap kieu may: ";
    getline(cin, KIEUMAY);

    fflush(stdin);
    cout<<"\nnhap tinh trang: ";
    getline(cin, TINHTRANG);
}
void MAY::XUAT()
{
    cout<<setw(15)<<MAMAY;
    cout<<setw(15)<<KIEUMAY;
    cout<<setw(15)<<TINHTRANG<<endl;
}
void QUANLY::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ma quan ly: ";
    getline(cin, MAQL);

    fflush(stdin);
    cout<<"\nnhap ho va ten: ";
    getline(cin, HOTEN);
}
void QUANLY::XUAT()
{
    cout<<"\nma quan ly: "<<MAQL;
    cout<<"\nho va ten: "<<HOTEN;
}
void PHONGMAY::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ma phong: ";
    getline(cin, MAPHONG);

    fflush(stdin);
    cout<<"\nnhap ten phong: ";
    getline(cin, TENPHONG);

    cout<<"\nnhap dien tich phong: ";
    cin>>DIENTICH;

    cout<<"\n\t====QUAN LY====\n";
    x.NHAP();

    cout<<"\n\t=====MAY======\n";
    cout<<"\nnhap n: ";
    cin>>n;

    y=new MAY[n];
    for(int i=0;i<n;i++)
        y[i].NHAP();
}
void PHONGMAY::XUAT()
{
    cout<<"\nma phong: "<<MAPHONG;
    cout<<"\nten phong: "<<TENPHONG;
    cout<<"\ndien tich phong: "<<DIENTICH;

    cout<<"\n\t====QUAN LY====\n";
    x.XUAT();
    
    cout<<"\n\t============MAY============\n";
    cout<<setw(15)<<"MA MAY";
    cout<<setw(15)<<"KIEU MAY";
    cout<<setw(15)<<"TINH TRANG"<<endl;
    for (int i=0;i<n;i++)
        y[i].XUAT();
}
int main()
{
    PHONGMAY a;
    a.NHAP();

    cout<<"\n\t=======THONG TIN CUA PHONG MAY=========\n";
    a.XUAT();

    return 0;
}
