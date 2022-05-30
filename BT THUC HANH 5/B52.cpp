#include<bits/stdc++.h>

using namespace std;

class SOPHUC
{
private:
    float THUC,AO;
public:
    SOPHUC(); 
    SOPHUC(float x,float y);
    friend ostream& operator<<(ostream& x,SOPHUC y);
    SOPHUC operator+(SOPHUC y);
    SOPHUC operator-(SOPHUC y);
};
SOPHUC::SOPHUC()
{
    THUC = AO =0;
}
SOPHUC::SOPHUC(float x,float y)
{
    THUC =x;
    AO = y;
}
ostream& operator<<(ostream& x,SOPHUC y)
{
    x<<y.THUC<<"+i*"<<y.AO;
    return x;
}
SOPHUC SOPHUC::operator+(SOPHUC y)
{
    SOPHUC kq;
    kq.THUC = THUC + y.THUC;
    kq.AO = AO + y.AO;
    return kq;
}

SOPHUC SOPHUC::operator-(SOPHUC y)
{
    SOPHUC kq;
    kq.THUC = THUC - y.THUC;
    kq.AO = AO - y.AO;
    return kq;
}
int main()
{
    SOPHUC P1(1,2);
    SOPHUC P2(3,4);

    SOPHUC P3 = P1 + P2;
    SOPHUC P4 = P1 - P2;

    ofstream f("D:/KETQUA.txt",ios::out);
    f<<P1<<" + "<<P2<<" = "<<P3<<endl;
    f<<P1<<" - "<<P2<<" = "<<P4<<endl;
    f.close();

    return 0;
}