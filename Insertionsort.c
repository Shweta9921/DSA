//Insertion sort
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
void Insertion_sort(int A[], int n){
    int i,j,current;
    for(i=1;i<n;i++){
        current=A[i];
        j=i-1;
        while(j >= 0 && A[j] > current){
            A[j+1]=A[j];
            j=j-1;
        }
        A[j+1]=current;
    }
}
void main(){
    int A[10],n ,i ,item,loc;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    input_Array(A,n);
    printf("Entered Araay is: ");
    display_Array(A,n);
    Insertion_sort(A,n);
    printf("\nArray after sorting: ");
    display_Array(A,n);
    
}