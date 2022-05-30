#include<bits/stdc++.h>

using namespace std;
class LOPHOC;
class NGUOI
{
protected:
    char HOTEN[30];
    char NGAYSINH[30];
    char QUEQUAN[30];
public:
    void NHAP();
    void XUAT();
};

class SINHVIEN : public NGUOI
{
private:
    char MASINHVIEN[30];
    char NGANHHOC[30];
    int KHOAHOC;
public:
    void NHAP();
    void XUAT();
    friend int dem_sv(LOPHOC a);
    friend void SAPXEP(LOPHOC a);
};

class LOPHOC
{
private:
    char MALOPHOC[30];
    char TENLOPHOC[30];
    char NGAYMO[30];
    SINHVIEN *x;
    int n;
    char GIAOVIEN[30];
public:
    void NHAP();
    void XUAT();
    friend int dem_sv(LOPHOC a);
    friend void SAPXEP(LOPHOC a);
};

void NGUOI::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ho va ten: ";
    gets(HOTEN);

    fflush(stdin);
    cout<<"\nnhap ngay sinh: ";
    gets(NGAYSINH);

    fflush(stdin);
    cout<<"\nnhap que quan: ";
    gets(QUEQUAN);
}
void NGUOI::XUAT()
{
    cout<<"ho ten: "<<HOTEN<<endl;
    cout<<"ngay sinh "<<NGAYSINH<<endl;
    cout<<"que quan: "<<QUEQUAN<<endl;
}
void SINHVIEN::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ma sinh vien: ";
    gets(MASINHVIEN);

    fflush(stdin);
    cout<<"\nnhap nganh hoc: ";
    gets(NGANHHOC);

    cout<<"\nnhap khoa hoc: ";
    cin>>KHOAHOC;

    NGUOI::NHAP();
}
void SINHVIEN::XUAT()
{
    cout<<"ma sinh vien: "<<MASINHVIEN<<endl;
    cout<<"nganh hoc: "<<NGANHHOC<<endl;
    cout<<"khoa hoc: "<<KHOAHOC<<endl;

    NGUOI::XUAT();
}

void LOPHOC::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ma lop hoc: ";
    gets(MALOPHOC);

    fflush(stdin);
    cout<<"\n nhap ten lop hoc: ";
    gets(TENLOPHOC);

    fflush(stdin);
    cout<<"\nnhap ngay mo: ";
    gets(NGAYMO);

    fflush(stdin);
    cout<<"\nnhap giao vien: ";
    gets(GIAOVIEN);

    cout<<"\nnhap so sinh vien trong lop: ";
    cin>>n;

    x=new SINHVIEN[n];
    for(int i=0;i<n;i++)
        x[i].NHAP();
}
void LOPHOC::XUAT()
{ 
    cout<<"ma lop hoc: "<<MALOPHOC<<endl;
    cout<<"ten lop hoc: "<<TENLOPHOC<<endl;
    cout<<"ngay mo: "<<NGAYMO<<endl;
    cout<<"giao vien: "<<GIAOVIEN<<endl;

    for(int i=0;i<n;i++)
        x[i].XUAT();
}
int dem_sv(LOPHOC a)
{
    int dem= 0;
    for(int i=0;i<a.n;i++)
        if(a.x[i].KHOAHOC == 11)
            dem++;
    return dem;
}
void SAPXEP(LOPHOC a)
{
    for(int i=0;i<a.n;i++)
        for(int j=i+1;j<a.n;j++)
            if (a.x[i].KHOAHOC > a.x[j].KHOAHOC)
            {
                SINHVIEN temp = a.x[i];
                a.x[i] = a.x[j];
                a.x[j] = temp;
            }
}
int main()
{
    LOPHOC a;
    a.NHAP();

    cout<<"\n\t\t===============DANH SACH VUA NHAP=========\n";
    a.XUAT();

    cout<<"Lop hoc co "<<dem_sv(a)<<" sinh vien khoa 11"<<endl;

    SAPXEP(a);
    cout<<"\n\t\t==========DANH SAU KHI SAP XEP=========\n";
    a.XUAT();

    return 0;
}

