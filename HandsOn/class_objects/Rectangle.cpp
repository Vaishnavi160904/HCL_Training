/*2.	In a Rectangle class, ensure width and height 
are always positive via private members + public setters.
 Use this in setters to throw or clamp values; 
 demonstrate attempts to violate constraints from main().*/

 #include <iostream>
 using namespace std;

 class Rectangle{
    private:
        int height;
        int width;

    public:
        void setheight(int h){
            if (h<=0){
                throw invalid_argument("height must be positive");
            }
            this->height=h;
        }
        void setwidth(int w){
            if (w<=0){
                throw invalid_argument("width must be positive");
            }
            this->width=w;
        }

        void getvalue(){
            cout<<"height: "<<this->height<<" width: "<<this->width<<endl;
        }
   
 };
 
 int main(){
    Rectangle r1;
    try{
        r1.setheight(4);
        r1.setwidth(7);
        r1.getvalue();

        r1.setheight(-2);
        r1.setwidth(-4);
        r1.getvalue();
    }catch (const  exception &e){
        cout<<"Error: "<<e.what()<<endl;
    }
 }

