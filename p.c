#include<stdio.h>
#include<stdlib.h>
#define max 4;
int queue[max],item,rear=-1,front=-1,status=0;
void enque(int queue[],int item){
    if(rear==(max-1)){
        printf("overflow\n");
    }else{
        front=0;
        queue[++rear]=item;
        status++;
    }
}
void dequeue(int queue[]){
if(rear==-1){
    printf("underflow");
}else{
    front++
}
}
// insertion in array
// #include<stdio.h>
// void display(int arr[],int n){
//   for(int i=0;i<n;i++){
//     printf("%d\n",arr[i]);
//   }
// }
// int insertion(int arr[],int n,int pos,int element,int capacity){
// if(n>=capacity){
//   return -1;
// }
// for(int i=n-1;i>=pos;i++){
//   arr[i+1]=arr[i];
// }
// arr[pos]=element;
// return 1;
// }
// int main(){
//   int arr[7]={1,2,3,4,5};
//   //display(arr,3);
//   int size=5;
//   int capacity=7;
//   int element=45;
//   int pos=3;
//   int result=insertion(arr,size,pos,element,capacity);
// if(result==1){
// size++;
// display(arr,size);
// }else{
//   printf("gygygy");
// }
//   return 0;
// }
//insertion in linked list
// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node*next;
// };
// void linkedlisttraversal(struct node*ptr){
//     while(ptr!=NULL){
//         printf("%d",ptr->data);
//         ptr=ptr->next;  
//     }
// }
// struct node* insertatfirst(struct node *head,int data){
//     struct node*ptr=(struct node*)malloc(sizeof(struct node));
//     ptr->data=data;
//     ptr->next=head;
//     return ptr;
// }
// struct node*insertatindex(struct node*head,int data,int index){
// struct node*ptr=(struct node*)malloc(sizeof(struct node));
// struct node*p=head;
// int i=0;
// while(i!=index-1){
//     p=p->next;
// i++;
// }
// ptr->data=data;
// ptr->next=p->next;
// p->next=ptr;
// return head;
// }
// struct node*insertatend(struct node*head,int data){
//     struct node*ptr=(struct node*)malloc(sizeof(struct node)){
// ptr->data=data;
// struct node*p=head;
// while(p->next!=NULL){
//     p=p->next
// }
// p->next=ptr;
// ptr->next=NULL;
// return head;
//     }
//     struct node*deletefirst(struct node*head){
//         struct node*ptr=head;
//         head=head->next;
//         free(ptr);
//         return head;
//     }
//     struct node*deleteindex(struct node*head){
//         struct node*p=head;
//         struct node*q=head->next;
//         for(int i=0;i<index-1;i++){
//             p=p->next;
//             q=q->next;
//         }
//         p->next=q->next;
//         free(q);
//         return head;
//     }
// }
//insertion and traversal in doubly linked list
// struct node{
//     int data;
//     struct node*next;
// };
// void linkedlisttraversal(struct node*head){
//     struct node*ptr=head;
//     do{
//         printf("element is %d\n",ptr->data);
//         ptr=ptr->next;
//     }while(ptr!=head);
// }
// void insert(struct node*head,int data){
//     struct node*ptr=(struct node*)malloc(sizeof(struct node));
//     ptr->data=data;
//      struct node*p=head->next;
// p->next=ptr;
// }
//stack
// struct stack{
//     int size;
//     int top;
//     int*arr;

// };
// int isempty(struct stack*ptr){
//     if(ptr->top==-1){
//         return -1;
//     }
//     else{
//         return 0;
//     }
// }
// int isfull(struct stack*ptr){
//     if(ptr->top==ptr->size-1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//     struct stack*s;
//     s->size=80;
//     s->top=-1;
//     s->arr=(int *)malloc(s->size*sizeof(int));
//     return 0;
// }