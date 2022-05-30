#include<bits/stdc++.h>

using namespace std;

class SINHVIEN
{
private:
   string MASV,HOTEN;
    int TUOI;
    float DIEM;
public:
    void NHAP();
    void XUAT();
};
void SINHVIEN::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ma sinh vien: ";
    getline(cin, MASV);

    fflush(stdin);
    cout<<"\nnhap ho ten sinh vien: ";
    getline(cin, HOTEN);

    cout<<"\nnhap tuoi: ";
    cin>>TUOI;

    cout<<"\nnhap diem: ";
    cin>>DIEM;
}
void SINHVIEN::XUAT()
{
    cout<<"\nma sinh vien: "<<MASV<<endl;
    cout<<"\nho ten: "<<HOTEN<<endl;  
    cout<<"\ntuoi; "<<TUOI<<endl;
    cout<<"\ndiem: "<<DIEM<<endl;
}
int main()
{
    SINHVIEN a,b;
    cout<<"nhap thong tin cua sinh vien a: "<<endl;
    a.NHAP();
    cout<<"\n\t\t=====THONG TIN SINH VIEN A========\n";
	a.XUAT();
	
    cout<<"nhap thong tin cua sinh vien b: "<<endl;
    b.NHAP();
    cout<<"\n\t\t=====THONG TIN SINH VIEN B========\n";
    b.XUAT();

    return 0;
}