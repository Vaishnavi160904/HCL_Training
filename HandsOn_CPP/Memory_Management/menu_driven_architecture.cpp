/*3.	Implement a menu-driven calculator
 where operations (+, -, *, /) are
 selected using function pointers.*/

#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
int division(int a, int b){
    if(b==0){
        cout <<"Division by 0 not allowed"<<endl;
        return 0;
    }
    return a/b;
}
int main()
{
    int (*ptr)(int, int);
    int a, b;
    char c;
    while (true)
    {
        cout << "\n------Calculator------" << endl;
        cout << "For Add enter: +" << endl;
        cout << "For Subtract enter: -" << endl;
        cout << "For Multiply enter: *" << endl;
        cout << "For Division enter: /" << endl;
        cout << "for end calculation: b" << endl;

        cin >> c;
        if (c == 'b')
            return 0;

        cout << "Enter a and b" << endl;
        cin >> a >> b;

        switch (c)
        {
        case '+':
            ptr = add;
            cout << ptr(a, b);
            break;
        case '-':
            ptr = subtract;
            cout << ptr(a, b);
            break;
        case '*':
            ptr = multiply;
            cout << ptr(a, b);
            break;
        case '/':
            ptr = division;
            cout << ptr(a, b);
            break;
        default:
            cout << "Invalid operation\n";
        }
    }
}