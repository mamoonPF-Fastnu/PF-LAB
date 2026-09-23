#include <stdio.h>

int main(){
	int marks1, marks2 ,marks3;
	float attendencepercent,Average;
	
	printf("Enter marks of Programming,Mathematics and AI:");
	scanf("%d/n%d/n%d/n",&marks1,&marks2,marks3);
	
	printf("Enter the attendence percentage:");
	scanf("%f",&attendencepercent);
	
	if marks1>=50
	   printf("Passed");
	else 
	    printf("Not eligible");
	    return 0;
	if marks2>=50
	   printf("Passed");
	else 
	    printf("Not eligible");
	    return 0;
	if marks3>=50
	   printf("Passed");
	else 
	   printf("Not eligible");
	   return 0;
	if attendencepercent >= 75
	   printf("Eligible");
	    Average=(marks1+marks2+marks3)/3
	else 
	   printf("not eligible");
	   return 0;
	   
    if Average>=80
       printf("Excellent");
    else if Average>=70
       printf("Very Good");
    else if Average>=60
       printf("Good");
    else if Average>=50 
       printf("Satisfactory");
    else 
       printf("Poor");

       
return 0;
	
	}
