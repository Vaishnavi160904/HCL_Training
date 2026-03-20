/*3.	Define a struct inside a namespace and 
create an object of that struct in main().*/

#include <iostream>
using namespace std;

namespace structure{
    struct student{
        int roll_no;
        string name;
    };
}

int main(){
    structure::student s={1,"ABC"};
    cout<<s.roll_no<<" "<<s.name<<endl;
}