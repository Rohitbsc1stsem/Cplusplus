#include<iostream>
using namespace std;
class complex{
    double real,img;
    public:
    complex(){
        real=0;
        img=0;
    }
    complex(double r){
        real=r;
        img=0;
    }
    complex(double r, double i){
        real=r;
        img=i;
    }
    double rpart(){
        return real;
    }
    double ipart(){
        return img;
    }
    complex add(complex c1, complex c2){
        complex c3;
        c3.real=c1.real+c2.real;
        c3.img=c1.img+c2.img;
        return c3;
    }
    complex mul(complex c1, complex c2){
        complex c3;
        c3.real=c1.real*c2.real-c1.img*c2.img;
        c3.img=c1.real*c2.img+c1.img*c2.real;
        return c3;
    }
    void display(){
        cout<<real;
        if(img>=0)
        cout<<"+"<<img<<"i"<<endl;
        else
        cout<<"-"<<img<<"i"<<endl;
    }
};
int main()
{
    complex c1(0,0);
    complex c2(3,-2);
    complex c3(-4,3);
    cout<<"\n The real of c1:"<<c1.rpart();
    cout<<"\n the imaginary of c1:"<<c1.ipart();
    cout<<"\n real part of c2:"<<c2.rpart();
    cout<<"\n imaginary part of c2:"<<c2.ipart();
    cout<<"\n real part of c3:"<<c3.rpart();
    cout<<"\n imaginary part of c3:"<<c3.ipart();
    complex sum= c1.add(c2,c3);
    cout<<"\n the sum is:";
    sum.display();
    complex product=c1.mul(c2,c3);
    cout<<"the product is :";
    product.display();
    return 0;
}