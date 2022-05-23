#include <string>
#include <iostream>
using namespace std;

int main()
{
    string s = "Hello, world!";
    cout << "Original: " << s << endl;
    cout << "Length: " << s.length() << endl; 
    s = s.erase(5, 7);
    cout << "Modified: " << s << endl; 
    s = s.insert(5, ", Andrew");
    cout << "Modified: " << s << endl; 
    s.clear();
    cout << "Cleared: " << s << endl; 
    s += "Hello, world!";
    cout << "Returned: " << s << endl; 
    string s1 = " ";
    cout << "Enter the text without probels: " << endl;
    cin >> s1;
    for (int i = 1; i < s1.length(); i++)
        if ((s1[i] == '.') or (s1[i] == '!') or (s1[i] == ',') or (s1[i] == '?') or (s1[i] == '"') or (s1[i] == ':') or (s1[i] == ';'))
            s1.erase(i, 1);
    cout << "Text without punctuation: " << s1;
}