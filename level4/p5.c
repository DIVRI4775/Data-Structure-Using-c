#include<stdio.h>
#define MAX 10
int main(){
//[1][2][3][45][89][35][][][][]
//f                          r
//0   1  2  3   4   5  6 7 8 9
int arr[MAX]={1,2,3,45,89,35};
int rear=5;
int front=0;
int val,deleted;
int a,i;
printf("Enter 1 for linear queue insertion\n");
printf("Enter 2 for linear queue deletion\n");
printf("Enter 3 for insertion at front double ended queue\n");
printf("Enter 4 for insertion at rear double ended queue\n");
printf("Enter 5 for deletion  at front double ended queue\n");
printf("Enter 6 for deletion  at rear double ended queue\n");

//insertion operation in linear queue
while(a!=7){
printf("Enter Your choice");
scanf("%d/n",&a);
switch(a){
case 1:{
printf("Enter the number which you to insert");
    scanf("%d",&val);
    if(rear==MAX-1){  //whether is queue is full
  printf("queue is overflow");
    }
    else{
   if(rear==-1 && front ==-1){ //whether is queue is empty
  printf("queue is empty");
  rear=0;
  front=0;
  arr[front]=val;
   }
   else{
  rear=rear+1;
  arr[rear]=val;
      }
        }  
    int i;
    for( i=0;i<=rear;i++){
printf("%d ",arr[i]);
    }  
    break;
}
  case 2:{
  //deletion operation in linear queue
if(rear==-1 && front==-1){
printf("queue is underflow"); //whether queue is empty
}
else{
  if(front ==rear){      //whether is has only one element
  deleted=arr[front];
  front=-1;
  rear=-1;
 }
 else{
  deleted=arr[front];
  front=front+1;
 }
    }
    for( i=front;i<=rear;i++){
    printf(" ");
   printf("%d ",arr[i]);
}
  break;
  }
  case 3:{
  //double ended queue
  //INSERTION AT FRONT
  //CHECK IF ARRAY IS FULL
  //NO concept FIFO
  if(front==0){
  printf("Overflow");
 }
else{
if(front==-1 && rear==-1){
front=0;
rear=0;
arr[front]=val;
}
else{
front=front-1;
arr[front]=val;
}
}
 
  for( i=front;i<=rear;i++){
    printf(" ");
   printf("%d ",arr[i]);
}
break;
  }
  case 4: {
  //double ended queue
  //INSERTION AT REAR
  //CHECK IF ARRAY IS FULL
  if(rear=MAX-1){
  printf("Overflow");
}
else{
if(rear=-1 && front==-1){
printf("Array is empty");
rear=0;
front=0;
arr[front]=val;
}
else{
rear=rear+1;
arr[rear]=val;
}
}
  for( i=front;i<=rear;i++){
    printf(" ");
   printf("%d ",arr[i]);
}
  break;
  }
   
   case 5:{
    //double ended queue
  //Deletion at Front;
  //CHECK IF ARRAY IS EMPTY
  if(rear=-1 && front ==-1){
  printf("UnderFlow");
 }
else{
if(front==0 && rear==0){
front=-1;
rear=-1;
}else{
front=front+1;

}
}
for( i=front;i<=rear;i++){
    printf(" ");
   printf("%d ",arr[i]);
}

break;
   }

case 6:{
    //double ended queue
  //Deletion at Rear;
  //CHECK IF ARRAY IS EMPTY
  if(rear==-1 && front ==-1){
  printf("UnderFlow");
 }
else{
if(front==0 && rear==0){
front=-1;
rear=-1;
}else{
rear=rear-1;
}
}
for( i=front;i<=rear;i++){
    printf(" ");
   printf("%d ",arr[i]);
}

break;
   }









}
}
return 0;
}
