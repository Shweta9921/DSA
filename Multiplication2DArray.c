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
void Multiply(int A[10][10],int B[10][10],int R[10][10],int r, int c){
    int i,j,k;
    for(i=0; i<r;i++){
        for(j=0;j<c;j++){
            R[i][j]=0;
            for(k=0; k<c;k++){
                R[i][j]=R[i][j]+A[i][k]*B[k][j];
            }
        }
    }
}
void main(){
    int A[10][10],B[10][10],R[10][10],r,c;
    printf("Enter number of row and column of Matrix: ");
    scanf("%d%d",&r,&c);
    printf("1st Matrix: \n");
    input_2DArray(A,r,c);
    printf("2nd Matrix: \n");
    input_2DArray(B,r,c);
    printf("Entered Matrix is: \n");
    printf("1st Matrix: \n");
    print_2DArray(A,r,c);
    printf("2nd Matrix: \n");
    print_2DArray(B,r,c);
    printf("Multiplying......\n");
    Multiply(A,B,R,r,c);
    printf("Resultant Matrix: \n");
    print_2DArray(R,r,c);
}