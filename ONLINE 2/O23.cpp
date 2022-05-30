#include<bits/stdc++.h>

using namespace std;
class TRUONGDH;
class BAN
{
private:
    char MABAN[30];
    char TENBAN[30];
    char NGAYTHANHLAP[30];
    friend class TRUONGDH;
};
class KHOA
{
private:
    char MAKHOA[30];
    char TENKHOA[30];
    char TRUONGKHOA[30];
    friend class TRUONGDH;
    friend void xoa(TRUONGDH &a);
};
class TRUONG 
{
protected:
    char MATRUONG[30];
    char TENTRUONG[30];
    char DIACHI[39];
public:
    void NHAP();
    void XUAT();
};
class TRUONGDH : public TRUONG
{
private:
    KHOA *x;
    int n; // so khoa
    BAN *y;
    int m;// so ban
public:
    void NHAP();
    void XUAT();
    friend void xoa(TRUONGDH &a);
};
void TRUONG::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ma truong: ";
    gets(MATRUONG);

    fflush(stdin);
    cout<<"\nnhap ten truong: ";
    gets(TENTRUONG);

    fflush(stdin);
    cout<<"\nnhap dia chi: ";
    gets(DIACHI);
}
void TRUONG::XUAT()
{
    cout<<"\nMA TRUONG: "<<MATRUONG<<endl;
    cout<<"\nTEN TRUONG: "<<TENTRUONG<<endl;
    cout<<"\nDIA CHI: "<<DIACHI<<endl;
}
void TRUONGDH::NHAP()
{
    TRUONG::NHAP();
    cout<<"\nnhap so khoa: ";
    cin>>n;
    x =new KHOA[n];
    for(int i=0;i<n;i++)
    {
        cout<<"\nnhap khoa thu: "<<i+1<<endl;
        fflush(stdin);
        cout<<"\nnhap ma khoa: ";
        gets(x[i].MAKHOA);

        fflush(stdin);
        cout<<"\nnhap ten khoa: ";
        gets(x[i].TENKHOA);

        fflush(stdin);
        cout<<"\nnhap truong khoa: ";
        gets(x[i].TRUONGKHOA);
    }
    cout<<"\nnhap so ban: ";
    cin>>m;
    y= new BAN[m];
    for(int i=0;i<m;i++)
    {
        cout<<"\nnhap ban thu: "<<i+1<<endl;
        fflush(stdin);
        cout<<"\nnhap ma ban: ";
        gets(y[i].MABAN);

        fflush(stdin);
        cout<<"\nnhap ten ban: ";
        gets(y[i].TENBAN);

        fflush(stdin);
        cout<<"\nnhap ngay thanh lap: ";
        gets(y[i].NGAYTHANHLAP);
    }
}
void TRUONGDH::XUAT()
{
    TRUONG::XUAT();
    for(int i=0;i<n;i++)
    {
        cout<<"\nMA KHOA: "<<x[i].MAKHOA<<endl;
        cout<<"\nTEN KHOA: "<<x[i].TENKHOA<<endl;
        cout<<"\nTRUONG KH0A: "<<x[i].TRUONGKHOA<<endl;
    }
    for(int i=0;i<m;i++)
    {
        cout<<"\nMA BAN: "<<y[i].MABAN<<endl;
        cout<<"\nTEN BAN: "<<y[i].TENBAN<<endl;
        cout<<"\nNGAY THANH LAP: "<<y[i].NGAYTHANHLAP<<endl;
    }
}
// Bonus  1: XOA THONG TIN VE KHOA CO MA KHOA LA kh01 TRONG DS CAC KHOA
// CUA TRUONG DAI HOC VUA NHAP.IN THONG TIN CUA TRUONG DAI HOC RA MAN HINH
void xoa(TRUONGDH &a)
{
    for(int i=0;i<a.n;i++)
        if(strcmp(a.x[i].MAKHOA,"KH01") == 0)
            for(int j=i;j<a.n-1;j++)
                a.x[j] = a.x[j+1];
    a.n--;
    a.x = (KHOA*)realloc(a.x,a.n*sizeof(KHOA));
}
int main()
{
    TRUONGDH a;
    a.NHAP();

    cout<<"\n======THONG TIN VUA NHAP=======\n";
    a.XUAT();

    xoa(a);
    cout<<"\n=====THONG TIN SAU KHI XOA KH01====";
    a.XUAT();
    
    return 0;
}

