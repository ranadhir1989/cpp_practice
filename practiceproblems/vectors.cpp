#include <iostream>
// #include <string>
#include <vector>
using namespace std; 
using std::vector;
using std::cout; 

int main()
{
  /*  // Three ways of initializing and declaring the vectors
    vector<int> v_1 {0,1,2}; 
    std::cout << v_1 << "\n";
    vector<int> v_2 = {3, 4, 5};
    vector<int> v_3;
    v_3 = {6};
    cout << "Everything worked " << "\n"; */ 

    vector<int> a = {0, 1, 2, 3,4}; 
        vector<int> v_1 {0,1,2}; 
cout << v_1[0] << "\n";
// you cant access all the elements of a vector with one statemnt lol 

// cout << v_1 << "\n"; 
    cout << a[2] << "\n";
}