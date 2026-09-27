#include <stdio.h>
#include <math.h>

int main()
{
	int choice,absnum,flrnum,ceilnum;
	float sqroot,sqrnum;
	int base,exp;
	double power;
		
		printf("-- Enter the Function you wanna perform:\n");
		printf("Square Root :(1)\n");
		printf("Power :(2)\n");
		printf("Absolute :(3)\n");
		printf("Floor :(4)\n");
		printf("Ceiling :(5)\n");
		scanf("%d", &choice);
		
		switch(choice)
		{ 
		    case 1: 
		    printf("Enter number for its square root:\n");
		    scanf("%f",&sqrnum);
		     sqroot = sqrt(sqrnum);
		    printf("The square root is %.2f\n",sqroot);
		        break;
		    case 2:
		    	printf("Enter the Base and Exponent:");
		    	scanf ("%d\t%d" , &base,&exp);
		    	power =pow(base,exp);
		    	printf("The power of the exponent to the base is %.2f",power);
		    	 break;
		}
		return 0;
}
