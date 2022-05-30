#include<bits/stdc++.h>

using namespace std;

class HANG
{
private:
    string MAHANG,TENHANG;
    int SOLUONG;
    float DONGIA;
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

    cout<<"\nnhap so luong: ";
    cin>>SOLUONG;

    cout<<"\nnhap don gia: ";
    cin>>DONGIA;
}

void HANG::XUAT()
{
    cout<<setw(10)<<MAHANG;
    cout<<setw(10)<<TENHANG;
    cout<<setw(10)<<SOLUONG;
    cout<<setw(10)<<DONGIA;
    cout<<setw(10)<<DONGIA * SOLUONG<<endl;
}
int main()
{
    HANG *h;
    int n;
    cout<<"\nnhap so mat hang: ";
    cin>>n;
    h= new HANG[n];

    for (int i=0;i<n;i++)
    {
        cout<<"nhap hang: "<<i+1<<endl;
        h[i].NHAP();
    }
    cout<<"\n\t\t============DANH SACH VUA NHAP============\n";
    cout<<setw(10)<<"MA HANG";
    cout<<setw(10)<<"TEN HANG";
    cout<<setw(10)<<"SO LUONG";
    cout<<setw(10)<<"DON GIA";
    cout<<setw(10)<<"THANH TIEN"<<endl;
    for(int i=0;i<n;i++)
    {
        h[i].XUAT();
    }

    return 0;

}
