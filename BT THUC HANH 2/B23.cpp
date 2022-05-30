#include<bits/stdc++.h>

using namespace std;

class HANG
{
private:
    string MAHANG,TENHANG;
    float dongia;
public:
    void NHAP();
    void XUAT();
};
class PHIEU
{
private:
    string MAPHIEU;
    int n;
    HANG *x;
public:
    void NHAP();
    void XUAT();
};
void HANG::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ma hang: ";
    getline(cin, MAHANG);

    fflush(stdin);
    cout<<"\nnhap ten hang: ";
    getline(cin, TENHANG);

    cout<<"\nnhap don gia: ";
    cin>>dongia;
}
void HANG::XUAT()
{
    cout<<setw(15)<<left<<MAHANG;
    cout<<setw(15)<<left<<TENHANG;
    cout<<setw(15)<<left<<dongia<<endl;
}
void PHIEU::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ma phieu: ";
    getline(cin,MAPHIEU);

    cout<<"\nnhap so mat hang: ";
    cin>>n;
    x = new HANG[n];
    for(int i=0;i<n;i++)  
        x[i].NHAP();
}
void PHIEU::XUAT()
{
    cout<<"\nma phieu: "<<MAPHIEU<<endl;
    cout<<setw(15)<<left<<"MA HANG";
    cout<<setw(15)<<left<<"TEN HANG";
    cout<<setw(15)<<left<<"don gia"<<endl;
    for(int i=0;i<n;i++)
        x[i].XUAT();  
}
int main()
{
    PHIEU a;
    a.NHAP();

    cout<<"\n\t\t=======PHIEU NHAP HANG=========\n";
    a.XUAT();

    return 0;
}