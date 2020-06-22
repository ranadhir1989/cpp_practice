// pass by address for the swap function 

#include <iostream>
using namespace std; 

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a =10 , b =23;
    swap(&a, &b); 
    cout << " The value of a " << a << endl; 
    cout << " The value of b " << b << endl;
}



/* pass by value is not possible for the swap function 

#include <iostream>
using namespace std;
void swap (int x, int y)
{
    int temp; 
    temp = x; 
    x = y; 
    y = temp; 
     // return(x,y);
}

int main()
{
    int a, b; 
    a = 10; 
    b = 23; 
    swap(a,b);
    cout << "The value of a " << a << endl;
    cout << "The value of b " << b << endl;
     
} */ 