#include <stdio.h>
int main()
{
	int Marks;
	printf("Enter Marks: ");
	scanf("%d", &Marks);
	if (Marks >= 90)
	printf("Grade A");
	else if (Marks >= 80 && Marks <90)
	printf("Grade B");
	else if (Marks >= 70 && Marks <80)
	printf("Grade C");
	else if (Marks >= 60 && Marks <70)
	printf("Grade D");
	else 
	printf("Grade F");
	
	
	return 0;
}