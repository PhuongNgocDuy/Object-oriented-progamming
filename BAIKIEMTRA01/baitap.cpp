#include<bits/stdc++.h>

using namespace std;

class MANG
{
private:  
    int *a;
    int n;
public:
    friend istream& operator>>(istream& x, MANG &y);
    friend ostream& operator<<(ostream& x, MANG y);

};
istream& operator>>(istream& x, MANG &y)
{
    cout<<"\nnhap n: ";
    x>>y.n;
    y.a = new int[y.n];
    for (int i=0;i<y.n;i++)
    {
        cout<<"a["<<i<<"]= ";
        x>>y.a[i];
    }
    return x;
}
ostream& operator<<(ostream& x, MANG y)
{
    for(int i=0;i<y.n;i++)
        x<<y.a[i]<<" ";
    
    return  x;
}
int main()
{
    MANG K;
    cin>>K;

    ofstream f;
    f.open("D:/PHUONG.txt", ios::app);
    f<<K;
    f.close();

    return 0;
}



