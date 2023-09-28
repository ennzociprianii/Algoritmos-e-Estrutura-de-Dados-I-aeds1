#include <stdio.h>
 
int main(){
  	int M[9][9], test[10], num, var = 0;
   
  	scanf("%d",&num);
  
  	for(int h = 1; h <= num; h++){
    	
    	var = 0;
    	
    	for(int i = 0; i < 9; i++){
      		for(int j = 0; j < 9; j++)
    			scanf("%d",&M[i][j]);
    	}
     
	    for(int i = 0 ; i < 9 && !var; i++){
	      	memset(test, 0, sizeof(test));
	      	for(int j = 0; j < 9 && !var; j++){
	    		if(test[M[i][j]])
	      			var = 1;
	    		else
	      			test[M[i][j]] = 1;
	      	}
	    }
	     
	    for(int i = 0; i < 9 && !var; i++){
	      	memset(test, 0, sizeof(test));
	      	for(int j = 0; j < 9 && !var; j++){
	    		if(test[M[j][i]])
	      			var = 1;
	    		else
	      			test[M[j][i]] = 1;
	      	}
	    }
	     
	    for(int i = 2; i < 9 && !var; i+=3){
	      	memset(test, 0, sizeof(test));
	      	for(int j = i - 2; j <= i && !var; j++){
	    		for(int k = i - 2; k <= i && !var; k++){
	      			if(test[M[j][k]])
	        			var = 1;
	      			else
	        			test[M[j][k]] = 1;
	    		}
	      	}
	    }

	    printf("Instancia %d\n",h);
	    printf("%s\n\n",(!var)?"SIM":"NAO");
  	}
  	
  	return 0 ; 
}