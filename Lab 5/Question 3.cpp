#include <stdio.h>
int main()
{
    char category;
    int opt_A, opt_V, opt_F, opt_H;

    printf("Enter the category you want to search (A, V, F, H): ");
    scanf(" %c", &category);

    switch(category)
    {
        case 'A':
            printf("Enter the option (1, 2, 3): ");
            scanf("%d", &opt_A);
            switch(opt_A)
            {
            	case 1:
            		printf("Cat");
            		break;
            	case 2:
            		printf("Dog");
            		break;
            	case 3:
            		printf("Bird");
            		break;	
			}
        
            break;

        case 'V':
            printf("Enter the option (1, 2, 3): ");
            scanf("%d", &opt_V);
            
             switch(opt_V)
            {
            	case 1:
            		printf("Car");
            		break;
            	case 2:
            		printf("Bus");
            		break;
            	case 3:
            		printf("Bike");
            }		break;	

            break;

        case 'F':
            printf("Enter the option (1, 2, 3): ");
            scanf("%d", &opt_F);
             switch(opt_F)
            {
            	case 1:
            		printf("Pizza");
            		break;
            	case 2:
            		printf("Burger");
            		break;
            	case 3:
            		printf("Biryani");
            		break;	
            	default:
            		printf("Invalid option");
            
            	}

            break;

        case 'H':
            printf("Enter the option (1, 2, 3): ");
            scanf("%d", &opt_H);
            
             switch(opt_H)
            {
            	case 1:
            		printf("Male");
            		break;
            	case 2:
            		printf("Female");
            		break;
            	case 3:
            		printf("Child");
            		break;	
            	default:
            		printf("Invalid option");
             }
            break;

        default:
            printf("Invalid category");
    }

    return 0;
}
