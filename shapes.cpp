#include<iostream>
#include<cmath>

class figure{
    public:
        virtual void display()=0;
        virtual void get()=0;
        virtual double area()=0;
        virtual double perimeter()=0;
        virtual ~figure(){}
};
class circle : public figure {
    private:
        double radius;
    public:
        void get() override {
            std::cout<<"\n Enter radius of the circle:";
            std::cin>>radius;
        }

        double area() override {
            return 3.14*radius*radius;
        }

        double perimeter() override{
            return 2*3.14*radius;
        }

        void display() override {
            std::cout<<"\n Circle:";
            std::cout<<"\n Radius:"<<radius;
            std::cout<<"\n Area: "<<area();
            std::cout<<"\n Perimeter: "<<perimeter();

        }
};
class rectangle : public figure{
    private:
        double length, breadth;
    public:
        void get() override {
            std::cout<<"\n Enter length and breadth of the rectangle: ";
            std::cin>>length>>breadth;   
        }

        double area() override {
            return length*breadth;
        }

        double perimeter() override {
            return 2*(length + breadth);
        }

        void display() override{
            std::cout<<"\n Rectangle:";
            std::cout<<"\n Length: "<<length<<", Breadth: "<<breadth;
            std::cout<<"\n Area : "<<area();
            std::cout<<"\n Perimeter: "<<perimeter();
        }
};

class triangle : public figure{
    private:
        double side1, side2, side3;
    public:
        void get() override {
            std::cout<<"Enter three sides of the triangle: ";
            std::cin>>side1>>side2>>side3;
        }

        double area() override {
            double s= perimeter()/2;
            return sqrt(s*(s-side1)*(s-side2)*(s-side3));
        }

        double perimeter() override {
            return side1 + side2 + side3;
        }

        void display() override{
            std::cout<<"\n Triangle:";
            std::cout<<"\n Three sides of the Triangle : "<<side1<<"\t"<<side2<<"\t"<<side3;
            std::cout<<"\n Area: "<<area();
            std::cout<<"\n Perimeter: "<<perimeter();
        }
};


int main()
{
    figure* shapes[3];

    shapes[0] = new circle();
    std::cout<<"\n Enter details of circle:";
    shapes[0]->get();

    shapes[1] = new rectangle();
    std::cout<<"\n Enter details of rectangle:";
    shapes[1]->get();

    shapes[2]= new triangle();
    std::cout<<"\n Enter details of the triangle:";
    shapes[2]->get();

    std::cout<<"\n Details of shapes:";
    for(int i=0;i<3;i++){
        shapes[i]->display();
        std::cout<<"\n";
        delete shapes[i];
    }

    return 0;
}