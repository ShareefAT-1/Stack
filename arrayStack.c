#include <stdio.h>
#include <stdlib.h>
#define size 5

int stack[size];
int top = -1;
int isempty()
{
    if (top == -1)
    {
        printf("Stack UnderFlow");
        return 1;
    }
}
int isfull()
{
    if (top = size - 1)
    {
        printf("Stack OverFlow");
        return 1;
    }
}
int Create()
{
    int data;
    printf("Enter Data :");
    scanf("%d", &data);
    top++;

    if (top != size - 1)
    {

        top = data;
    }
}
void pop()
{
    int *temp;

    if (top != -1)
    {
        temp = &stack[top];
        printf("The Element Which You ARe Deleting Is: %d", top);
        top--;

    }
}
void push(int data)
{

    if (isfull)
    {
        top++;
        top = data;
    }
}
// void push(){
//     if (top!=size-1)
//     {
//         top++;
//         top=data;
//     }

// }