#include <iostream>
#include <string>
using namespace std;

int main()
{
     string food = "Pizza";
     string &meal = food;

     cout << food << "\n";
     cout << meal << "\n";

     food = "arroz";

     cout << food << "\n";
     cout << meal << "\n";

     meal = "feijão";

     cout << food << "\n";
     cout << meal << "\n";

     return 0;
}
