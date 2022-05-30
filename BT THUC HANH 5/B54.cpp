#include<bits/stdc++.h>

using namespace std;

class MATRAN
{
    int n,m;
    double **a;
public:
    MATRAN operator+(MATRAN y);
    MATRAN operator-(MATRAN y);
    MATRAN operator-();
    friend istream& operator>>(istream& x, MATRAN &y);
    friend ostream& operator<<(ostream& x,MATRAN y);

};
istream& operator>>(istream& x, MATRAN &y)
{
    cout<<"\nnhap n dong: ";
    cin>>y.n;

    cout<<"\nnhap m cot: ";
    cin>>y.m;

    y.a =new double*[y.n];
    for(int i=0;i<y.n;i++)
        y.a[i] = new double [y.m];
    for(int i=0;i<y.n;i++)
        for(int j=0;j<y.m;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]= ";
            x>>y.a[i][j];
        }
    return x;
}
ostream& operator<<(ostream& x,MATRAN y)
{
    for(int i=0;i<y.n;i++)
    {
        for(int j=0;j<y.m;j++)
            x<<y.a[i][j]<<" ";
        x<<endl;
    }
    return x;
}
MATRAN MATRAN::operator+(MATRAN y)
{
    MATRAN kq;
    if (m == y.m && n == y.n)
    {
        kq.n = n;
        kq.m = m;
        kq.a = new double*[n];
        for(int i=0;i<n;i++)
            kq.a[i] = new double[m];
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            kq.a[i][j] = a[i][j] + y.a[i][j];
    }
    else
    {
        cout<<"\nHai ma tran khong cung kick thuoc << >>"<<endl;
        kq.n = kq.m = 0;
      //  kq.a = NULL;    
    }
    return kq;
}
MATRAN MATRAN::operator-(MATRAN y)
{
    MATRAN kq;
    if (m == y.m && n == y.n)
    {
        kq.n = n;
        kq.m = m;
        kq.a = new double*[n];
        for(int i=0;i<n;i++)
            kq.a[i] = new double[m];
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            kq.a[i][j] = a[i][j] - y.a[i][j];
    }
    else
    {
        cout<<"\nHai ma tran khong cung kick thuoc << >>"<<endl;
        kq.n = kq.m = 0;
        kq.a = NULL;    
    }
    return kq;
}
MATRAN MATRAN::operator-()
{
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        a[i][j] = -a[i][j];
    return *this;
}
int main()
{
    MATRAN a1 , a2;
    cout<<"\nnhap ma tran a1: "<<endl;
    cin>>a1;

    cout<<"\nnhap ma tran a2: "<<endl;
    cin>>a2;

    
    MATRAN a3 = a1 + a2;
    MATRAN a4 = a1 - a2;

    a1= -a1;
    a2=-a2;
    
    ofstream f("D:/KETQUA.txt",ios::out);
    f<<"ma tran tong: "<<a3<<endl;
    f<<"ma tran hieu: "<<a4<<endl;
    f<<"ma tran da doi dau a1: "<<a1<<endl;
    f<<"ma tran da doi dau a2: "<<a2<<endl;
    f.close();
    
    return 0;
}