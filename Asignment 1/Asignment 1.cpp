#include<bits/stdc++.h>

using namespace std;
class PHIEU;
class NCC
{
private:
    char MANCC[30];
    char TENNCC[30];
    char DCNCC[30];
    char SDT[30];
public:
    void NHAP();
    void XUAT();
};
class SANPHAM
{
private:
    char MASP[30];
    char TENSP[30];
    int SOLUONG;
    float DONGIA;
public:
    void NHAP();
    void XUAT();
    friend class PHIEU;
    friend int DEM_SP(PHIEU a);
    friend void SAPXEP(PHIEU a);
};
class PHIEU
{
private:
    char MAPHIEU[30];
    char NGAYLAP[30];
    NCC x;
    int n;
    SANPHAM *y;
public:
    void NHAP();
    void XUAT();
    friend int DEM_SP(PHIEU a);
    friend void SAPXEP(PHIEU a);
};
void NCC::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ma nha cung cap: ";
    gets(MANCC);

    fflush(stdin);
    cout<<"\nnhap ten nha cung cap: ";
    gets(TENNCC);

    fflush(stdin);
    cout<<"\nnhap dia chi nha cung cap: ";
    gets(DCNCC);

    fflush(stdin);
    cout<<"\nnhap so dien thoai: ";
    gets(SDT);
}
void NCC::XUAT()
{
    cout<<"MA NHA CUNG CAP: "<<MANCC<<"\t";
    cout<<"TEN NHA CUNG CAP: "<<TENNCC<<endl;
    cout<<"DIA CHI: "<<DCNCC<<"\t";
    cout<<"SDT: "<<SDT<<endl;
}
void SANPHAM::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ma san pham: ";
    gets(MASP);

    fflush(stdin);
    cout<<"\nnhap ten san pham: ";
    gets(TENSP);
    
    cout<<"\nnhap so luong: ";
    cin>>SOLUONG;

    cout<<"\nnhap don gia: ";
    cin>>DONGIA;
}
void SANPHAM::XUAT()
{
    cout<<setw(20)<<MASP;
    cout<<setw(20)<<TENSP;
    cout<<setw(20)<<SOLUONG;
    cout<<setw(20)<<DONGIA;
    cout<<setw(20)<<DONGIA * SOLUONG<<endl;
}
void PHIEU::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ma phieu: ";
    gets(MAPHIEU);

    fflush(stdin);
    cout<<"\nnhap ngay lap: ";
    gets(NGAYLAP);

    cout<<"\n=====NHA CUNG CAP======\n";
    x.NHAP();

    cout<<"\nnhap so san pham: ";
    cin>>n;

    y=new SANPHAM[n];
    for(int i=0;i<n;i++)
        y[i].NHAP(); 
}
void PHIEU::XUAT()
{
    cout<<"Dai hoc Victory"<<endl;
    cout<<setw(50)<<"PHIEU NHAP VAN PHONG KHAM"<<endl;
    cout<<"MA PHIEU: "<<setw(20)<<MAPHIEU<<"\t";
    cout<<"NGAY LAP: "<<setw(20)<<NGAYLAP<<endl;

    x.XUAT();

    cout<<setw(20)<<"MA SP";
    cout<<setw(20)<<"TEN SP";
    cout<<setw(20)<<"SO LUONG";
    cout<<setw(20)<<"DON GIA";
    cout<<setw(20)<<"THANH TIEN"<<endl;
    for(int i=0;i<n;i++)
        y[i].XUAT();
    
    float TONGTHANHTIEN = 0;
    for(int i=0;i<n;i++)
        TONGTHANHTIEN+=y[i].DONGIA * y[i].SOLUONG;
    cout<<setw(80)<<"TONG"<<setw(20)<<TONGTHANHTIEN<<endl;
    cout<<setw(15)<<"\nHIEU TRUONG";
    cout<<setw(15)<<"\tPhong tai chinh";
    cout<<setw(15)<<"\tNguoi lap";
}
int DEM_SP(PHIEU a)
{
    int dem = 0;
    for(int i=0;i<a.n;i++)
        if (a.y[i].SOLUONG < 80)
            dem++;
    return dem;
}
void SAPXEP(PHIEU a)
{
    for(int i=0;i<a.n;i++)
        for(int j=i+1;j<a.n;j++)
            if(a.y[i].DONGIA > a.y[j].DONGIA)
            {
                SANPHAM temp = a.y[i];
                a.y[i] = a.y[j];
                a.y[j] = temp;
            }
}
int main()
{
    PHIEU a;
    a.NHAP();

    a.XUAT();
    cout<<endl;
    cout<<DEM_SP(a)<<" san pham co so luong nho hon 80 trong phieu.";

    cout<<"\n=========================\n";
    SAPXEP(a);
    cout<<"\n\t\t==========PHIEU SAU KHI SAP XEP=========\n";
    a.XUAT();

    return 0;
}