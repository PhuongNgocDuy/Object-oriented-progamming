#include<bits/stdc++.h>

using namespace std;

class PS
{
private:
    int TS,MS;
public:
    PS operator+(PS y); // cong hai phan so
    PS operator-(PS y); // tru hai phan so
    PS operator*(PS y); // nhan 2 phan so
    PS operator/(PS y); // chia hai phan so
    float operator-(); // tinh gia tri PS
    friend istream&operator>>(istream& x,PS &y);
    friend ostream&operator<<(ostream&x, PS y);
};
PS PS::operator+(PS y)
{
    PS x;
    x.TS = TS*y.MS + MS*y.TS;
    x.MS = MS*y.MS; 
    return x;
}
PS PS::operator-(PS y)
{
    PS x;
    x.TS =TS*y.MS - MS*y.TS;
    x.MS =MS*y.MS;
    return x;
}
PS PS::operator*(PS y)
{
    PS x;
    x.TS = TS*y.TS;
    x.MS = MS*y.MS;
    return x;
}
PS PS::operator/(PS y)
{
    PS x;
    x.TS = TS * y.MS;
    x.MS = MS * y.TS;
    return x;
}

float PS::operator-()
{
    return (float)TS/MS;
}
istream& operator>>(istream& x,PS &y)
{
    cout<<"\nnhap tu so: ";
    x>>y.TS;

    cout<<"\nnhap mau so: ";
    x>>y.MS;
    return x;
}
ostream& operator<<(ostream& x, PS y)
{
    x<<y.TS<<"/"<<y.MS;
    return x;
}
int main()
{
    PS a,b;
    cout<<"\nnhap phan so thu nhat: ";
    cin>>a;

    cout<<"\nnhap phan so thu hai: ";
    cin>>b;

    PS P = a + b;
    PS H = a - b;
    PS U = a * b;
    PS O = a / b;
    

    ofstream f("D:/KETQUA.txt",ios::out);
    f<<-P;
    f.close();

    return 0;
}



