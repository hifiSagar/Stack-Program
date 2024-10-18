// #include <stdio.h>
// #include <stdlib.h>

// #define MAX 1000  // Define the maximum size of the stack

// typedef struct Stack {
//     int top;
//     int* array;
// } Stack;

// // Function to create a stack of given size
// Stack* createStack() {
//     Stack* stack = (Stack*)malloc(sizeof(Stack));
//     stack->top = -1;
//     stack->array = (int*)malloc(MAX * sizeof(int));
//     return stack;
// }

// // Function to check if the stack is full
// int isFull(Stack* stack) {
//     return stack->top == MAX - 1;
// }

// // Function to check if the stack is empty
// int isEmpty(Stack* stack) {
//     return stack->top == -1;
// }

// // Function to add an item to the stack
// void push(Stack* stack, int item) {
//     if (isFull(stack)) {
//         printf("Stack overflow\n");
//         return;
//     }
//     stack->array[++stack->top] = item;
//     printf("Pushed: %d\n", item);
// }

// // Function to remove an item from the stack
// int pop(Stack* stack) {
//     if (isEmpty(stack)) {
//         printf("Stack underflow\n");
//         return -1;  // Return -1 if stack is empty
//     }
//     return stack->array[stack->top--];
// }

// // Function to free the stack
// void freeStack(Stack* stack) {
//     free(stack->array);
//     free(stack);
// }

// int main() {
//     Stack* stack = createStack();

//     // Performance test: pushing elements
//     for (int i = 0; i < 100; i++) {
//         push(stack, i);
//     }

//     // Performance test: popping elements
//     for (int i = 0; i < 100; i++) {
//         int poppedValue = pop(stack);
//         if (poppedValue != -1) {
//             printf("Popped: %d\n", poppedValue);
//         }
//     }

//     freeStack(stack);
//     return 0;
// }


#include <stdio.h>

#include <stdlib.h>

#define SIZE 4

int top = -1, inp_array[SIZE];
void push();
void pop();
void show();

int main()
{
    int choice;

    while (1)
    {
        printf("\nPerform operations on the stack:");
        printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    }
}

void push()
{
    int x;

    if (top == SIZE - 1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter the element to be added onto the stack: ");
        scanf("%d", &x);
        top = top + 1;
        inp_array[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nPopped element: %d", inp_array[top]);
        top = top - 1;
    }
}

void show()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for (int i = top; i >= 0; --i)
            printf("%d\n", inp_array[i]);
    }
}