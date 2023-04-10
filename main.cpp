// OPERATORS
#include <iostream>

using namespace std;

int main()
{
    // Assigment ( = )
    short x,y,z;
    x = 10;
    y = z = 15;
    //Arithmetic Operators (+ - * / %)
    z = x + y;
    y = z - x;
    y = x * 3 ;
    x = 125 / y;
    z = x % y;
    // Compound Assignment Operators (+= -= *= /= %=)
   x += 1; // x = x + 1;
   z /= y; // z = z / y;
   z *= x + y; // z = z * y;
   // Increment and Decrement Operators ( ++ -- )
    x++; // x = x + 1;
    y--; // z = z / y
    --z; // z = z - 1;
    // Relational Operators ( == != > < >= <= )
    z = x == y;
    x = z != 4;
    y = 3 <= 5;
    ( x > z );
    // Logical Operators ( && || ! )
    z =  !x;
    y = x && z;
    // Comma Operator ( , )
    x = ( z=2 , z+=5);
    // Bitwise Operators ( & | ^ ~ << >> )
    z = 2 & 6;
    z = ~x;
    y = x << 2;
   // Exlicit Type Casting Conversion ( (type) )
    int i ;
    float f;
    i = (int) f;
    f = (float) i;
    // (sizeof ()
    x = sizeof (i);
    // Pointer Operators ( * & [ ] )
    //  * Pointer
    //  & Address of
    //  index operator [ ]
    // scope resolution operator ( :: )
    // access operator ( -> )
    // Member Access Operator ( . )
    //(new delete)
    // priority of function op. ( () )
   cout << "Hello, World!" << endl;
    return 0;
}
