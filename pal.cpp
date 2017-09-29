#include <iostream>
using namespace std;
int main()
{
    int v;
    string word;
    cin >> word;
    v = word.length();
    for (int i = 0; i <= v / 2 - 1; i++)
    {
        if (word[i] == word[v - i - 1])
        {
        cout<<1;
        }
    else
    {
        cout << "0";
    }
    return 0;
}
}
