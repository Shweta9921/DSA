// 2D array
#include <stdio.h>
void input_2DArray(int A[10][10],int r, int c){
    int i,j;
    printf("Enter %d Array Element: ",r*c);
    for(i=0;i<r;i++){
      for(j=0; j<c;j++){
        scanf("%d",&A[i][j]);
      }
    }
}
void print_2DArray(int A[10][10], int r,int c){
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%4d",A[i][j]);
        }
        printf("\n");
    }
}
void transpose(int A[10][10],int r,int c){
    int i,j,temp;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            temp=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;
        }
        
    }
}
void main(){
    int A[10][10],r,c;
    printf("Enter number of row and column of Matrix: ");
    scanf("%d%d",&r,&c);
    input_2DArray(A,r,c);
    printf("Entered Matrix is: \n");
    print_2DArray(A,r,c);
    //
    printf("Transpose of a matrix is: \n");
    transpose(A,r,c);
    print_2DArray(A,r,c);
   
}