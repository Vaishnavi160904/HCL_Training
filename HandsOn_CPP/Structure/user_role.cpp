/*5.	Combine an enum with bit fields to represent user roles and permissions.*/

#include <iostream>
using namespace std;

enum ROLE{
    Admin,
    Viewer,
    Writer
};

struct permissions{
    unsigned int read:1;
    unsigned int write:1;
    unsigned int execute:1;
};
struct User{
    ROLE role;
    permissions per;
};
int main(){
    User u;
    u.role=Admin;
    u.per.execute=1;
    u.per.read=1;
    u.per.write=1;

    cout<<"User Role: "<<u.role<<endl;
    cout<<"Read: "<<u.per.read<<endl;
    cout<<"Write: "<<u.per.write<<endl;
    cout<<"Execute: "<<u.per.execute<<endl;
}