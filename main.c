
#include <stdio.h>



long addition(void) {

	int a, b, result; 
	
	printf("Enter your first number \n"); 

	scanf_s("%d", &a); 

	printf("You've enter number: %d \n", a);

	printf("Choose another number\n"); 

	scanf_s("%d", &b); 

	printf("You chose number: %d\n", b); 

	result = a * b; 

	printf("You've chosen numbers %d and %d, the answer is %d\n", a, b, result); 

	return 0; 
}



int main(void) { 

	printf("++++++++++++++++++++++++++++\n"); 

	printf("Hello World, my name is Carson Sailes.\nI am a professional programmer!\n"); 

	printf("+++++++++++++++++++++++++++\n"); 

	addition(); 

	return 0; 

}
