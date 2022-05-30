#include<bits/stdc++.h>

using namespace std;

class PTB2
{
private:
    float a,b,c;
public:
    void NHAP();
    void XUAT();
    void GIAI();
    PTB2();
    PTB2(float x,float y,float z);
};
void PTB2::NHAP()
{
    cout<<"\nnhap cac he so: ";
    cout<<"\na= "; cin>>a;
    cout<<"\nb= "; cin>>b;
    cout<<"\nc= "; cin>>c;
}
void PTB2::XUAT()
{
    cout<<"Phuong trinh: "<<a<<"X"<<(char)253<< "+" <<b<< "X" << "+" <<c<< "=" "0"<<endl; 
}
void  PTB2::GIAI()
{
    if (a==0)
        cout<<"\nday khong phai la phuong trinh bac 2 !";
    else
    {
        float delta = b*b-4*a*c;
        if (delta <0)
            cout<<"\nphuong trinh vo nghiem";
        else    
        {
            cout<<"X1= "<<(-b+sqrt(delta))/(2*a)<<endl;
            cout<<"X2= "<<(-b-sqrt(delta))/(2*a)<<endl;
        }
    }
}
PTB2::PTB2()
{
    a=b=c=0;
}
PTB2::PTB2(float x,float y,float z)
{
    a=x; b=y;c=z;
}
int main()
{
    PTB2 P(1,2,1); P.XUAT(); P.GIAI();

    PTB2 Q;    Q.NHAP();    Q.XUAT();   Q.GIAI();  
    return 0;
}