/*6.	Create a program Media Player with 
base class Media with virtual play(). 
Derived classes Audio and Video override play().*/

#include <iostream>
using namespace std;

class Media{
    public:
        virtual void play(){
            cout<<"Class media"<<endl;
        }
};
class Audio :public Media{
    public:
        void play(){
            cout<<"Class Audio"<<endl;
        }
};
class Video : public Media{
    public:
        void play(){
            cout<<"Class Video"<<endl;
        }
};

int main(){
    Audio a;
    Video v;

    a.play();
    v.play();
}