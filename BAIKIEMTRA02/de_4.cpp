#include<bits/stdc++.h>

using namespace std;

class ARRAY
{
    int *a;
    int n;
public:
    ARRAY();
    ARRAY(int x);
    ~ARRAY();
    friend istream& operator>>(istream& x,ARRAY &y);
    friend ostream& operator<<(ostream& x,ARRAY y);
    ARRAY operator--();
    int operator++();
    bool operator*(ARRAY y);

};
ARRAY::ARRAY()
{
    n = 0;
    a = NULL;
}
ARRAY::ARRAY(int x)
{
    n = x;
    a = new int[n];
    for(int i=0;i<n;i++)
        a[i] = 0;
}
ARRAY::~ARRAY()
{
    n = 0;
    delete []a;
}
istream& operator>>(istream& x,ARRAY &y)
{
    cout<<"\nnhap n: ";
    cin>>y.n;

    y.a = new int[y.n];
    for(int i=0;i<y.n;i++)
    {
        cout<<"\na["<<i<<"]= ";
        x>>y.a[i];
    }
    return x;
}
ostream& operator<<(ostream& x,ARRAY y)
{
    for(int i=0;i<y.n;i++)
        x<<y.a[i]<<" ";
    return x;
}
ARRAY ARRAY::operator--()
{
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    return *this;
}
int ARRAY::operator++()
{
    int sum = 0;
    for(int i=0;i<n;i++)
        if (a[i]%2 == 0 && a[i]>0)
            sum +=a[i];
    return sum;
}
bool ARRAY::operator*(ARRAY y)
{
    bool kiemtra = true, kiemtra1 = false;
    int dem =0, dem1=0;
    for(int i =0;i<n;++i)
        if(a[i]%2==1)
        dem++;
    for(int i =0;i<y.n;++i)
        if(y.a[i]%2==1)
        dem1++;
    if(dem == dem1)
        return kiemtra;
    else return kiemtra1;
}
int main()
{
    ARRAY a1,a2;
    cin>>a1;
    cin>>a2;
    ofstream f("D:/KETQUA.txt" ,ios::out);
    f<<a1<<endl;
    f<<a2<<endl;
    f.close();
    
    ARRAY a3 = --a1;
    ARRAY a4 = --a2;
    
    fstream f1("D:/KETQUA.txt" ,ios::app);
    f1<<a3<<endl;
    f1<<a4<<endl;
    f1.close();
    
    int h = ++a1;
    int h1 = ++a2;
    cout<<"\ntong mang 1: ";
    cout<<h<<endl;
    cout<<"\ntong mang 2: ";
    cout<<h1<<endl;
    
    bool x = a1*a2;
    if(x==true)
        cout<<"\nSO LUONG PHAN TU LE CUA 2 MANG BANG NHAU";
    if(x==false)
        cout<<"\nSO LUONG PHAN TU LE CUA 2 MANG KHONG BANG NHAU";
    return 0;

}


