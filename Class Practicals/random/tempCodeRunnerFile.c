
     for(int i=1; i<=rows; i++){
          for(int j=(rows-1); j>=i; j--){
               printf(" ");
          }
          for(int k=1; k<=i; k++){
               printf("*");
          }
          printf("\n");
     }