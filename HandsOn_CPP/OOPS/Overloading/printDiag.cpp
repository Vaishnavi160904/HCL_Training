/*2. Overload printDiag to accept int, double, 
std::string, and std::vector<int>. 
Ensure the vector overload is
 chosen over the generic template (if added) 
 by using more specific signatures.*/

 #include <iostream>
 #include <vector>
 using namespace std;

 void printDiag(int a){
    cout<<"Integer: "<<a<<endl;
 }

 void printDiag(double a){
    cout<<"Double: "<<a<<endl;
 }
 void printDiag(string s){
    cout<<"String: "<<s<<endl;
 }
 void printDiag(vector<int> v){
    cout<<"Vector data: ";
    for (auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
 }

 template <typename T>
    void printDiag(T value){
        cout<<"Generic: "<<value<<endl;
    }
 
 int main(){
    printDiag(5);
    printDiag("hello");
    printDiag(3.24);

    vector<int> x={1,2,3,4,5};
    printDiag(x);
 }