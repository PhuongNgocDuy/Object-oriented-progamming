#include<bits/stdc++.h>

using namespace std;

class NCC
{
private:
    string MANCC,TENNCC,DCNCC;
public:
    void NHAP();
    void XUAT();
};
class HANG
{
private:
    string TENHANG;
    float DONGIA;
    int SOLUONG;
public:
    void NHAP();
    void XUAT();
    friend class PHIEU;
};
class PHIEU
{
private:
    string MAPHIEU,NGAYLAP;
    HANG *x;
    NCC y;
    int n;
public:
    void NHAP();
    void XUAT();
};
void NCC::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ma nha cung cap: ";
    getline(cin, MANCC);

    fflush(stdin);
    cout<<"\nnhap ten nha cung cap: ";
    getline(cin, TENNCC);

    fflush(stdin);
    cout<<"\nnhap dia chi nha cung cap: ";
    getline(cin, DCNCC);
}
void NCC::XUAT()
{
    cout<<setw(5)<<"MA NCC: "<<MANCC<<"\t";
    cout<<"TEN NCC: "<<TENNCC<<endl;
    cout<<setw(5)<<"DIA CHI: "<<DCNCC<<endl;
}
void HANG::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ten hang: ";
    getline(cin, TENHANG);

    cout<<"\nnhap don gia: ";
    cin>>DONGIA;

    cout<<"\nnhap so luong: ";
    cin>>SOLUONG;
}
void HANG::XUAT()
{
    cout<<setw(15)<<TENHANG;
    cout<<setw(15)<<DONGIA;
    cout<<setw(15)<<SOLUONG;
    cout<<setw(15)<<DONGIA * SOLUONG<<endl;
}
void PHIEU::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ma phieu: ";
    getline(cin, MAPHIEU);

    fflush(stdin);
    cout<<"\nnhap ngap lap: ";
    getline(cin, NGAYLAP);

    cout<<"\n=======NHAP NHA CUNG CAP======\n";
    y.NHAP();

    cout<<"\nnhap so mat hang: ";
    cin>>n;

    x=new HANG[n];
    for(int i=0;i<n;i++)
        x[i].NHAP();
}
void PHIEU::XUAT()
{
    cout<<setw(35)<<"PHIEU NHAP HANG"<<endl;
    cout<<setw(5)<<"MA PHIEU: "<<MAPHIEU<<"\t";
    cout<<"NGAY LAP: "<<NGAYLAP<<endl;

    y.XUAT();
    cout<<setw(15)<<"TEN HANG";
    cout<<setw(15)<<"DON GIA";
    cout<<setw(15)<<"SO LUONG";
    cout<<setw(15)<<"THANH TIEN"<<endl;

    for(int i=0;i<n;i++)
        x[i].XUAT();
    double TONGTIEN = 0;
    for(int i=0;i<n;i++)
        TONGTIEN+=x[i].DONGIA * x[i].SOLUONG;
    cout<<setw(45)<<"TONG CONG: "<<TONGTIEN<<endl;
} 
int main()
{
    PHIEU a;
    a.NHAP();
    a.XUAT();
    return 0;
}