//Buble sort
#include <stdio.h>
void input_Array(int A[],int n){
    int i;
    printf("Enter the %d array element: ",n);
    for(i=0;i<n;i++){
       scanf("%d",&A[i]);
    }
}
void display_Array(int A[],int n){
    int i;
    for(i=0; i<n;i++){
        printf("%d ",A[i]);
    }
}
void Bubble_sort(int A[],int n){
    int i,j,temp;
    for(i=0; i<n-1;i++){
      for(j=0;j<n-i-1;j++){
        if(A[j]>A[j+1]){
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
        }
      }
    }
}
void main(){
    int A[10],n ,i ,item,loc;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    input_Array(A,n);
    printf("Entered Araay is: ");
    display_Array(A,n);
    Bubble_sort(A,n);
    printf("\nArray after sorting: ");
    display_Array(A,n);
    
}