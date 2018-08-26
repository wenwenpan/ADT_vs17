#include<stdio.h>
#include<stdlib.h>
#define Element int

typedef struct LNode{
    Element Data;
    LNode *Next;
}List,*PrtList;

int Creat_List(PrtList P,Element D){
    PrtList node=(PrtList)malloc(sizeof(List));
    if(node==0){
        return -1;
    }
    node->Data=D;
    node->Next=NULL;
    P->Next=node;
    return 0;
}
void Print_List(PrtList P){
    PrtList tmp=P->Next;
    while(tmp){
        printf("%d ",tmp->Data);
        tmp=tmp->Next;
    }
}

int main(){
    PrtList P=(PrtList)malloc(sizeof(List));
    if(P==NULL){
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
    system("pause");
    return 0;

}