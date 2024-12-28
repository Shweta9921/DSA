//Selection sort
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
void Selection_sort(int A[],int n){
    int i, min_index,j,temp;
    for(i=0;i<n;i++){
        min_index=i;
        for(j=i+1;j<n;j++){
            if(A[j]<A[min_index]){
                min_index=j;
            }
        }
        temp=A[i];
        A[i]=A[min_index];
        A[min_index]=temp;
    }
}
void main(){
    int A[10],n ,i ,item,loc;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    input_Array(A,n);
    printf("Entered Araay is: ");
    display_Array(A,n);
    Selection_sort(A,n);
    printf("\nArray after sorting: ");
    display_Array(A,n);
    
}