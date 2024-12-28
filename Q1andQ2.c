//Traversal Insertion Deletion Linear Search and Binary Search
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
int LinearSearch(int A[],int n,int item){
    int i,loc;
    loc=-1;
    for(i=0; i<n;i++){
        if(A[i]==item){
            loc=i;
        }
    }
    if(loc!=-1) return loc;
    else return -1;
    
}
int delete_Array(int A[], int n,int pos){
   int i;
   if(pos<0|| pos>n){
       printf("invalid command");
        return n;
   }
   for(i=pos;i<n;i++){
       A[i]=A[i+1];
   }
   n--;
   return n;
}
int BinarySearch(int A[], int n, int item){
    int beg, mid, end;
    beg=0;
    end=n;
    mid=(beg+end)/2;
    while(beg<end){
        if(item<A[mid]){
            end=mid;
        }
        else if(item>A[mid]){
            beg=mid+1;
        }
        else if(item==A[mid]){
            return mid;     
        }
        else{
            return -1;
        }
        mid=(beg+end)/2;
    }
}
void main(){
    int A[10],n ,i ,item,loc;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    input_Array(A,n);
    printf("Entered Araay is: ");
    display_Array(A,n);
    printf("\nEnter the element that want to search: ");
    scanf("%d",&item);
    // loc=LinearSearch(A,n,item);
    loc=BinarySearch(A,n,item);
    if(loc!=-1){
    n=delete_Array(A,n,loc);
    printf("\nFinal Array: ");
    display_Array(A,n);
    }
    else {
        printf("Element not found");
    }
}