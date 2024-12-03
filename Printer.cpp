#include<iostream>
#include<cstring>

class printer{
    public:
        virtual void display()=0;
};

class laserprinter : public printer{
    private:
        std::string speed;
        std::string resolution;
    public:
        laserprinter(std::string spd, std::string res){
            speed=spd;
            resolution=res;
        }

        void display() override {
            std::cout<<"\n Laser Printer Features:";
            std::cout<<"speed:"<<speed<<" pages per minute"<<"\n";
            std::cout<<"\n resolution: "<<resolution<<"dpi";
        }
};

class lineprinter : public printer{
    private:
        std::string linesperminute;
        std::string durability;
    public:
        lineprinter(std::string lpm, std::string dur){
            linesperminute=lpm;
            durability=dur;
        }

        void display() override {
            std::cout<<"\n Line printer features:";
            std::cout<<"\n Lines per minute:"<<linesperminute;
            std::cout<<"\n Durability: "<<durability;
        }
};

class inkjetprinter : public printer{
    private:
        std::string colorsupport;
        std::string papersupport;
    public:
        inkjetprinter(std::string color, std::string paper){
            colorsupport=color;
            papersupport=paper;
        }

        void display() override {
            std::cout<<"\n Inkjet Printer features:";
            std::cout<<"\n Color Support: "<<colorsupport;
            std::cout<<"\n Paper Support: "<<papersupport;
        }
};

int main()
{
    laserprinter laser("20","1200 X 1200");
    lineprinter line("1000", "high");
    inkjetprinter inkjet("full color","A4,A3");

    printer*printers[3];
    printers[0]=&laser;
    printers[1]=&line;
    printers[2]=&inkjet;

    for(int i=0;i<3;i++){
        printers[i]->display();
        std::cout<<"\n";
    }
    return 0;
}