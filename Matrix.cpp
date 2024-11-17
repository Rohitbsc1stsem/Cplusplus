#include<iostream>
using namespace std;
class matrix{
    private:
    int rows,cols,**data;
    public:
    matrix(int r, int c){
        rows=r;
        cols=c;
        data=new int*[rows];
        for(int i=0;i<rows;i++){
            data[i]=new int[cols];
        }
    }
    ~matrix(){
        for(int i=0;i<rows;i++)
        {
            delete[]data[i];
        }
        delete[]data;
    }
    void input(){
        cout<<"Enter elements of the  "<<rows<<"x"<<cols<<"matrix:\n";
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cin>>data[i][j];
            }
        }
    }
    void display(){
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cout<<data[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    friend matrix add(matrix &m1, matrix &m2);
    friend matrix mul(matrix &m1, matrix &m2);
};
matrix add(matrix &m1, matrix &m2){
    if(m1.rows!=m2.rows||m1.cols!=m2.cols)
    {
        cout<<"Error: Matrix dimension donot match for addition\n";
        exit(1);
    }
    matrix result(m1.rows,m1.cols);
    for(int i=0;i<m1.rows;i++){
        for(int j=0;j<m1.cols;j++){
            result.data[i][j]=m1.data[i][j]+m2.data[i][j];
        }
    }
    return result;
}
matrix mul(matrix &m1, matrix &m2){
    if(m1.cols!=m2.rows){
        cout<<"Error! matrices dimensions do not match for multiplication:\n";
        exit(1);
    }
    matrix result(m1.rows,m2.cols);
    for(int i=0;i<m1.rows;i++)
    {
        for(int j=0;j<m2.cols;j++){
            result.data[i][j]=0;
            for(int k=0;k<m1.cols;k++){
                result.data[i][j]+=m1.data[i][k]*m2.data[k][j];
            }
        }
    } 
    return result;
}

int main()
{
    int rows,cols;
    cout<<"Enter rows and columns for matrix A:";
    cin>>rows>>cols;
    matrix A(rows,cols);
    A.input();
    cout<<"Enter rows and columns for matrix B:";
    cin>>rows>>cols;
    matrix B(rows,cols);
    B.input();
    cout<<" Matrix A + Matrix B :\n";
    matrix sum=add(A,B);
    sum.display();
    cout<<"Matrix A * Matrix B:\n";
    matrix product=mul(A,B);
    product.display();
    return 0;
}