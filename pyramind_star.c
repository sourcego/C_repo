 #include<stdio.h>
 void main()
 {
 
 int i,j,k,r;
 printf("Enter the number of rows\n");
 scanf("%d",&r);
 
 k=2*r-2;
  for (i=0; i<r; i++) 
    { 
        // inner loop to handle number spaces 
        // values changing acc. to requirement 
        for (j=0; j<k; j++) 
            printf(" "); 
  
        // decrementing k after each loop 
        k = k - 1; 
  
        //  inner loop to handle number of columns 
        //  values changing acc. to outer loop 
        for (j=0; j<=i; j++ ) 
        { 
            // printing stars 
            printf("* "); 
        } 
  
        // ending line after each row 
        printf("\n");
    }
	
}

/*
output
 Enter the number of rows
5
        *
       * *
      * * *
     * * * *
    * * * * *
*/
