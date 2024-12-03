#include<iostream>

class counter{

    private:
     static int count;
    
    public:
        counter(){
            count++;
        }
    static int getcount(){
        return count;
    }
};

int counter::count=0;

int main()
{
    std::cout<<"\n Initial count:"<<counter::getcount();

    counter obj1;
    counter obj2;
    counter obj3;

    std::cout<<"\n count after creating three objects:"<<counter::getcount();
    return 0;
}