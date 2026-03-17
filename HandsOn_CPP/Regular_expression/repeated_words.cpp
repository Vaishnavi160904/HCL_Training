/*7. Detect repeated words in a sentence(e.g., "the the").*/

#include <iostream>
#include <regex>
using namespace std;

int main()
{
    string txt = "the the dfjh is was was ex ex ex river river";
    regex pattern("\\b(\\w+)\\s+\\1\\b");
    auto start = sregex_iterator(txt.begin(), txt.end(), pattern);
    auto end = sregex_iterator();

    for (auto i = start; i != end; ++i)
    {
        cout << "Repeated word: " << (*i)[1] << endl;
    }
    return 0;

}