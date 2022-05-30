#include<bits/stdc++.h>

using namespace std;

class MANG
{
private:
    float *a;
    int n;
public:
    void NHAP();
    void XUAT();
    float MAX();
    float MIN();
};
void MANG::NHAP()
{
    cout<<"\nNhap n: ";
    cin>>n;
    a= new float[n];

    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]= "; 
        cin>>a[i];
    }
}
void MANG::XUAT()
{
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
float MANG::MAX()
{
    float max = a[0];
    for(int i=0;i<n;i++)
        if (a[i] > max)
            max = a[i];
    return max;
}
float MANG::MIN()
{
    float min = a[0];
    for (int i=0;i<n;i++)
        if (a[i]< min)
            min =a[i];
    return min;
}
int main()
{
    MANG m;
    m.NHAP();

    cout<<"\n\t=======MANG VUA NHAP======\n";
    m.XUAT();

    cout<<"\ngia tri lon nhat la: "<<m.MAX()<<endl;
    cout<<"\ngia tri nho nhat la: "<<m.MIN()<<endl;

    return 0;

}