#include<bits/stdc++.h>

using namespace std;

class PERSON
{
protected:
    char HOTEN[30];
    char NGAYSINH[30];
    char QUEQUAN[30];
};
class KYSU : public PERSON
{
private:
    char NGANH[20];
    int NAMTN;
public:
    void NHAP();
    void XUAT();
    friend void input(KYSU *a,int n);
};
void KYSU::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap ho ten: ";
    gets(HOTEN);

    fflush(stdin);
    cout<<"\nnhap ngay sinh: ";
    gets(NGAYSINH);

    fflush(stdin);
    cout<<"\nnhap que quan: ";
    gets(QUEQUAN);

    fflush(stdin);
    cout<<"\nnhap nganh hoc: ";
    gets(NGANH);

    cout<<"\nnhap nam tot nghiep: ";
    cin>>NAMTN;
}
void KYSU::XUAT()
{
    cout<<"ho va ten: "<<HOTEN<<endl;
    cout<<"ngay sinh: "<<NGAYSINH<<endl;
    cout<<"que quan: "<<QUEQUAN<<endl;
    cout<<"nganh hoc: "<<NGANH<<endl;
    cout<<"nam tot nghiep: "<<NAMTN<<endl;
}
void input(KYSU *a,int n)
{
    int MAX = 0;
    for(int i=0;i<n;i++)
        if(a[i].NAMTN > MAX)
            MAX = a[i].NAMTN;
    cout<<"sinh vien tot nghiep gan day nhat: "<<endl;
    for(int i=0;i<n;i++)
        if(a[i].NAMTN == MAX) 
            a[i].XUAT();  
}
int main()
{
    KYSU *a;
    int n;
    cout<<"\nnhap so ky su: ";
    cin>>n;
    a= new KYSU[n];
    for(int i=0;i<n;i++)
        a[i].NHAP();
    
    input(a,n);
    return 0;
}