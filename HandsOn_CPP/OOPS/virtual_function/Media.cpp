/*2.	Create class Media with virtual play(). 
Derive Audio and Video overriding play().
Store heterogeneous objects in 
std::vector<std::unique_ptr<Media>> and 
invoke play() at runtime. 
Add virtual destructor and demonstrate.
*/
#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class Media{
    public:
        virtual void play(){
            cout<<"Media"<<endl;
        }
        virtual ~Media(){
            cout << "Media destructor" << endl;
        }
};
class Audio:public Media{
    public:
        virtual void play(){
            cout<<"Audio playing"<<endl;
        }
        virtual ~Audio(){
            cout << "Audio destructor" << endl;
        }
};
class Video:public Media{
    public:
        virtual void play(){
            cout<<"Video playing"<<endl;
        }
        virtual ~Video(){
            cout << "Video destructor" << endl;
        }
};

int main(){
    vector<unique_ptr<Media>> plays;

    plays.push_back(make_unique<Audio>());
    plays.push_back(make_unique<Video>());

    for (auto &m:plays){
        m->play();
    }

}