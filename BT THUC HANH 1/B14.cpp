#include<bits/stdc++.h>

using namespace std;

class SACH
{
private:
    string MASACH,TENSACH;
    int SOTRANG;
    float GIATIEN;
public:
    void NHAP();
    void XUAT();
};
void SACH::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ma sach: ";
    getline(cin, MASACH);

    fflush(stdin);
    cout<<"\nnhap ten sach: ";
    getline(cin, TENSACH);

    cout<<"\nnhap so trang: ";
    cin>>SOTRANG;

    cout<<"\nnhap gia tien: ";
    cin>>GIATIEN;
}
void SACH::XUAT()
{
    cout<<setw(15)<<left<<MASACH;
    cout<<setw(15)<<left<<TENSACH;
    cout<<setw(15)<<left<<SOTRANG;
    cout<<setw(15)<<left<<GIATIEN<<endl;
}
int main()
{
    SACH *s;
    int n;
    cout<<"\nnhap so cuon sach: ";
    cin>>n;

    s = new SACH[n];
    for (int i=0;i<n;i++)
    {
        cout<<"nhap cuon sach thu: "<<i+1<<endl;
        s[i].NHAP();
    }
    cout<<"\n\t\t========DANH SACH VUA NHAP========\n";
    cout<<setw(15)<<left<<"MA SACH";
    cout<<setw(15)<<left<<"TEN SACH";
    cout<<setw(15)<<left<<"SO TRANG";
    cout<<setw(15)<<left<<"GIA TIEN"<<endl;
    for(int i=0;i<n;i++)
    {
        s[i].XUAT();
    }
    return 0;
}