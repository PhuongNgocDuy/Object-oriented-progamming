#include<bits/stdc++.h>

using namespace std;
class BENHNHAN;
class NGUOI
{
protected:
    char HOTEN[30];
    int TUOI;
public:
    void NHAP();
    void XUAT();
    friend void DEM_BENHNHAN(BENHNHAN *x,int n);
     friend void SUA_THONGTIN(BENHNHAN *x,int n);
};
class BENHVIEN
{
private:
    char TENBV[30];
    char DIACHI[30];
    char GIAMDOC[30];
    friend class BENHNHAN;
};
class BENHNHAN : public NGUOI
{
private:
    char MA[30];
    char TIENSU[30];
    char CHUANDOAN[30];
    BENHVIEN x;
public:
    void NHAP();
    void XUAT();
    friend void SUA_THONGTIN(BENHNHAN *x,int n);
};
void NGUOI::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ho ten: ";
    gets(HOTEN);

    cout<<"\nnhap tuoi: ";
    cin>>TUOI;
}
void NGUOI::XUAT()
{
    cout<<"\nHO TEN: "<<HOTEN<<endl;
    cout<<"\nTUOI: "<<TUOI<<endl;
}
void BENHNHAN::NHAP()
{
    NGUOI::NHAP();
    fflush(stdin);
    cout<<"\nnhap ma: ";
    gets(MA);

    fflush(stdin);
    cout<<"\nnhap tien su: ";
    gets(TIENSU);

    fflush(stdin);
    cout<<"\nnhap chuan doan: ";
    gets(CHUANDOAN);

    fflush(stdin);
    cout<<"\nnhap ten benh vien: ";
    gets(x.TENBV);

    fflush(stdin);
    cout<<"\nnhap dia chi: ";
    gets(x.DIACHI);

    fflush(stdin);
    cout<<"\nnhap giam doc: ";
    gets(x.GIAMDOC);
}
void BENHNHAN::XUAT()
{
    NGUOI::XUAT();
    cout<<"\nMA:  "<<MA<<endl;
    cout<<"\nTIEN SU:  "<<TIENSU<<endl;
    cout<<"\nCHUAN DOAN:  "<<CHUANDOAN<<endl;
    cout<<"\nTEN BENH VIEN: "<<x.TENBV<<endl;
    cout<<"\nDIA CHI: "<<x.DIACHI<<endl;
    cout<<"\nGIAM DOC: "<<x.GIAMDOC<<endl;
}
//bonus 1: cho biet trong danh sach vua nhap,
// co bao nhieu benh nhan lon hon 30 tuoi.
void DEM_BENHNHAN(BENHNHAN *x,int n)
{
    int DEM = 0 ;
    for(int i=0;i<n;i++)
        if (x[i].TUOI > 30)
            DEM++;
    if (DEM == 0)
        cout<<"\nkhong co benh nhan nao lon hon 30 tuoi.";
    else    
        cout<<"\nco "<<DEM<<" benh nhan lon hon 30 tuoi.";
}
// bonus 2:sua thong tin ve tuoi cua benh nhan co ma la "BN01"
//(neu co) thanh 20 tuoi
void SUA_THONGTIN(BENHNHAN *x,int n)
{
    int DEM = 0;
    for(int i=0;i<n;i++)
        if (strcmp(x[i].MA,"BN01") == 0)
            DEM++;
    for(int i=0;i<n;i++)
        if(DEM!=0 && strcmp(x[i].MA,"BN01") == 0)
            x[i].TUOI = 20;
}
int main()
{
    BENHNHAN *x;
    int n;
    cout<<"\nnhap so benh nhan: ";
    cin>>n;
    x= new BENHNHAN[n];
    for(int i=0;i<n;i++)
    {
        cout<<"\nNHAP BENH NHAN THU: "<<i+1<<endl;
        x[i].NHAP();
    }
    cout<<"\n======THONG TIN VUA NHAP=======\n";
    for(int i=0;i<n;i++)
    {
        x[i].XUAT();
    }
    DEM_BENHNHAN(x,n);
    SUA_THONGTIN(x,n);
    cout<<"\n=======THONG TIN VUA SUA=====\n";
    for(int i=0;i<n;i++)
        x[i].XUAT();
    return 0;
}