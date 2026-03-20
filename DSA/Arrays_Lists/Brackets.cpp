/*Given a string of brackets like "({[]})",
 use a list as a stack to determine if the string is balanced.*/

 #include <iostream>
 #include <stack>
 using namespace std;
 bool valid(string s){
     stack<char> sta;
     for (char c : s)
     {
         if (c == '(' || c == '[' || c == '{'){
             sta.push(c);
         }
         else{
             if (sta.empty()) return false;

             char top=sta.top();
             sta.pop();

             if((c==')' && top!='(' )|| 
                (c==']' && top!='[' )||
                (c=='}' && top!='{' )){
                    return false;
             }
         }
         return true;
     }
 }
 int main(){
     string s = "({[]})";

     if(valid(s)){
        cout<<"Valid: "<<s<<endl;
     }else{
        cout<<"Invalid"<<endl;
     }
     return 0;
 }