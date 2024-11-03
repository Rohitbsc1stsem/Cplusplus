#include<iostream>
#include<string>
using namespace std;
struct employee{
    int empno;
    char ename[21];
    float basic,hra,da;
    float calculate()
    {
        return basic+hra+da;
    }
    void getdata()
    {
        cout<<"\n Enter the employee number:";
        cin>>empno;
        cout<<"\n Enter the employee name :";
        cin>>ename;
        cout<<"\n Enter the basic salary";
        cin>>basic;
        cout<<"\n enter hra:";
        cin>>hra;
        cout<<"\n enter da:";
        cin>>da;
    }
     void dispdata(){
        cout<<"\n Employee number:"<<empno;
        cout<<"\n Employee name :"<<ename;
        cout<<"\n Net payment:"<<calculate();
    }
};
int main()
{
    employee emp;
    emp.getdata();
    emp.dispdata();
    return 0;
}