/*Implement a simple text editor’s
 Undo/Redo using stacks.*/

 #include <iostream>
 #include <stack>
 using namespace std;
 class TextEditor{
    private:
        stack<string> undostack;
        stack<string> redostack;
        string c_text;
    
    public:
        TextEditor(){
            c_text="";
        }
        void write(string s){
            undostack.push(c_text);
            c_text+=s;

            while(!redostack.empty()){
                redostack.pop();
            }
        }

        void undo(){
            if(!undostack.empty()){
                redostack.push(c_text);
                c_text=undostack.top();
                undostack.pop();
            }else{
                cout<<"Can't undo"<<endl;
            }
        }
        void redo(){
            if(!redostack.empty()){
                undostack.push(c_text);
                c_text=redostack.top();
                redostack.pop();
            }else{
                cout<<"can't redo\n";
            }
        }

        void display(){
            cout<<"Current Text: "<<c_text<<endl;
        }

 };
 int main(){
    TextEditor t;
    t.write("vcjd vn");
    t.write("fgf fkf");
    t.display();
    t.undo();
    t.display();
    t.redo();
    t.display();
 }
