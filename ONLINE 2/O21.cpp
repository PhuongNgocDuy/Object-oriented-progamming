#include<bits/stdc++.h>

using namespace std;

class DATE
{
private:
    int DAY,MONTH,YEAR;
public:
    void NHAP();
    void XUAT();
   friend class TIVI;
};
class NSX
{
private:
    char TENNSX[30];
    char DIACHI[30];
public:
    void NHAP();
    void XUAT();
    friend class HANG;
};
class HANG
{
protected:
    char TENHANG[30];
    NSX x;
    float DONGIA;
public:
    void NHAP();
    void XUAT();
    HANG();
};
class TIVI : public HANG
{
private:    
    float KICKTHUOC;
    DATE NGAYNHAP;
public:
    void NHAP();
    void XUAT();
    TIVI();
};
HANG::HANG()
{
    strcpy(TENHANG," ");
    strcpy(x.TENNSX," ");
    strcpy(x.DIACHI, " ");
    DONGIA = 0;
}
TIVI::TIVI()
{
    KICKTHUOC = 0;
    NGAYNHAP.DAY = NGAYNHAP.MONTH = NGAYNHAP.YEAR =0;
}
void DATE::NHAP()
{
    cout<<"\nnhap ngay: ";
    cin>>DAY;

    cout<<"\nnhap thang: ";
    cin>>MONTH;

    cout<<"\nnhap nam: ";
    cin>>YEAR;
}
void DATE::XUAT()
{   
    cout<<"\nngay: "<<DAY<<endl;
    cout<<"\nthang: "<<MONTH<<endl;
    cout<<"\nnam: "<<YEAR<<endl;
}
void NSX::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ten nha san xuat: ";
    gets(TENNSX);

    fflush(stdin);
    cout<<"\nnhap dia chi nha san xuat: ";
    gets(DIACHI);
}
void NSX::XUAT()
{
    cout<<"ten nha san xuat: "<<TENNSX<<endl;
    cout<<"\ndia cho nha san xuat: "<<DIACHI<<endl;
}
void HANG::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ten hang: ";
    gets(TENHANG);

    cout<<"\n====NHA SAN XUAT======\n";
    x.NHAP();

    cout<<"\nnhap don gia: ";
    cin>>DONGIA;
}
void HANG::XUAT()
{
    cout<<"\nten hang: "<<TENHANG<<endl;
    cout<<"\n===NHA SAN XUAT====\n";
    x.XUAT();
    cout<<"\ndon gia: "<<DONGIA<<endl;
}
void TIVI::NHAP()
{
    cout<<"\nnhap kich thuoc: ";
    cin>>KICKTHUOC;

    NGAYNHAP.NHAP();
}
void TIVI::XUAT()
{
    cout<<"\nkich thuoc: "<<KICKTHUOC<<endl;
    

    cout<<"\n=======NGAY NHAP========\n";
    NGAYNHAP.XUAT();
}
int main()
{
    TIVI a;
    a.NHAP();
    cout<<"\n======THONG TIN VUA NHAP=========\n";
    a.XUAT();

    return 0;
}