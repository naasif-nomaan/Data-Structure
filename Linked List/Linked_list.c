#include <stdio.h>
#include <stdlib.h>



typedef struct
{

int data;
struct Node *next;

}Node;

Node* createNode(int item,Node *next){

Node *new_node= (Node *)malloc(sizeof(Node));

if(new_node==NULL){
printf("Node not created!");
exit(1);
}

new_node->data=item;
new_node->next= next;

return new_node;

}


Node* removeNode(Node* head, Node* node){

   if(head->next == node){
   head->next=node->next;
   free(node);
   return head;
   }

   Node* currentNode=head;

   while(currentNode != NULL){

   if(currentNode->next==node){
   break;
   }
   currentNode=currentNode->next;
   }

   if(currentNode == NULL){
   return head;
   }

   currentNode->next=node->next;
   free(node);

   return head;

}


Node* prependNode(Node* head, int item){

Node* new_node=createNode(item,head);


return new_node;

}


Node* appendNode(Node* head, int item){

Node* new_node=createNode(item,NULL);

if(head==NULL){
return new_node;
}

Node* current_node=head;

while(current_node->next!=NULL){

current_node=current_node->next;
}
current_node->next=new_node;

return new_node;
}



void insertNode(Node* node, int item){

Node* new_node=createNode(item,node->next);

node->next=new_node;

}

void Traverse(Node *head){

Node* current_node=head;

while(current_node!=NULL){

printf("%d",current_node->data);
current_node=current_node->next;

}
printf("\n")

}



int main()
{




   Node *n1,*n2,*n3;
   n1=createNode(10,n2);
   n2=createNode(11,n3);
   n3=createNode(12,NULL);
 free(n3);

    printf("data=%d, nextNode=%d",n1->data,n1->next);
    return 0;
}

