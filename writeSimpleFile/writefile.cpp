#include <iostream>
#include <fstream>

using namespace std;

int main()
{
     ofstream fileToWrite;
     fileToWrite.open("test.csv");

     for (int i = 0; i < 50000; i++)
     {
          fileToWrite << i << ";" << i * i << endl;
     }
}
