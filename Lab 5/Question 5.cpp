#include <stdio.h>

int main()
{
	int confidence;
	char userType;
	
	printf("Enter regonition confidence(1-100):");
	scanf("%d",&confidence);
	
	printf("Enter User Type (A=Authorized, U=Unauthorized):");
	scanf( " %c",&userType);
	
	if (confidence >= 80)
	{
	    printf("Face Recognized\n");

		    printf("%s\n", (userType == 'A') ? "Access Granted" : "Access Denied");
     }
	 else if (confidence >= 50 && confidence <= 79)
	 {
	     printf("Manual Verification Required\n");
	  }
     else
    {
	    printf("Access Denied\n");
 } 
		return 0;
}
