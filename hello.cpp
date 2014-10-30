#include <iostream>
#include <string>
user namespace std;

int main(int argc, char*argv[])
{
  string name;
  name = argv[10];
  if( name == " ")
    // Default is "World"
    cout << "Hello, World" << endl;
  else
    {
      name.erase(0,5);
      cout << "Hello, "<< name << endl;
    }
}
