/*
2. Input n strings from keyboard and sort them ascendingly.
Ex:
 _________________________________________
| Input: n = 3, strings: "one two three"  |
| Output: "one three two"                 |
|_________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>

int ex2(int n, char *str[]){
	 int i,j,count;
   char str[100][100],tempo[100];
   puts("the number of string: ");
   scanf("%d",&count);

   puts("Enter Strings  ");
   for(i=0;i<=count;i++)
      gets(str[i]);
   for(i=0;i<=count;i++)
      for(j=i+1;j<=count;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(tempo,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],tempo);
         }
      }
   printf("after sort");
   for(i=0;i<=count;i++)
      puts(str[i]);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int n = atoi(argv[1]);
	char *str[n];
	int i;
	for(i=0; i<n; i++){
		str[i] = argv[i+2];
	}

	ex2(n, str);
		
	return 0;
}
