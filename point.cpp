#include<iostream>
#include<cmath>
using namespace std;
class point{
    double xordinate, yordinate;
    public:
    point(){
        xordinate=0;
        yordinate=0;
    }
    point(double x){
        xordinate=x;
        yordinate=0;
    }
    point(double x, double y){
        xordinate=x;
        yordinate=y;
    }
    double dist(){
        return sqrt((xordinate*xordinate)+(yordinate*yordinate));
    }
    double slope(){
        if(xordinate==0)
        cout<<"\n undefined slope from origin.";
        return yordinate/xordinate;
    }
    friend double distbet(const point& p1, const point& p2);
};
double distbet(const point& p1, const point& p2){
    double x=p2.xordinate-p1.xordinate;
    double y=p2.yordinate-p1.yordinate;
    return sqrt((x*x)+(y*y));
}
int main()
{
    point p1;
    point p2(3);
    point p3(3,4);
    cout<<"\n Distance of p1 from origin:"<<p1.dist();
    cout<<"\n Distance of p2 from origin:"<<p2.dist();
    cout<<"\n Distance of p3 from origin:"<<p3.dist();
    cout<<"\n The slope of p1:"<<p1.slope();
    cout<<"\n The slope of p2:"<<p2.slope();
    cout<<"\n The slope of p3:"<<p3.slope();
    cout<<"\n Distance between p2 and p3:"<<distbet(p2,p3);
    return 0;
}