#include<iostream>
using namespace std;
class complex{
    double real,img;
    public:
    complex(){real=0;
    img=0;
    }
    
    complex(double r, double i){
        real=r;
        img=i;
    }
    
    friend istream& operator >>(istream &in,complex &c){
        cout<<"\n Enter real part:";
        in>>c.real;
        cout<<"\n Enter img part:";
        in>>c.img;
        return in;
    }
    friend ostream& operator <<(ostream &out,const complex &c){
        if(c.img>=0)
            out<<c.real<<"+"<<c.img<<"i";
        else 
        out<<c.real<<"-"<<c.img<<"i";
        return out;
    }
    complex operator +(const complex &other){
        return complex(real+other.real,img+other.img);
    }
    complex operator -()const{
        return complex(-real,-img);
    }
};
int main(){
    complex c1,c2,c3;
    cout<<"\n Enter the first complex number:";
    cin>>c1;
    cout<<"\n Enter the second complex number:";
    cin>>c2;
    cout<<"\n First complex:"<<c1;
    cout<<"\n Second complex:"<<c2;
    c3=c1+c2;
    cout<<"\n Sum of the two complex no:"<<c3;
    complex negc1=-c1;
    cout<<"\n Negative of the first complex number:"<<negc1;
    return 0;


}