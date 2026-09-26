#include <stdio.h>
int main()
{
  int problemType,algorithm;
  printf("Enter Problem Type:\n");
  printf("1.Classification:\n");
  printf("2.Regression:\n");
  printf("3.Clustering:\n");
  printf("4.Computer Vision:\n");
  scanf("%d",&problemType);
  switch(problemType)
  {
  	case 1://Classification
  	       printf("1.Logistic Regression\n");
  	       printf("2.Decision Tree\n");
  	       printf("3.KNN\n");
  	       scanf("%d",&algorithm);
  	       
  	    switch (algorithm)
  	    {
  	    	case 1:
  	    		printf("Logistic Regression");
  	    		break;
  	    	case 2:
  	    		printf("Decision Tree");
  	    		break;
  	    	case 3:
  	    		printf("KNN");
  	    		break;
	}
		break;
	
	case 2://Regression
	       printf("1.Linear Regression\n");
	       printf("2.Polynomial Regression\n");
	       printf("3.SVR\n");
	       scanf("%d",&algorithm);
	       
	    switch(algorithm)
	    {
	    	case 1:
	    		printf("Linear Regression\n");
	    		break;
	    	case 2:
	    		printf("Polynomial Regression\n");
	    		break;
	    	case 3:
	    		printf("SVR\n");
	    		break;
	    }
	    break;
	case 3://Clustering
	    printf("1.K-Mean:\n");
	    printf("2.Hierarchial Clustering:/n");
	    printf("3.DBSCAN:\n");
	    scanf("%d",&algorithm);
	    
	    switch(algorithm)
	    {
	    	case 1:
	    		printf("K-Mean\n");
	    		break;
	    	case 2:
	    		printf("Hierarchical Clustering\n");
	    		break;
	    	case 3:
	    		printf("DBSCAN\n");
	    		break;
	    }
	    break;
	case 4://Computer Vision
	    printf("1.CNN:\n");
	    printf("2.YOLO:\n");
	    printf("3.R-CNN:\n");
	    scanf("%d",&algorithm);
	    
	    switch(algorithm)
	    {
	    	case 1:
	            printf("CNN\n");
	            break;
	        case 2:
	        	printf("YOLO\n");
	        	break;
	        case 3:
	        	printf("R-CNN");
	        	break;
		}
	    
		}
		return 0;
}
	    	
	    
	
		
	
		
		

  	    
  	    
  	
  	       
  
