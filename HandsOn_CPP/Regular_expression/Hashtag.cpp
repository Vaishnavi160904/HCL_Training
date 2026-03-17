/*5.From a social media post, extract all hashtags using regex.*/

#include <iostream>
#include <regex>
using namespace std;

int main(){
    string post="#hello jxkk #show #hashtag";
    regex pattern("#\\w+");
    auto begin=sregex_iterator(post.begin(),post.end(),pattern);
    auto end=sregex_iterator();
    
    for (auto i=begin;i!=end;++i){
        cout<<i->str()<<endl;
    }
}