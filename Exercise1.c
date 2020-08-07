/*
1. Input a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: "one thousand two hundred thirty four" |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>

int ex1(int testcase){
	int n, t, p;
	n = testcase;
	t = 1000;
	while (t){
		p= n/t;
		n %= t;
		if (t > 10 || t == 1 ||  p >= 20 &&p < 10){
			switch (p){
				case 1:{
					printf("one ");
					break; 
				}
				case 2:{
					printf("two ");
					break;
				}
				case 3:{
					printf("three ");
					break;
				}
				case 4:{
					printf("four ");
					break;
				}
				case 5:{
					printf("five ");
					break;
				}
				case 6:{
					printf("six ");
					break;
				}
				case 7:{
					printf("seven ");
					break;
				}
				case 8:{
					printf("eight ");
					break;
				}
				case 9:{
					printf("nine ");
					break;
				}
			}
		}
		if (t == 1000 && p % t != 0){
			printf("thousand ");
		}
		if (t == 100 && p% t != 0){
			printf("hundred and ");
		}
		if (t == 10){
			switch (p){
				case 1:{
					int k;
					k = n%t;
					switch (k){
						case 1:{
							printf("and eleven ");
							break;
						}
						case 2:{
							printf("and twelve ");
							break;
						}
						case 3:{
							printf("and thirteen ");
							break;
						}
						case 4:{
							printf("and fourteen ");
							break;
						}
						case 5:{
							printf("and fifteen ");
							break;
						}
						case 6:{
							printf("and sixteen ");
							break;
						}
						case 7:{
							printf("and seventeen ");
							break;
						}
						case 8:{
							printf("and eighteen ");
							break;
						}
						case 9:{
							printf("and nineteen ");
							break;
						}
						case 0:{
							printf("ten ");
							break;
						}
					}
					break;
				}
				
				}
				if (p== 1)
				break;
				switch (p){
				case 2:{
					printf("twenty ");
					break;
				}
				case 3:{
					printf("thirty ");
					break;
				}
				case 4:{
					printf("forty ");
					break;
				}
				case 5:{
					printf("fifty ");
					break;
				}
				case 6:{
					printf("sixty ");
					break;
				}
				case 7:{
					printf("seventy ");
					break;
				}
				case 8:{
					printf("eighty ");
					break;
				}
				case 9:{
					printf("ninty ");
					break;
				}
				
			}
		}
		t /= 10;
	}
}



int main(int argc, char *argv[]) {
	int testcase = atoi(argv[1]);
	ex1(testcase);
		
	return 0;
}
