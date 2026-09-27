#include <stdio.h>

int main() {
    int confidence,threshold;
    printf("Enter confidence level: ");
    scanf("%d",&confidence);
    printf("Enter threshold value: ");  
    scanf("%d",&threshold); 
     
    //check the confidence level
    if (confidence >= 90) {
        printf("Confidence level:Very High\n");
    } else if (confidence >= 75) {
        printf("Confidence level:High\n");
    } else if (confidence >= 50) {
        printf("Confidence level:Moderate\n");
    } else {
        printf("Confidence level:Low\n");
    }

    //Make a prediction based on the threshold value
    if (confidence >= threshold) {
        if(confidence >= 50)
        {
            printf("Prediction: Accepted\n");
        }
     else 
     {
        printf("Prediction: Rejected\n");
     }

    }

    return 0;
}