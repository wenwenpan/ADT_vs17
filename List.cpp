#include<stdio.h>
#include<stdlib.h>
#define Element int

typedef struct LNode{
    Element Data;
    LNode *Next;
}List,*PrtList;
<<<<<<< HEAD
/*逆序插入*/
=======

>>>>>>> 24b4ba03c6d96b84fa17ec60934702fbcb548192
int Creat_List(PrtList P,Element D){
    PrtList node=(PrtList)malloc(sizeof(List));
    if(node==0){
        return -1;
    }
    node->Data=D;
<<<<<<< HEAD
    node->Next=P->Next;
    P->Next=node;
    return 0;
}

void Print_List(PrtList P){
    PrtList tmp;
    tmp=P->Next;
    while(tmp){
        printf("%d ",(tmp->Data));
=======
    node->Next=NULL;
    P->Next=node;
    return 0;
}
void Print_List(PrtList P){
    PrtList tmp=P->Next;
    while(tmp){
        printf("%d ",tmp->Data);
>>>>>>> 24b4ba03c6d96b84fa17ec60934702fbcb548192
        tmp=tmp->Next;
    }
}

int main(){
    PrtList P=(PrtList)malloc(sizeof(List));
    if(P==NULL){
<<<<<<< HEAD
        return false;
    }
    P->Next=NULL;
    int i;
    for(i=0;i<10;i++)
    {
      if( Creat_List(P,i)==-1){
          return false;
      }
    }
    Print_List(P);
=======
        return -1;
    }
    for(int i=0;i<10;i++){
       if(Creat_List(P,i)==-1){
           return -1;
       }
       else{
            Print_List(P);
       }
    }
>>>>>>> 24b4ba03c6d96b84fa17ec60934702fbcb548192
    system("pause");
    return 0;

}