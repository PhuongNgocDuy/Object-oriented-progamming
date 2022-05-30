#include<bits/stdc++.h>

using namespace std;

class ARRAY
{
private:
    int *VALUE;
    int n;
public:
    ARRAY();
    ARRAY(int x);
    ~ ARRAY();
    void NHAP();
    void XUAT();
};
ARRAY:: ARRAY()
 {
     n=0;
 }
ARRAY:: ARRAY(int x)
{
    n=x;
    VALUE =new int[n];
    for(int i=0;i<n;i++)
        VALUE[i]= 0;
}
ARRAY::~ARRAY()
{
    n=0;
    VALUE = NULL;
}

void ARRAY::NHAP()
{
   
        cout<<"nhap n= ";
        cin>>n;
    
    if(VALUE == NULL)
    VALUE =new int[n];
    for(int i=0;i<n;i++)
    {
        cout<<"VALUE["<<i<<"]= ";
        cin>>VALUE[i];
    }
}
void ARRAY::XUAT()
{
    for(int i=0;i<n;i++)
        cout<<VALUE[i]<<" ";
}
int main()
{
    ARRAY x(8);
    cout<<"\nmang vua khoi tao: ";
    x.XUAT();
    
    cout<<"\nnhap mang: "<<endl;
    x.NHAP();
    cout<<"\nmang vua nhap la: ";
    x.XUAT();

    return 0;
}