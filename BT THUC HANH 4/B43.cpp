#include<bits/stdc++.h>

using namespace std;

class VEHICLE
{
protected:
    char NHANHIEU[30];
    int NAMSX;
    char HANGSX[30];
public:
    void NHAP();
    void XUAT();
};
class OTO : public VEHICLE
{
private:
    int SOCHONGOI;
    float DUNGTICH;
public:
    void NHAP();
    void XUAT();
};
class MOTO : public VEHICLE
{
private:
    int PHANKHOI;
public:
    void NHAP();
    void XUAT();
};
void VEHICLE::NHAP()
{
    fflush(stdin);
    cout<<"\nnhap nhan hieu: ";
    gets(NHANHIEU);

    cout<<"\nnam san xuat: ";
    cin>>NAMSX;

    fflush(stdin);
    cout<<"\nnhap hang san xuat: ";
    gets(HANGSX);
}
void VEHICLE::XUAT()
{
    cout<<"\nnhan hieu: "<<NHANHIEU<<endl;
    cout<<"\nnam san xuat: "<<NAMSX<<endl;
    cout<<"\nhang san xuat: "<<HANGSX<<endl;
}
void OTO::NHAP()
{
    VEHICLE::NHAP();

    cout<<"\nnhap so cho ngoi: ";
    cin>>SOCHONGOI;

    cout<<"\nnhap dung tich cua xe: ";
    cin>>DUNGTICH;
}
void OTO::XUAT()
{
    VEHICLE::XUAT();

    cout<<"\nso cho ngoi: "<<SOCHONGOI<<endl;
    cout<<"\ndung tich cua xe: "<<DUNGTICH<<endl;
}
void MOTO::NHAP()
{
    VEHICLE::NHAP();

    cout<<"\nphan khoi cua xe: ";
    cin>>PHANKHOI;
}
void MOTO::XUAT()
{
    VEHICLE::XUAT();

    cout<<"\nphan khoi cua xe: "<<PHANKHOI<<endl;
}
int main()
{
    OTO a;
    MOTO b;
    cout<<"\nnhap thong tin OTO: ";
    a.NHAP();

    cout<<"\nnhap thong tin cho moto: ";
    b.NHAP();

    cout<<"\noto vua nhap: ";
    a.XUAT();

    cout<<"\nmoto vua nhap: ";
    b.XUAT();

    return 0;
}