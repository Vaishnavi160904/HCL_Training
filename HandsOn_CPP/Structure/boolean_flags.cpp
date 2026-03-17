/*6.	Create a structure to store multiple boolean flags
 (e.g., isAdmin, isActive, isVerified) using bit fields.*/
 #include<iostream>
 using namespace std;
 struct flags{
    unsigned int isAdmin:1;
    unsigned int isActive:1;
    unsigned int isVerified:1;
 };

 int main(){
    flags f;
    
    f.isAdmin=1;
    f.isActive=1;
    f.isVerified=0;

    cout<<"Admin: "<<f.isAdmin<<endl;
    cout<<"Active: "<<f.isActive<<endl;
    cout<<"Verified: "<<f.isVerified<<endl;
 }