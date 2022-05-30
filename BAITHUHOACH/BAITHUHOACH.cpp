#include<bits/stdc++.h>

using namespace std;

class HANG
{
private:
    char MAH[30];
    char TENH[30];
    float DONGIA;
    int SOLUONG;
    int NAM;
public:
    HANG();
    HANG(char *x,char *y,float z,int t,int k);
    friend istream& operator>>(istream& x,HANG &y);
    friend ostream& operator<<(ostream& x,HANG y);
    friend void TIM_IPHONE(HANG *x,int n);
    friend void SAPXEP1(HANG *x,int n);
    friend void XOA_H005(HANG *x,int &n);
    friend void XOA_MH_20(HANG *x,int &n);
};
HANG::HANG()
{
    strcpy(MAH,"");
    strcpy(TENH,"");
    DONGIA = 0;
    SOLUONG = 0;
    NAM = 0;
}
HANG::HANG(char *x,char *y,float z,int t,int k)
{
    strcpy(MAH,x);
    strcpy(TENH,y);
    DONGIA = z;
    SOLUONG = t;
    NAM = k ;
}
istream& operator>>(istream& x,HANG &y)
{
    fflush(stdin);
    cout<<"\nnhap ma hang: ";
    x.getline(y.MAH, 30);

    fflush(stdin);
    cout<<"\nnhap ten hang: ";
    x.getline(y.TENH, 30);

    cout<<"\nnhap don gia: ";
    x>>y.DONGIA;

    cout<<"\nnhap so luong: ";
    x>>y.SOLUONG;

    cout<<"\nnhap nam: ";
    x>>y.NAM;

    return x;
}
ostream& operator<<(ostream& x,HANG y)
{
    x<<setw(10)<<y.MAH;
    x<<setw(10)<<y.TENH;
    x<<setw(10)<<y.DONGIA;
    x<<setw(10)<<y.SOLUONG;
    x<<setw(10)<<y.NAM<<endl;
    return x;
}
//bonus 1: DS vua nhap co mat hang "IPHONE12" khong?
void TIM_IPHONE(HANG *x,int n)
{
    int DEM = 0;
    for(int i=0;i<n;i++)
        if (strcmp(x[i].TENH,"IPHONE12") == 0)
            DEM++;
        if (DEM == 0)
            cout<<"\nKHONG CO IPHONE 12.";
        else    
            cout<<"\nDANH SACH CO IPHONE 12.";
}
// bonus 2:sap xep DS theo chieu tang dan cua thanh tien,xuat 
//vao tep(D:/SAPXEP1.txt)
void SAPXEP1(HANG *x,int n)
{
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(x[i].DONGIA * x[i].SOLUONG > x[j].DONGIA * x[j].SOLUONG)
                swap(x[i],x[j]);
}
// bonus 3:xoa mat hang co ma H005 ra khoi DS,xuat DS da xoa vao tep(XOA1.txt)
void XOA_H005(HANG *x,int &n)
{
    for(int i=0;i<n;i++)
   // while( (strcmp(x[i].MAH,"H005")==0) && i<n) // XOA MOI MAT HANG
    if (strcmp(x[i].MAH,"H005") == 0) // XOA 1 MAT HANG
    {
        for(int j=i;j<n-1;j++)
            x[j] = x[j+1];
        n--;
    }
    x=(HANG*)realloc(x,n*sizeof(HANG));
}
// bonus 4:Xoa moi mat hang co don gia nho hon 20 ra khoi danh sach
// xuat vao tep(XOA_ALL.txt)
void XOA_MH_20(HANG *x,int &n)
{
    for(int i=0;i<n;i++)
        while(x[i].DONGIA < 20 && i<n)
        {
            for(int j=i;j<n-1;j++)
                x[j] = x[j+1];
            n--;
        }
    x= (HANG*)realloc(x,n*sizeof(HANG));
}
int main()
{
    HANG *x;
    int n;
    cout<<"\nnhap so mat hang: ";
    cin>>n;
    x= new HANG[n];
    for(int i=0;i<n;i++)
        cin>>x[i];
    
    //in ra man hinh may tinh
    cout<<"\n================DANH SACH VUA NHAP===============\n";
    for(int i=0;i<n;i++)
        cout<<x[i];

    // in ra tep D:/HANGNHAP.txt
/*   ofstream f1("D:/HANGNHAP.txt",ios::out);
    for(int i=0;i<n;i++)
        f1 << x[i];
    f1.close();*/
  
   // TIM_IPHONE(x,n); // bonus1

 /*   SAPXEP1(x,n);
    ofstream f2("D:/SAPXEP1.txt",ios::out);
    for(int i=0;i<n;i++)
        f2 << x[i];
    f2.close();*/


  /*  XOA_H005(x,n);
    ofstream f3("D:/XOA1.txt",ios::out);
    for(int i=0;i<n;i++)
        f3 << x[i];
    f3.close();

  /*  XOA_MH_20(x,n);
    ofstream f4("D:/XOA_ALL.txt",ios::out);
    for(int i=0;i<n;i++)
        f4<<x[i];
    f4.close();*/

    return 0;
}
