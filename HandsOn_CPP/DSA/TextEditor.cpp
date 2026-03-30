/*1.	Design two stacks to implement Undo/Redo.
Support operations: type(char), backspace(), undo(), redo(), print().
Edge cases: undo/redo at boundaries; multiple consecutive undo_stack/redo_stack.
*/

#include <iostream>
#include <stack>
using namespace std;

class editor
{
    stack<string> redo_stack;
    stack<string> undo_stack;
    string text;

public:
    void type(char c)
    {
        undo_stack.push(text);
        text += c;

        while (!redo_stack.empty())
            redo_stack.pop();
    }
    void undo()
    {
        if (undo_stack.empty())
        {
            cout << "Nothing to undo\n";
            return;
        }
        redo_stack.push(text);
        text = undo_stack.top();
        undo_stack.pop();
    }
    void redo()
    {
        if (redo_stack.empty())
        {
            cout << "Nothing to redo\n";
            return;
        }
        undo_stack.push(text);
        text = redo_stack.top();
        redo_stack.pop();
    }
    void backspace()
    {
        if (text.empty())
            return;
        undo_stack.push(text);
        text.pop_back();

        while (!redo_stack.empty())
            redo_stack.pop();
    }

    void display()
    {
        cout << "Text: " << text << endl;
    }
};

int main()
{
    editor s;
    s.type('d');
    s.type('s');
    s.type('a');
    s.display();
    s.backspace();
    s.display();
    s.undo();
    s.redo();
    s.display();
}
