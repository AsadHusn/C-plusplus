#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
  ifstream in("text.txt");
  ofstream out("new.txt");
  
  if(!(in.is_open() && out.is_open()))
  {
  	cout<<"File error";
  	return 0;
  }

  // get size of file
  in.seekg (0, in.end);
  int size = in.tellg();

  // set pointer to start
  in.seekg (0);
  
  // allocate memory for file content
  char* buffer = new char[size];

  // read content of infile
  in.read(buffer, size);

  // write to outfile
  out.write(buffer, size);

  // release dynamically-allocated memory
  delete[] buffer;

  out.close();
  in.close();
  
  cout<<"Copied";
}
