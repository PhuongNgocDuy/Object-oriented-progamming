#include<bits/stdc++.h>

using namespace std;

class PHANSO
{
private:
    int TUSO,MAUSO;
public:
    PHANSO();
    PHANSO(int a,int b);
    PHANSO operator*(PHANSO y);// nhan hai phan so
    PHANSO operator-(); // doi giau phan so
    float operator++();
    friend istream& operator>>(istream& x,PHANSO &y);
    friend ostream& operator<<(ostream& x,PHANSO y);
};
PHANSO::PHANSO()
{
    TUSO = 0;
    MAUSO = 0;
}
PHANSO::PHANSO(int a,int b)
{
    TUSO = a;
    MAUSO = b;
}
PHANSO PHANSO::operator*(PHANSO y)
{
    PHANSO k;
    k.TUSO = TUSO * y.TUSO;
    k.MAUSO = MAUSO * y.MAUSO;
    return k; 
}
PHANSO PHANSO::operator-()
{
    TUSO = -TUSO;
    MAUSO = MAUSO;
    return *this;
}
float PHANSO::operator++()
{
    return (float)TUSO/MAUSO;
}
istream& operator>>(istream& x,PHANSO &y)
{
    cout<<"\nnhap tu so: ";
    x>>y.TUSO; 
    
    cout<<"\nnhap mau so: ";
    x>>y.MAUSO;
    return x;
}
ostream& operator<<(ostream& x,PHANSO y)
{
    x<<y.TUSO<<"/"<<y.MAUSO<<endl;
    return x;
}
int main()
{
    PHANSO a1,a2;
    cin>>a1;
    cout<<"\nnhap phan so thu 2: ";
    cin>>a2;

    PHANSO a3 = a1 * a2;
 /*   cout<<"\nket qua nhan 2 phan so: "<<a3;
    a3 = -a3;
    cout<<"\nphan so vua doi dau: "<<a3;
    cout<<"\nket qua: "<<++a3;*/

    ofstream f("D:/PHANSO.txt",ios::out);
    f<<a3;
    f<<"\nket qua: "<<++a3;
    f.close();

    return 0;
}


