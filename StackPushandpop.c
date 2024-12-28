#include <stdio.h>
#include <stdlib.h>
#define max 5
static int Stack[max] , top=-1;
void push_s(int num){
    if(top==max){
        printf("OverFlow.....");
     }
     else{
     top=top+1;
     Stack[top]=num;
     printf("Element Added");
     }
}
int pop_s(void){
    int n;
    if(top==-1){
        printf("UnderFlow......");
    }
    else{
       n=Stack[top];
       top=top-1;
       printf("Element Deleted");
    }
}
void display_s(void){
    int ptr;
    printf("Top->");
    if(top==-1){
        printf("Null");
    }
    else{
        ptr=top;
        while(ptr!=-1){
            printf("\t%d |%d\n",ptr+1,Stack[top]);
            ptr--;
        }
    }
}
void main() {
  int num ;
  char ch;
  while(1) {
   
   printf("\n 0. Exit");
   printf("\n 1. Add element to stack PUSH");
   printf("\n 2. Remove element from stack POP");
   printf("\n 3. Display stack");
   printf("\n Enter your choice : ");
  fflush(stdin);
  ch=getchar();

   switch(ch) {
     case '0' : exit(0);
     case '1' : printf("\n Enter any number to add in stack : ");
		scanf("%d", &num);
		push_s(num);
		break;
     case '2' : printf("\n Goind to Delete...");
		num = pop_s();
		if(num != 0)
		  printf("\n Poped element = %d",num) ;
		break;
     case '3' : printf("\ Display Stack");
		display_s();
		break;
     default :  printf("Invalid choice");
		break;
   }
   
  }
}