#include <iostream>
#include <vector>
using namespace std; 

void Printstrings(string a, string b) 
{
    cout << a << "\n";
    cout << b << "\n";
}

int main()
{
 string s1, s2; 
 cin >> s1; 
 cin >> s2;

 //    string s1 = "C++ is ";
 //    string s2 = "Super Awesome"; 
    Printstrings(s1, s2);
}