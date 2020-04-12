#include <Windows.h>
#include <iostream>
using namespace std;
int main()
{
  BOOL bDirectory;
  bDirectory = CreateDirectory(
             L"D:\\Dev\\cplusplus\\learnCplusplus",
             NULL);
 if (FALSE == bDirectory)
 {
   cout << "Create Directory Failed " << endl;
   cout << "Error No – " << GetLastError() << endl;
 }
 cout << "Create Directory Success"<<endl;

 bDirectory = RemoveDirectory(L"D:\\Dev\\cplusplus\\learnCplusplus");
 if (FALSE == bDirectory)
 {
  cout << "Remove Directory Failed"<< endl;
  cout << "Error No – " << GetLastError() << endl;
 }
 cout << "Remove Directory Success" << endl;

 system("PAUSE");
 return 0;
}