#include<bits/stdc++.h>

using namespace std;

class HCN
{
private:
    float D,R;
public:
    void NHAP();
    void VE();
    float DIENTICH();
    float CHUVI();
};
void HCN::NHAP()
{
    cout<<"\nnhap chieu dai: ";
    cin>>D;

    cout<<"\nnhap chieu rong: ";
    cin>>R;
}
void HCN::VE()
{
    for(int i=0;i<D;i++)
    {
        for(int j=0;j<R;j++)
            cout<<"*";
        cout<<endl;
    }
}
float HCN::DIENTICH()
{
    return D * R;
}
float HCN::CHUVI()
{
    return 2 * (D+R);
}
int main()
{
    HCN x;
    cout<<"\nnhap hai canh hinh chu nhat: ";
    x.NHAP();

    cout<<"\n\t=====HINH CHU NHAT SAU KHI VE========\n";
    x.VE();

    cout<<"\ndien tich HCN: "<<x.DIENTICH()<<endl;
    cout<<"\nchu vi HCN: "<<x.CHUVI()<<endl;
    return 0;
}