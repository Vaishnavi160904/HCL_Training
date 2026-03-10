/*1.	Create a Book class: isbn, title, author. 
Provide print() and updateTitle(const std::string&). 
Demonstrate creating objects via default constructor
 and setting fields through setters
  (or public methods) only.*/

  #include <iostream>
  using namespace std;
  class Book{
    private:
        int isbn;
        string title;
        string name;
    public:
        Book(){};
        void set_details(int bn,string t,string n){
            isbn=bn;
            title=t;
            name=n;
        }
        void updateTitle(const std::string& title){
            this->title=title;
        }

        void print(){
            cout<<"isbn: "<<this->isbn<<endl;
            cout<<"title: "<<this->title<<endl;
            cout<<"Author: "<<this->name<<endl;
        }
  };

  int main(){
    Book b;
    b.set_details(123,"C++","abc");
    b.print();
    b.updateTitle("C++ programming");
    b.print();
  }