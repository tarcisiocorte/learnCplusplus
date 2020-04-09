#include <iostream>
#include "Car.h"

using namespace std;

int main()
{
     Car myObj;                                            // Create an object of Car
     cout << myObj.speed(200) << " metros / hora" << endl; // Call the method with an argument
     return 0;
}