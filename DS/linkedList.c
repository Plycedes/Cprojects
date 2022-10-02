#include <stdio.h>
#include <stdlib.h>

int main(){
    //defining a node structure
    typedef struct{
        int money;
        struct node *next;
    }node;

    //creating nodes
    node *head,*second,*third,*fourth,*fifth;

    //allocating memory to nodes
    head = malloc(sizeof(node));
    second = malloc(sizeof(node));
    third = malloc(sizeof(node));
    fourth = malloc(sizeof(node));
    fifth = malloc(sizeof(node));

    //putting data in nodes
    head->money = 69691;
    second->money = 69692;
    third->money = 69693;
    fourth->money = 69694;
    fifth->money = 69695;

    //linking nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;
    
    //createing reference to first node
    node *index = head;

    //printing data for the nodes
    while(index != NULL){
        printf("%d",index->money);
        index = index->next;
    }

    return 0;
}