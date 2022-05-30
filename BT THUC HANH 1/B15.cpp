#include<bits/stdc++.h>

using namespace std;

class MANG
{
private:
    int *a;
    int n;
public:
    void NHAP();
    void XUAT();
    void SORT();
};
void MANG::NHAP()
{
    cout<<"\nnhap n: ";
    cin>>n;
    a= new int[n];
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}
void MANG::XUAT()
{
    for (int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
void swap(int &a,int &b)
{
    int temp = a;
    a= b; 
    b = temp;
}
void MANG::SORT()
{
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(a[i] > a[j])
                swap(a[i],a[j]);
}
int main()
{
    MANG x;
    x.NHAP();
    cout<<"\n\t======DANH SACH VUA NHAP==========\n";
    x.XUAT();

    x.SORT();
    cout<<"\n\t======DANH SACH SAU KHI SAP XEP======\n";
    x.XUAT();
    return 0;
}


