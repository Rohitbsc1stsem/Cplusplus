#include<iostream>
#include<string>

class string{
    private:
    int size;
    char *p;
    public:
    string(): p(nullptr),size(0){}
    string( char* str){
        size=0;
        while(str[size]!='\0'){
            size++;
        }
        p=new char[size+1];
        for(int i=0;i<size;i++){
            p[i]=str[i];
        }
        p[size]='\0';
    }
    string( string &s){
        size=s.size;
        p=new char[size+1];
        for(int i=0;i<size;i++){
            p[i]=s.p[i];
        }
        p[size]='\0';
    }
    ~string(){
        delete[] p;
    }
    int length() {
        return size;
    }
    bool compare(string &s)  {
        if(size!=s.size){
            return false;
        }
        for(int i=0;i<size;i++){
            if(p[i]!=s.p[i]){
                return false;
            }
        }
        return true;
    }
    void copy( string &s){
        delete[] p;
        size=s.size;
        p=new char[size+1];
        for(int i=0;i<size;i++){
            p[i]=s.p[i];
        }
        p[size]='\0';
    }
    void reverse(){
        for(int i=0;i<size/2;i++){
            char temp=p[i];
            p[i]=p[size-i-1];
            p[size-i-1]=temp;
        }
    }
    void display() {
        if(p!=nullptr){
           std::cout<<p<<"\n";
        }
        else {
            std::cout<<"\n (Empty string)";
        }
    }
};
int main()
{
    string s1("Hello World!");
    std::cout<<"\n s1:";
    s1.display();
    std::cout<<"\n Length of s1:"<<s1.length();
    string s2("C++ Programming");
    std::cout<<"\n s2:";
    s2.display();
    std::cout<<"\n Length of s2:"<<s2.length();
    std::cout<<"\n Are s1 and s2 equal?   :"<<(s1.compare(s2)?"Yes":"No");
    std::cout<<"\n Copying s1 to s2...";
    s2.copy(s1);
    std::cout<<"\n s2 after copy:";
    s2.display();
    std::cout<<"\n Reverse s1...";
    s1.reverse();
    std::cout<<"\n s1 after reverse:";
    s1.display();
    return 0;
}