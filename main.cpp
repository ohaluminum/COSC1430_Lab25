#include <iostream>
#include <string>
#include "Character.h"

using namespace std;

/*
 *Create a function Template called swapTemplate so that it takes two parameters of the same type. 
 *Function swapTemplate will exchange the values of these two parameters.
 */
template<typename T>
void swapTemplate(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

/*
 *Create another function template called largest that takes three parameters of the same type
 *And returns the largest value amongst the three.
 */
template<typename T>
T largest(T& a, T& b, T& c)
{
    T largest = a;

    if (b > largest)
    {
        largest = b;
    }
    if (c > largest)
    {
        largest = c;
    }

    return largest;
}


int main() {
    char char1 = 'a';
    char char2 = 'b';
    int var1 = 10;
    int var2 = 20;

    cout << "Before swapping:" << endl;
    cout << "char1= " << char1 << ", char2= " << char2 << endl;
    cout << "var1= " << var1 << ", var2= " << var2 << endl << endl;

    swapTemplate(char1, char2);
    swapTemplate(var1, var2);

    cout << "After swapping:" << endl;
    cout << "char1= " << char1 << ", char2= " << char2 << endl;
    cout << "var1= " << var1 << ", var2= " << var2 << endl << endl;

    string s1 = "Mango";
    string s2 = "Banana";
    string s3 = "Apple";

    cout << largest(s1, s2, s3) << endl;

    int i1 = 79;
    int i2 = -4;
    int i3 = 0;

    cout << largest(i1, i2, i3) << endl;

    Character princess("Wizard", 5);
    Character villager("Wizard");
    Character merchant("Air Bender", 10);
    Character merchant2("Human", 3);

    Character cha = largest(princess, villager, merchant);
    cout << cha;

    return 0;
}

