// Important 
// To make a calculater in C programming 

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int n, m;
	char o;
	if(argc!=4){
		printf("Please pass the argument");
		exit(1);
	}
	o=*argv[1];
	n=atoi(argv[2]);
	m=atoi(argv[3]);
	switch(o)
	{
		case '+':
			printf("%d", n+m);
			break;
		case '-':
			printf("%d", n-m);
			break;
		case '/':
			printf("%d", n/m);
			break;
		case '*':
			printf("%d", m*n);
			break;
		case '<':
			if(n<m)
				printf("True");
			else
				printf("False");
			break;
		case '>':
			if(n>m)
				printf("True");
			else
				printf("False");
			break;
		default:
			printf("No Option Choosen");
			break;
	}
	return 0;
}