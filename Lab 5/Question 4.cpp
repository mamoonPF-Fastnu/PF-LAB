#include<stdio.h>

#include <stdio.h>

int main(void)
{
    int choice,opts_1,opts_2,opts_3,opts_4;

    printf("1. Greeting\n");
    printf("2. Study\n");
    printf("3. Weather\n");
    printf("4. News\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        	printf("Greeting\n");
        printf("What you want me to say:[Hello,How are you,Goodbye](1,2,3):");
        scanf("%d",&opts_1);
        
        switch(opts_1)
        {
        	case 1:
                   printf("Hello!");
                   break;
            case 2:
            	   printf("How are you");
            	   break;
            case 3:
            	   printf("Goodbye");
            	   break;
        }
            break;
        case 2:
            printf("Let's study!");
            printf("What you want to Study:[Programming,Math,AI](1,2,3)");
            scanf("%d",&opts_2);
            
            switch(opts_2)
            {
            	case 1:
            		printf("Programming");
            		break;
            	case 2:
            		printf("Mathematics");
            		break;
            	case 3:
            		printf("Artifical Intellegence");
            		break;
             }
            
            break;

        case 3:
            printf("Weather");
            printf("Today(1),Tomorrow(2),Forecast(3)");
            scanf("%d",opts_3);
            
            switch(opts_3)
            {
            	case 1:
            		printf("Today's Weather is Sunny");
            		break;
            	case 2:
            		printf("Tomorrow will be Sunny too");
            		break;
            	case 3:
				    printf("You are in Karachi and it will be hot most of the year");
				    break;
				    
			}
            break;

        case 4:
            printf("Help");
            printf("What you need help about Chatbot(1),Commands(2),Exit(3)");
            scanf("%d",&opts_4);
            
            switch(opts_4)
            {  
			 case 1: 
                  printf("About Chatbot /n blah blah blah");
                  break;
             case 2:
             	  printf("Commands /n Press F to pay respects");
             	  break;
             case 3:
             	  printf("Exit");
				  break;
             
			}
            break;
            

        default:
            printf("Invalid choice");
    }

    return 0;
}
