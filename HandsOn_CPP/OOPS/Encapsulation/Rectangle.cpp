/*3.	Build class Rectangle with private width/height.
 Provide setters that enforce > 0 and 
 throw on invalid input. 
 Show attempted invariant violation from main() 
 and how encapsulation prevents it.*/

 #include <iostream>
 using namespace std;
 class Rectangle{
    private:
        double height;
        double width;
    
    public:
        void setheight(double h){
            if(h<0){
                throw invalid_argument("Invalid height.height must be >0");
            }
            height=h;
        }
        void setwidth(double w)
        {
            if ( w< 0)
            {
                throw invalid_argument("Invalid width.width must be >0");
            }
            height = w;
        }
        void getheight(){
            cout<<"Height: "<<height<<endl;
        }
        void getwidth()
        {
            cout << "Height: " << width << endl;
        }
 };
 int main(){
    Rectangle r;
    try{
        r.setheight(-8);
        r.setwidth(8);

        r.getheight();
        r.getwidth();
    }catch(const invalid_argument &e){
        cout<<e.what()<<endl;
    }
 }
