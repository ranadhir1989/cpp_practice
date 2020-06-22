#include <iostream>
// #include <string>
using namespace std;

int main()
{
    int x;
    cout << " Enter the case number "; 
    cin >> x ; 
    switch(x)
        {
            case 1:
                cout << " this is case 1" << endl ; 
                break;
            case 2: 
                cout << " this is case 2" << endl;
                break;
            case 3: 
                cout << "this is case 3" << endl; 
                break;
            default: 
                cout << " this is default statement " << endl;
                break;  
        }
    return 0; 
}                     


