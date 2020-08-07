/*
4. Input a string and remove all blank spaces at begin and
end of the string and leave only one blank space between words.
Ex:
 ________________________________________________
| Input: "  this  is an   unformatted  string "  |
| Output: "this is an unformatted string"        |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>

int ex4(char *testcase){
	string b;
	cout << "Input yor string: ";getline(cin, b);
	while (b[0] == ' ')
	{
		b.erase(b.begin() + 0);
	}
	while (b[b.length() - 1] == ' ')
	{
		b.erase(b.end()-1);
	cout <<"Output: |"<< b <<"|"<< endl;
	system("pause");
}
	
int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = "  this  is an   unformatted  string ";

	ex4(testcase);
		
	return 0;
}
