/*Given tokens of an RPN expression 
(e.g., ["2","1","+","3","*"]),
 use a list as a stack to compute the result.*/

 #include <iostream>
 #include <stack>
 using namespace std;

 int expression(string exp[],int n){
    stack<int> st;

    for (int i=0;i<n;i++){
        string ch=exp[i];
        if (ch=="+" || ch=="-" || ch=="*" || ch=="/"){
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();

            if (ch=="+") st.push(a+b);
            else if (ch=="-") st.push(a-b);
            else if(ch=="*") st.push(a*b);
            else st.push(a/b);
        }else{
            st.push(stoi(ch));
        }
    }
    return st.top();
 }

 int main(){
     string exp[] = { "2", "1", "+", "3", "*" };
     int n=sizeof(exp)/sizeof(exp[0]);

     int res=expression(exp,n);
     cout<<"result: "<<res<<endl;
 }