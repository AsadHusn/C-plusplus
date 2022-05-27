#include<iostream>
using namespace std;
int main()
{	
	char *str = new char;
	
	cout<<"\ngets: ";
//	gets()
	gets(str);
//	puts()
	puts(str);

	cout<<"\nfgets: ";
//	fgets(string, size, stdin)
	fgets(str, 20, stdin);
//	fputs(string, stdout)
	fputs(str, stdout);
	
	cout<<"\ncin.getline: ";
//	cin.getline()
	cin.getline(str, 20);
	puts(str);
	
//	length of a string
	int i;
	for(i=0; str[i]!= '\0'; i++);
	cout<<"\nlength = "<<i<<endl;
	
//	memory leak
	delete(str);
}
