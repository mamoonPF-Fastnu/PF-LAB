#include <stdio.h>

int main()
{
	int confidence;
	char userType;
	
	printf("Enter regonition confidence(1-100):");
	scanf("%d",&confidence);
	
	printf("Enter User Type (A=Authorized, U=Unauthorized):");
	scanf( " %c",&userType);
	
	if (confidence>=80)
	{
		printf("Face Recognized\n");
		
		if (userType=='A')
		{
			printf("Access granted\n");
		}
		else
		{
		    printf("Access Denied\n");
     }
 }
	else 
	{
	    if(confidence>=50)
	    {
	    	if (confidence<=79)
	    	{
	    		printf("Manual Verification needed");	
			}		
       	    else
		   {
		   	printf("Face not recognized\n");
			} 
       	}
       	else 
       	{
       		printf("Access denied\n");
		   }
		}
	return 0;
}
