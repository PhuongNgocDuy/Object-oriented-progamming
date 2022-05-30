#include<bits/stdc++.h>

using namespace std;

class PRINTER
{
protected:
    float TRONGLUONG;
    char HANGSX[30];
    int NAMSX;
    int TOCDO;
};
class LASERPRINTER : public PRINTER 
{
private:
    int DOPHANGIAI;
public:
    void NHAP();
    void XUAT();
};
class DOTPRINTER :public PRINTER
{
private:
    int MATDOKIM;
public:
    void NHAP();
    void XUAT();
};
void DOTPRINTER::NHAP()
{
    cout<<"\nnhap trong luong: ";
    cin>>TRONGLUONG;
    
    fflush(stdin);
    cout<<"\nnhap hang san xuat: ";
    gets(HANGSX);

    cout<<"\nnhap nam san xuat: ";
    cin>>NAMSX;

    cout<<"\nnhap toc do: ";
    cin>>TOCDO;

    cout<<"\nnhap mat do kim: ";
    cin>>MATDOKIM;   
}
void DOTPRINTER::XUAT()
{
    cout<<"\nTRONG LUONG: "<<TRONGLUONG<<endl;
    cout<<"\nHANG SAN XUAT: "<<HANGSX<<endl;
    cout<<"\nNAM SAN XUAT: "<<NAMSX<<endl;
    cout<<"\nTOC DO"<<TOCDO<<endl;
    cout<<"\nMAT DO KIM: "<<MATDOKIM<<endl;
}
void LASERPRINTER::NHAP()
{
    cout<<"\nnhap trong luong: ";
    cin>>TRONGLUONG;
    
    fflush(stdin);
    cout<<"\nnhap hang san xuat: ";
    gets(HANGSX);

    cout<<"\nnhap nam san xuat: ";
    cin>>NAMSX;

    cout<<"\nnhap toc do: ";
    cin>>TOCDO;

    cout<<"\nnhap DO PHAN GIAI: ";
    cin>>DOPHANGIAI;   
}
void LASERPRINTER::XUAT()
{
    cout<<"\nTRONG LUONG: "<<TRONGLUONG<<endl;
    cout<<"\nHANG SAN XUAT: "<<HANGSX<<endl;
    cout<<"\nNAM SAN XUAT: "<<NAMSX<<endl;
    cout<<"\nTOC DO: "<<TOCDO<<endl;
    cout<<"\nDO PHAN GIAI: "<<DOPHANGIAI<<endl;
}
int main()
{
    DOTPRINTER a;
    LASERPRINTER b;
    cout<<"NHAP THONG TIN MAY IN KIM: "<<endl;
    a.NHAP();

    cout<<"NHAP THONG TIN MAY IN laser: "<<endl;
    b.NHAP();

    cout<<"\nMAY IN KIM VUA NHAP: ";
    a.XUAT();

    cout<<"\nMAY IN LASER VUA NHAP: ";
    b.XUAT();

    return 0;
}

