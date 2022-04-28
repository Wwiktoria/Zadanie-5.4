#include <stdio.h>

int main(void) {
 int macierz[5][5],i,j;
  

  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
      if((i==j)||(i+j==4)){
      macierz[i][j]=1;
      }
      else{
        macierz[i][j]=0;
      }
    }
  }
  for(i=0;i<5;i++){
    for(j=0;j<5;j++){
      printf("%d ",macierz[i][j]);
    }
    printf("\n");
  }
  return 0;
}