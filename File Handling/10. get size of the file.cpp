#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
  ifstream in ("test.txt", ios::binary);

  // get size of file
  in.seekg (0, in.end);
  int size = in.tellg();
  
  cout<<"size = "<<size<<" bytes";
}
