#include <stdio.h>
#include <stdlib.h>
   struct node{
        int data;
        struct node *next;
    };

struct node insert_at_start(struct node *head, int val){

    struct node *newnode, *temp;
    newnode = malloc(sizeof(struct node));
    temp=head;
    newnode->next = temp;
    head = newnode;

}
void print_list(struct node *head){
    struct node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next; 

}
}
int main(){
    struct node *head=NULL, *newnode=NULL, *temp;
    int n;

    printf("Enter the number of nodes: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        newnode = malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        if(head == NULL){
        temp = head = newnode; 
        } 
        else{
        temp->next= newnode;
        temp = newnode;
        } 
    printf("Linked list:");
    print_list(head);


    insert_at_start();
    
}
}
