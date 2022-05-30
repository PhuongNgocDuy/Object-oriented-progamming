#include<bits/stdc++.h>

using namespace std;

class ARRAY
{
private:
    float *a;
    int n;
public:
    ARRAY operator++();
    ARRAY operator--();
    friend istream& operator>>(istream& x,ARRAY &y);
    friend ostream& operator<<(ostream& x,ARRAY y);
};
ARRAY ARRAY::operator++()
{
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if (a[i] > a[j])
            {
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    return *this;
}
ARRAY ARRAY::operator--()
{
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if (a[i] < a[j])
            {
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    return *this;
}

istream& operator>>(istream& x,ARRAY &y)
{
    cout<<"\nnhap n: ";
    cin>>y.n;

    y.a =new float[y.n];
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
int main()
{
    ARRAY m;
    cin>>m;

 /*   m = ++m;
    ofstream f("D:/SAPXEP1.txt",ios::out);
    f<<"danh sach khi sap xep tang dan: ";
    f<<m;
    f.close();*/

    m = --m;
    k = !k;
    ofstream f1("D:/SAPXEP1.txt",ios::out);
    f1<<"DANH SACH KHI SAP XEP GIAM DAN: ";
    f1<<m;
    f1.close();

    return 0;

}


