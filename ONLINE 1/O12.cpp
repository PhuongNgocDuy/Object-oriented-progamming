#include<bits/stdc++.h>

using namespace std;
class PHIEU;
class SINHVIEN
{
private:
    string MASINHVIEN,TENSINHVIEN,LOP;
    int KHOA;
public:
    void NHAP();
    void xuat();
};
class MON
{
private:
    string TENMON;
    int SOTRINH;
    float DIEM;
public:
    void NHAP();
    void XUAT();
    friend class PHIEU;
};
class PHIEU
{
private:
    SINHVIEN x;
    MON *y;
    int n;
public:
    void NHAP();
    void XUAT();
    void SOTRINH_LONHON3();
    friend void CHENMON(PHIEU &p,MON a,int k);
};
void SINHVIEN::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ma sinh vien: ";
    getline(cin, MASINHVIEN);

    fflush(stdin);
    cout<<"\nnhap ten sinh vien: ";
    getline(cin, TENSINHVIEN);

    fflush(stdin);
    cout<<"\nnhap lop: ";
    getline(cin, LOP);

    cout<<"\nnhap khoa: ";
    cin>>KHOA;
}
void SINHVIEN::xuat()
{
    cout<<"MA SINH VIEN: "<<setw(10)<<MASINHVIEN<<"\t";
    cout<<"TEN SINH VIEN: "<<setw(10)<<TENSINHVIEN<<endl;
    cout<<"LOP: "<<LOP<<setw(10)<<"\t";
    cout<<"KHOA: "<<KHOA<<endl;
}
void MON::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ten mon hoc: ";
    getline(cin, TENMON);

    cout<<"\nnhap so trinh: ";
    cin>>SOTRINH;

    cout<<"\nnhap diem: ";
    cin>>DIEM;
}
void MON::XUAT()
{
    cout<<setw(25)<<TENMON;
    cout<<setw(10)<<SOTRINH;
    cout<<setw(10)<<DIEM<<endl;
}
void PHIEU::NHAP()
{
    cout<<"\nnhap thong tin cho phieu: ";
    x.NHAP();

    cout<<"\nnhap so mon hoc: ";
    cin>>n;

    y= new MON[n];
    for(int i=0;i<n;i++)
        y[i].NHAP(); 
}
void PHIEU::XUAT()
{
    cout<<setw(50)<<"PHIEU BAO DIEM"<<endl;
    x.xuat();
    cout<<"BANG DIEM: "<<endl;
    cout<<setw(25)<<"TEN MON";
    cout<<setw(10)<<"SO TRINH";
    cout<<setw(10)<<"DIEM"<<endl;
    for(int i=0;i<n;i++)    
        y[i].XUAT();
    
    int TONGSOTRINH =0;
    float TONGSODIEM = 0;
    for(int i=0;i<n;i++)
    {
        TONGSOTRINH+=y[i].SOTRINH;
        TONGSODIEM+=y[i].SOTRINH * y[i].DIEM;
    }
    cout<<setw(35)<<"DIEM TRUNG BINH"<<setw(10)<<TONGSODIEM/TONGSOTRINH;
}
void PHIEU::SOTRINH_LONHON3()
{
    for(int i=0;i<n;i++)
        if (y[i].SOTRINH > 3)
    cout<<y[i].TENMON<<" la mon hoc co so trinh lon hon 3 trong phieu."<<endl;
}
void PHIEU::CHENMON(PHIEU &p,MON a,int k)
{
    p.y =(MON*)realloc(p.y, (p.n+1)*sizeof(MON));
    for(int i=p.n-1; i>=k; i--)
        p.y[i+1] = p.y[i];
    p.y[k] = a;
    p.n++;
}
int main()
{
    PHIEU a;
    a.NHAP();
    a.XUAT();

    cout<<endl;
    a.SOTRINH_LONHON3();
       
    return 0;
}
