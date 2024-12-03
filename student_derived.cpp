#include<iostream>
#include<cstring>

class student{
    protected:
        int roll_no;
        char sname[20];

    public:
        void readdata(){
            std::cout<<"\n Enter the roll no of student:";
            std::cin>>roll_no;
            std::cout<<"\n Enter name of the student:";
            std::cin>>sname;
        }

        void dispdata(){
            std::cout<<"\n roll no of the student:"<<roll_no;
            std::cout<<"\n name of the student:"<<sname;
        }
};

class artst: public student{
    private:
    int ph,hs,en,as;
    public:
        void takedata(){
            std::cout<<"\n Enter marks of Philosophy:";
            std::cin>>ph;
            std::cout<<"\n Enter marks of history:";
            std::cin>>hs;
            std::cout<<"\n Enter marks of English:";
            std::cin>>en;
            std::cout<<"\n enter marks of assamese:";
            std::cin>>as;
        }

        int ctotal(){
            return ph+hs+en+as;
        }

        void showdata(){
            std::cout<<"\n marks of philosophy:"<<ph;
            std::cout<<"\n marks of history:"<<hs;
            std::cout<<"\n marks of english:"<<en;
            std::cout<<"\n marks of assamese:"<<as;
            std::cout<<"\n Total marks :"<<ctotal();
        }
};

class scst: public student{
    private:
        int sph,ch,ma,en;
    public:
        void takedata(){
            std::cout<<"\n Enter marks of physics: ";
            std::cin>>sph;
            std::cout<<"\n Enter marks of chemistry:";
            std::cin>>ch;
            std::cout<<"\n Enter marks of mathematics:";
            std::cin>>ma;
            std::cout<<"\n Enter marks of english:";
            std::cin>>en;
        }

        int ctotal(){
            return sph+ch+ma+en;
        }

        void showdata(){
            std::cout<<"\n Marks of physics:"<<sph;
            std::cout<<"\n marks of chemistry:"<<ch;
            std::cout<<"\n marks of mathematics:"<<ma;
            std::cout<<"\n marks of english:"<<en;
            std::cout<<"\n Total marks:"<<ctotal();
        }
};

int main()
{
    artst arts_student;
    scst science_student;

    std::cout<<"\n Enter details for an arts student:";
    arts_student.readdata();
    arts_student.takedata();
    
    std::cout<<"\n Enter details for arts student:";
    arts_student.dispdata();
    arts_student.showdata();

    std::cout<<"\n Enter details for a science student:";
    science_student.readdata();
    science_student.takedata();

    std::cout<<"\n Enter details for science student:";
    science_student.dispdata();
    science_student.showdata();

    return 0;
}