#include<bits/stdc++.h>

using namespace std;

class SINHVIEN
{
private:
    string MASV,HOTEN;
    float DIEMTOAN,DIEMLY,DIEMHOA;
public:
    void NHAP();
    void XUAT();
    friend void SORT(SINHVIEN *a,int n);
};
void SINHVIEN::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ma sinh vien: ";
    getline(cin, MASV);

    fflush(stdin);
    cout<<"\nnhap ho va ten: ";
    getline(cin, HOTEN);

    cout<<"\nnhap diem toan: ";
    cin>>DIEMTOAN;

    cout<<"\nnhap diem ly: ";
    cin>>DIEMLY;

    cout<<"\nnhap diem hoa: ";
    cin>>DIEMHOA;
}
void SINHVIEN::XUAT()
{
    cout<<setw(15)<<left<<MASV;
    cout<<setw(15)<<left<<HOTEN;
    cout<<setw(15)<<left<<DIEMTOAN;
    cout<<setw(15)<<left<<DIEMLY;
    cout<<setw(15)<<left<<DIEMHOA;
    cout<<setw(15)<<left<<DIEMTOAN+DIEMLY+DIEMHOA<<endl;
}

void SORT(SINHVIEN *a,int n)
{
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if ( a[i].DIEMTOAN + a[i].DIEMLY +a[i].DIEMHOA > a[j].DIEMTOAN+ a[j].DIEMLY+a[j].DIEMHOA)
            {
                SINHVIEN temp =a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}
int main()
{
    SINHVIEN *a;
    int n;
    cout<<"\nnhap n: ";
    cin>>n;

    a= new SINHVIEN[n];
    for(int i=0;i<n;i++)
    {
        a[i].NHAP();
    }
    SORT(a,n);
    cout<<"\n\t\t=========DANH SACH SINH VIEN SAU KHI SAP XEP==========\n";
    cout<<setw(15)<<left<<"MA SV";
    cout<<setw(15)<<left<<"HO TEN";
    cout<<setw(15)<<left<<"DIEM TOAN";
    cout<<setw(15)<<left<<"DIEM LY";
    cout<<setw(15)<<left<<"DIEM HOA";
    cout<<setw(15)<<left<<"TONG DIEM"<<endl;
    
    for(int i=0;i<n;i++)
        a[i].XUAT();    
}