/*Stack using Array*/

#include <iostream>
using namespace std;

class stack{
    int cap;
    int* arr;
    int top;

    public:
        stack(int c){
            cap=c;
            arr=new int[cap];
            top=-1;
        }
        void push(int value){
            if(arr[top]==cap-1){
                cout<<"Stack Overflow\n";
                return;
            }
            arr[++top]=value;
        }
        int pop(){
            if(top==-1){
                cout<<"Stack Underflow\n";
                return -1;
            }
            return arr[top--];
        }

        int peek(){
            if(top==-1){
                cout<<"Stack is Empty\n";
                return -1;
            }
            return arr[top];
        }
        bool isempty(){
            return top==-1;
        }
        bool isfull(){
            return top==cap-1;
        }
};

int main(){
    stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout<<"Is empty: "<<(s.isempty() ? "Yes" : "No")<<endl;
    cout<<"Is full: "<<(s.isfull() ? "yes" : "No")<<endl;
    cout<<"Pop: "<<s.pop()<<endl;
    cout<<"Peek: "<<s.peek()<<endl;

    return 0;
}