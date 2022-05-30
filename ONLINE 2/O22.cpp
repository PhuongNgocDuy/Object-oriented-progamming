#include<bits/stdc++.h>

using namespace std;
class STUDENT;
class SCHOOL
{
private:
    char NAME[30];
    char DATE[30];
public:
    friend class FACULTY;
    friend class STUDENT;
    friend void SUA_SCHOOL_NAME(STUDENT &a);
};
class FACULTY
{
private:
    char NAME[30];
    char DATE[30];
    SCHOOL x;
public:
    void INPUT();
    void OUTPUT();
    friend class STUDENT;
    friend void SUA_SCHOOL_NAME(STUDENT &a);
};
class PERSON
{
protected:
    char NAME[30];
    char BIRTH[30];
    char ADDRESS[30];
public:
    void INPUT();
    void OUTPUT();
    PERSON();
};
class STUDENT : PERSON
{
private:
    FACULTY y;
    char CLASS[30];
    float SCORE;
public:
    void INPUT();
    void OUTPUT();
    STUDENT();
    friend void SUA_SCHOOL_NAME(STUDENT &a);
};
PERSON::PERSON()
{
    strcpy(NAME, " ");
    strcpy(BIRTH, " ");
    strcpy(ADDRESS, " ");
}
STUDENT::STUDENT()
{
    strcpy(y.NAME, " ");
    strcpy(y.DATE, " ");
    strcpy(y.x.NAME, " ");
    strcpy(y.x.DATE, " ");
    strcpy(CLASS, " ");
    SCORE = 0;
}
void FACULTY::INPUT()
{
    fflush(stdin);
    cout<<"\nFACULTY NAME: ";
    gets(NAME);

    fflush(stdin);
    cout<<"\nFACULTY DATE: ";
    gets(DATE);

    cout<<"\n====SCHOOL====\n";
    fflush(stdin);
    cout<<"\nSCHOOL NAME: ";
    gets(x.NAME);

    fflush(stdin);
    cout<<"\nSCHOOL DATE: ";
    gets(x.DATE);
}
void FACULTY::OUTPUT()
{
    cout<<"\nFACULTY NAME: "<<NAME<<endl;
    cout<<"\nFACULTY DATE: "<<DATE<<endl;
    cout<<"\n====SCHOOL====\n";
    cout<<"\nSCHOOL NAME: "<<x.NAME<<endl;
    cout<<"\nSCHOOL DATE: "<<x.DATE<<endl;
}
void PERSON::INPUT()
{
    fflush(stdin);
    cout<<"\nNAME: ";
    gets(NAME);

    fflush(stdin);
    cout<<"\nBIRTH: ";
    gets(BIRTH);

    fflush(stdin);
    cout<<"\nADDRESS: ";
    gets(ADDRESS);
}
void PERSON::OUTPUT()
{
    cout<<"\nNAME: "<<NAME<<endl;
    cout<<"\nBIRTH: "<<BIRTH<<endl;
    cout<<"\nADDRESS: "<<ADDRESS<<endl;
}
void STUDENT::INPUT()
{
    y.INPUT();
    fflush(stdin);
    cout<<"\nCLASS: ";
    gets(CLASS);
    
    cout<<"\nSCORE: ";
    cin>>SCORE;
}
void STUDENT::OUTPUT()
{
    cout<<"\n======FACULTY=====\n";
    y.OUTPUT();

    cout<<"\nCLASS: "<<CLASS<<endl;
    cout<<"\nSCORE: "<<SCORE<<endl;
}
//bonus 1: sua thong tin ve ten truong cua sinh vien vua nhap thanh DHCNHN
void SUA_SCHOOL_NAME(STUDENT &a)
{
    strcpy(a.y.x.NAME, ">DHCNHN<");
}
int main()
{
    STUDENT a;
    a.INPUT();

    cout<<"\n========THONG zTIN VUA NHAP========\n";
    a.OUTPUT();

    SUA_SCHOOL_NAME(a);
    cout<<"\n====THONG TIN SAU KHU SUA======\n";
    a.OUTPUT();

    return 0;
}

