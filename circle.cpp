#include<iostream>
using namespace std;
class circle{
    float radius;
    public:
    circle(float r)
    {
        radius=r;
    }
    
    float area()
    {
        return 3.14*radius*radius;
    }
    float perimeter()
    {
        return 2*3.14*radius;
    }
    void display()
    {
        cout<<"\n The area is :"<<area();
        cout<<"\n The perimeter is :"<<perimeter();
    }
};
int main()
{
    float r;
    cout<<"\n Enter the radius:";
    cin>>r;
    circle circle(r);
    circle.display();
    return 0;
}