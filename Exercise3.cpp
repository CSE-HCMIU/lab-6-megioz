/*
3. Input a string and find the smallest and largest word.
Ex:
 __________________________________________________________
| Input: "this is a string with smallest and largest word" |
| Output: "a" "smallest"                                   |
|__________________________________________________________|
*/
#include <stdio.h>
#include <stdlib.h>

int ex3(char *str){
	string p;
	cout << "input a string ";getline(cin, p);
	char mx = p[0];
	char mn = p[0];
	for (int i = 1;i < p.length();i++)
	{
		if (p[i] != ' ')
		{
			if (p[i] > mx)
			{
				mx = p[i];
			}
			if (p[i] < mn)
			{
				mn = p[i];
			}
		}
	}
	cout << " max: " << max << "\t\t min: " << min << endl;
	system("pause");
	return 0;

	
}
int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *str = "This is a string";

	ex3(str);
		
	return 0;
}
