#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
* main - Betty style 
* Discription: The variable n will store a different value every time you will run this program
* Return: 0 (Success)
*/
int main(void){
	int n;
	srand(time(0)); 
	n = rand()-RAND_MAX/2;
	if(n>0){
	    printf("%d ", n);		
	    printf(" is Postive \n");
	}else if(n<0){
	     printf("%d" ,n );
	     printf(" is negative \n");
	}else{
	     printf("%d",n);
	     printf(" is zero \n");
	}	
	 return (0);
}
