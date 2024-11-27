#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node*top=NULL;

void push(int value){
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=top;
    top=newnode;
}
void pop(){
    if (top==NULL)
    {
        printf("Stack is empty");
    }
    else{
        struct node*temp=top;
        top=top->next;
        free(top);
    }
    
}
int main(){

}