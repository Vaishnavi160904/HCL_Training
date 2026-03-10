/*3.	Implement Matrix with rows/cols and initialize 
elements via std::initializer_list. Show 
different construction styles 
and confirm destructor frees memory correctly.*/
#include <iostream>
#include <initializer_list>
using namespace std;
class Matrix{
    private:
        int row;
        int col;
        int **data;

    public:
        Matrix (int r,int c){
            row=r;
            col=c;

            data=new int*[row];
            for(int i=0;i<row;i++){
                data[i]=new int[col]{0};
            }
        }

        Matrix(initializer_list<initializer_list<int>> list){
            row=list.size();
            col=list.begin()->size();

            data=new int*[row];
            int i=0;
            for(auto r:list){
                data[i]=new int[col];
                int j=0;
                for(auto val:r){
                    data[i][j]=val;
                    j++;
                }
                i++;
            }
        }

        void print_matrix(){
            for (int i=0;i<row;i++){
                for (int j=0;j<col;j++){
                    cout<<data[i][j]<<" ";
                }
                cout<<endl;
            }
        }

        ~Matrix(){
            for(int i=0;i<row;i++){
                delete[] data[i];
            }
            delete[] data;
            cout<< "Matrix destroyed"<<endl;
        }    
};


int main(){
    Matrix m1(3,4);
    m1.print_matrix();

    Matrix m2={{1,2,3},{3,4,6}};
    m2.print_matrix();
    
    
    
}