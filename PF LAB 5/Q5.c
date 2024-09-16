#include <stdio.h>
int main(){
	int Year;
	printf("Enter the year: ");
	scanf("%d", &Year);
	if (Year%400 == 0)
	printf("Leap Year");
	else if (Year % 4 == 0 && Year % 100 != 0)
	printf("Leap Year");
	else
	printf("Not Leap Year");
	
	return 0;
}