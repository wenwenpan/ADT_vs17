#include<stdio.h>
#include<stdlib.h>
#define Element int

typedef struct LNode{
    Element Data;
    LNode *Next;
}List,*PrtList;
/*逆序插入*/
int Creat_List(PrtList P,Element D){
    PrtList node=(PrtList)malloc(sizeof(List));
    if(node==0){
        return -1;
    }
    node->Data=D;
    node->Next=P->Next;
    P->Next=node;
    return 0;
}

void Print_List(PrtList P){
    PrtList tmp;
    tmp=P->Next;
    while(tmp){
        printf("%d ",(tmp->Data));
        tmp=tmp->Next;
    }
}

int main(){
    PrtList P=(PrtList)malloc(sizeof(List));
    if(P==NULL){
        return false;
    }
    P->Next=NULL;
    int i,j;
    for(i=0;i<10;i++)
    {
      if( Creat_List(P,i)==-1){
          return false;
      }
    }
    Print_List(P);
    system("pause");
    return 0;

}