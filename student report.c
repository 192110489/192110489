Write a program to enter the marks of a student in four subjects. Then calculate the total and aggregate, display the grade obtained by the student. 
If the student scores an aggregate greater than 75%, then the grade is Distinction. If aggregate is 60>= and <75, then the grade is First Division. 
If aggregate is 50 >= and <60, then the grade is Second Division. If aggregate is 40>= and <50, then the grade is Third Division. 
Else the grade is Fail.

#include<iostream>
using namespace std;
int main()
{
	int m1,m2,m3,m4,tot;
	float avg;
	printf("Enter the python mark= ");
	scanf("%d",&m1);
	printf("Enter the C program mark= ");
	scanf("%d",&m2);
	printf("Enter the mathematics mark= ");
	scanf("%d",&m3);
	printf("Enter the physics marks= ");
	scanf("%d",&m4);
	if(int(m1)&&int(m2)&&int(m3))
	{
		if(m1>=50 && m1<=100 && m2>=50 && m2<=100 && m3>=50 && m3<=100 && m4>=50 && m4<=100)
		{
			tot=m1+m2+m3+m4;
			avg=tot/4;
			printf("Total is %d ",tot);
			printf("\nAverage is %f",avg);
			if(avg>75)
			{
				printf("\nyou passed by Distinction");
			}
			else if(75>=avg>65)
			{
				printf("\nyou passed by First division");
			}
			else if(60>=avg>50)
			{
				printf("\nYou passed by Second division");
			}
			else if(50>=avg>40)
			{
				printf("\nYou passed by Third division");
			}
			else
			{
				printf("You Failed the Exam");
			}
		}
		else
		{
			printf("Sorry,You Failed or Invalid input");
		}
	}
	else
	{
		printf("Invalid input");
	}
	return 0;
}
Test Cases:

Case 1:
Enter the python mark= 18
Enter the C program mark= 76
Enter the mathematics mark= 93
Enter the physics marks= 65
Sorry,You Failed or Invalid input

Case 2:
Enter the python mark= 73
Enter the C program mark= 78
Enter the mathematics mark= 79
Enter the physics marks= 75
Total is 305
Average is 76.000000
you passed by Distinction
