#include<stdio.h>
#include<stdlib.h>
#define N 5
void main(){
    int stack[N];
    int top = -1;

    {
        int x;
        printf("Enter the data\n");
        scanf("%d", &x);
            if (top==N-1)
            {
               printf("overflow");
            }
            else
            {
                top++;
                stack[top]=x
            }
            
            
    }
}