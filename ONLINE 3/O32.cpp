#include<bits/stdc++.h>

using namespace std;

 class TAMGIAC
{
private:
    float a,b,c;
public:
    TAMGIAC();
    TAMGIAC(float x,float y,float z);
    float operator!();
    friend istream& operator>>(istream& x,TAMGIAC &y);
    friend ostream& operator<<(ostream& x, TAMGIAC y);

};
istream& operator>>(istream& x,TAMGIAC &y)
{
    cout<<"\nnhap canh a: ";
    x>>y.a;

    cout<<"\nnhap canh b: ";
    x>>y.b;

    cout<<"\nnhap canh c: ";
    x>>y.c;
    return x;
}
ostream& operator<<(ostream& x, TAMGIAC y)
{
    x<<"canh a b c cua tam giac lan luot: "<<y.a<<" "<<y.b<<" "<<y.c<<endl;
    return x;
}
TAMGIAC::TAMGIAC()
{
    a = b = c = 0;
}
TAMGIAC::TAMGIAC(float x,float y,float z)
{
    a = x ;
    b = y;
    c = z;
}
float TAMGIAC::operator!()
{
    return (a+b+c);
}
int main()
{
    TAMGIAC t1,t2;
    cout<<"\nnhap tam giac t1: ";
    cin>>t1;

    cout<<"\nnhap tam giac t2: ";
    cin>>t2;

    float CV1 = !t1;
    float CV2 = !t2;
    ofstream f("D:/KETQUA.txt", ios::out);
    f<<t1;
    f<<t2;
    f<<"chu vi tam giac 1: "<<CV1<<endl;
    f<<"chu vi tam giac 2: "<<CV2<<endl;
    
    f.close();

    return 0;
    
}
