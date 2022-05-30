#include<bits/stdc++.h>

using namespace std;

class HANG;
class DATE
{
private:
    int DAY,MONTH,YEAR;
    friend class HANG;
    friend void MAT_HANG_2017(HANG *a,int n);
};
class HANG
{
private:
    string MAHANG,TENHANG;
    DATE NGAYSX;
public:
    void NHAP();
    void XUAT();
    friend void MAT_HANG_2017(HANG *a,int n);
};
void HANG::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ma hang: ";
    getline(cin, MAHANG);

    fflush(stdin);
    cout<<"\nnhap ten hang: ";
    getline(cin, TENHANG);

    cout<<"\nnhap ngay: ";
    cin>>NGAYSX.DAY;

    cout<<"\nnhap thang: ";
    cin>>NGAYSX.MONTH;

    cout<<"\nnhap nam: ";
    cin>>NGAYSX.YEAR; 
}
void HANG::XUAT()
{
    cout<<"\nma hang: "<<MAHANG;
    cout<<"\nten hang: "<<TENHANG;
    cout<<"\nHAN SU DUNG LA: ";
    cout<<"\t"<<NGAYSX.DAY<<"-"<<NGAYSX.MONTH<<"-"<<NGAYSX.YEAR<<endl;
}
void MAT_HANG_2017(HANG *a,int n)
{
    for (int i=0;i<n;i++)
        if (a[i].NGAYSX.YEAR == 2017)
            a[i].XUAT();
}
int main()
{
    HANG *a;
    int n;
    cout<<"\nnhap so mat hang: ";
    cin>>n;

    a=new HANG[n];
    for(int i=0;i<n;i++)
    a[i].NHAP();

    cout<<"\ncac mat hang 2017 la: ";
    MAT_HANG_2017(a,n);
    
    return 0;
}