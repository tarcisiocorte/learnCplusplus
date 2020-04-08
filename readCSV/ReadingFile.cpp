#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    ifstream theFileToRead("theFile.csv");
    if(!theFileToRead.is_open()){
        cout << "File failed to open..." << endl;
        return 0;
    }

    string columnName,columnGender, strAge;
    int columnAge;

    string line;

    while (getline(theFileToRead,line))
    {
        /* code */
        stringstream ss(line);
        getline(ss, columnName, ';');
        
        // get Age as Int and convert to Str
        getline(ss, strAge, ';');
        columnAge = stoi(strAge);
        
        getline(ss, columnGender, ';');

        cout<< columnName << " - " <<columnAge<<" - "<< columnGender<<endl;
    }

    theFileToRead.close();
    




}