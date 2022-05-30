#include<bits/stdc++.h>

using namespace std;

class TRINOMIAL
{
private:
    float a,b,c;
public:
    TRINOMIAL(); // phuong thuc khoi tao khong doi
    TRINOMIAL(float x,float y,float z); // phuong thuc khoi tao co doi
    friend ostream& operator<<(ostream& x,TRINOMIAL y);
    TRINOMIAL operator+(TRINOMIAL y);
    TRINOMIAL operator-(TRINOMIAL y);
    TRINOMIAL operator-();
};
TRINOMIAL::TRINOMIAL()
{
    a = b = c = 0;
}
TRINOMIAL::TRINOMIAL(float x,float y,float z)
{
    a = x;
    b = y;
    c = z;
}
ostream& operator<<(ostream& x,TRINOMIAL y)
{
    x<<y.a<<"X"<<(char)253<<" + "<<y.b<<"X"<<" + "<<y.c;
    return x;
}
TRINOMIAL TRINOMIAL::operator+(TRINOMIAL y)
{
    TRINOMIAL kq;
    kq.a = a + y.a;
    kq.b = b + y.b;
    kq.c = c + y.c;
    return kq;
}
TRINOMIAL TRINOMIAL::operator-(TRINOMIAL y)
{
    TRINOMIAL kq;
    kq.a = a - y.a;
    kq.b = b - y.b;
    kq.c = c - y.c;

    return kq;
}
TRINOMIAL TRINOMIAL::operator-()
{
   /* a=-a;
    b=-b;
    c=-c;
    return *this;*/

    TRINOMIAL kq;
    kq.a = -a;
    kq.b = -b;
    kq.c = -c;
    return kq;
}
int main()
{
    TRINOMIAL a1(2,5,4);
    TRINOMIAL a2(1,4,2);

    TRINOMIAL a3 = a1 + a2;
    TRINOMIAL a4 = a1 - a2;
 
    a1=-a1;
    a2=-a2;
    

    ofstream f("D:/TAMTHUC.txt",ios::out);
    f<<"\ntam thuc 1 da doi dau: "<<a1<<endl;
    f<<"\ntam thuc 2 da doi dau: "<<a2<<endl;

    f<<"\ntam thu tong: "<<a3<<endl;
    f<<"\ntam thu tru: "<<a4<<endl;
    f.close();

    return 0;
}