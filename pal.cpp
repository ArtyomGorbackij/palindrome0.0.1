#include <algorithm>
#include <string>
#include <iostream>
using namespace std;
 int main() 
{   int v;
    string str;
    string tmp;
    getline(cin, str);
    reverse(str.begin(), str.end());
    if (str == tmp)
        cout << 1;
    else
        cout << 0;
    return 0;
}
