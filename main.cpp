//do not include any other libraries or use strings
//do not use the double/float types, only ints and c-strings
#include <iostream>
#include "conversion.h"
#include "math.h"

using namespace std;

int main()
{ 
    char answer[10];
    int c1, n1, d1;
    int c2, n2, d2;
    
    c1 = 1;
    n1 = 1;
    d1 = 2;
    
    c2 = 2;
    n2 = 2;
    d2 = 3; 
    
    //if the C string could hold at least the characteristic
    if(add(c1, n1, d1, c2, n2, d2, answer, 10))
    {
        //display string with answer 4.1666666
        cout << "worked" << endl;
    }
    else
    {
        cout << "error" << endl;
        //display error message
    }
    return 0;
}
