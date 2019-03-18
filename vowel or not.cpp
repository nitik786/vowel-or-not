#include<stdio.h>
int main(){
	char A;
	printf("Enter the alphabet\n");
	scanf("%c",&A);
	switch(A){
		case 'a':
			printf("vowel %c",A);
			break;
		case 'e':
			printf("vowel %c",A);
			break;
		case 'i':
			printf("print vowel %c",A);
			break;
		case 'o':
			printf("print vowel %c",A);
			break;
		case 'u':
			printf("print vowel %c",A);
			break;
	default:
			printf("not vowel %c");
			break;
		}
return 0;					
	}

