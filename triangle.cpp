#include<iostream>
using namespace std;
class triangle{
                int side1,side2,side3;
                public:
                triangle(int a,int b,int c)
                {
                    side1=a;
                    side2=b;
                    side3=c;
                }
                int isosceles()
                {
                    return (side1==side2||side2==side3||side1==side3);
                }
                int equilateral()
                {
                    return (side1==side2&&side2==side3);
                }

};
int main()
{
    triangle t(5,5,5);
    if(t.isosceles())
    {
        cout<<"\n The triangle is isosceles.";
    }
    else{
        cout<<"\n The triangle is not isosceles.";
    }
    if(t.equilateral()){
        cout<<"\n The triangle is equilateral.";        
    }
    else{
        cout<<"\n The triangle is not equilateral.";
    }
    return 0;
}