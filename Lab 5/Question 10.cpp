#include <stdio.h>
#include <math.h>

int main()
{
    float accuracy, confidence, modelScore;
    int datasetSize, userRole, modelStatus, permission;

    printf("Enter AI Model Accuracy: ");
    scanf("%f", &accuracy);

    printf("Enter Confidence Score: ");
    scanf("%f", &confidence);

    printf("Enter Dataset Size: ");
    scanf("%d", &datasetSize);

    printf("\nUser Roles:\n");
    printf("1 = Admin\n");
    printf("2 = Developer\n");
    printf("3 = Researcher\n");
    printf("Enter User Role: ");
    scanf("%d", &userRole);

    printf("\nModel Status:\n");
    printf("1 = Ready\n");
    printf("2 = Testing\n");
    printf("3 = Training\n");
    printf("Enter Model Status: ");
    scanf("%d", &modelStatus);

    printf("\nPermissions:\n");
    printf("1 = View\n");
    printf("2 = Train\n");
    printf("4 = Test\n");
    printf("8 = Deploy\n");
    printf("Enter Permission Value: ");
    scanf("%d", &permission);

    
    modelScore = (accuracy + confidence) / 2;

    printf("\n========== MODEL INFORMATION ==========\n");
    printf("Accuracy: %.2f%%\n", accuracy);
    printf("Confidence: %.2f%%\n", confidence);
    printf("Dataset Size: %d\n", datasetSize);

    
    printf("User Role: ");

    switch(userRole)
    {
        case 1:
            printf("Admin\n");

            switch(modelStatus)
            {
                case 1:
                    printf("Model Status: Ready\n");
                    break;

                case 2:
                    printf("Model Status: Testing\n");
                    break;

                case 3:
                    printf("Model Status: Training\n");
                    break;

                default:
                    printf("Invalid Model Status\n");
            }
            break;

        case 2:
            printf("Developer\n");

            switch(modelStatus)
            {
                case 1:
                    printf("Model Status: Ready\n");
                    break;

                case 2:
                    printf("Model Status: Testing\n");
                    break;

                case 3:
                    printf("Model Status: Training\n");
                    break;

                default:
                    printf("Invalid Model Status\n");
            }
            break;

        case 3:
            printf("Researcher\n");

            switch(modelStatus)
            {
                case 1:
                    printf("Model Status: Ready\n");
                    break;

                case 2:
                    printf("Model Status: Testing\n");
                    break;

                case 3:
                    printf("Model Status: Training\n");
                    break;

                default:
                    printf("Invalid Model Status\n");
            }
            break;

        default:
            printf("Invalid User Role\n");
    }

    printf("Model Score: %.2f\n", modelScore);
    printf("\nPermissions:\n");

if (permission & 1)
    printf("View: Allowed\n");
else
    printf("View: Not Allowed\n");

if (permission & 2)
    printf("Training: Allowed\n");
else
    printf("Training: Not Allowed\n");

if (permission & 4)
    printf("Testing: Allowed\n");
else
    printf("Testing: Not Allowed\n");

if (permission & 8)
    printf("Deployment: Allowed\n");
else
    printf("Deployment: Not Allowed\n");
    

   

   
    if (accuracy >= 80 &&confidence >= 75 &&datasetSize >= 1000 &&modelStatus == 1 && (permission & 8))
    {
        printf("Deployment Ready: YES\n");
    }
    else
    {
        printf("Deployment Ready: NO\n");
    }

    
    printf("Decision: %s\n",(accuracy >= 80 && confidence >= 75) ? "Meets Quality Requirements"   : "Does Not Meet Quality Requirements");

  
    printf("\nMemory Information:\n");
    printf("Size of accuracy variable: %zu bytes\n", sizeof(accuracy));
    printf("Size of confidence variable: %zu bytes\n", sizeof(confidence));
    printf("Size of datasetSize variable: %zu bytes\n", sizeof(datasetSize));

    return 0;
}
