#include <stdio.h>

// Define permissions (each is a different number: 1, 2, 4, 8)
#define VIEW   1
#define TRAIN  2
#define TEST   4
#define DEPLOY 8
int main()
{
	int permission;
printf("Enter Permission Value:\n");
printf("To View , Enter 1:\n");
printf("To Train, Enter 2:\n");
printf("To Test, Enter 4:\n");
printf("To Deploy, Enter 8:\n");
scanf("%d", & permission);

// Permission Value
if (permission & 1)
{
	printf("Viewing Allowed\n");
}
else 
{
	printf("Not allowed,Viewing\n");
}
	
if (permission & 2 )
{
	printf("Training Allowed\n");
}
else
{
	printf("Not allowed,Training\n");
}

if (permission & 4)
{
	printf("Testing Allowed\n");
}
else
{
	printf("Not allowed,Testing\n");
}

if (permission & 8)
{
	printf("Deployment Allowed\n");
}
else
{
	printf("Not allowed,Deployment\n");
}

if ((permission & 2) && (permission & 8))
{
	printf("User has both training and deployment permission\n");

}

return 0;
}

