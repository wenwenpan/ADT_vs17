#include<stdio.h>
#include<stdlib.h>

#define ElementType int

typedef struct SNode {
    ElementType Data;
    SNode *Next;
}Stack,*PrtStack;

PrtStack CreateStack( ) 
{ /* 构建一个堆栈的头结点，返回该结点指针 */
    PrtStack S;
    S = (PrtStack)malloc(sizeof(Stack));
    S->Next = NULL;
    return S;
}

bool IsEmpty (PrtStack S )
{ /* 判断堆栈S是否为空，若是返回true；否则返回false */
    return ( S->Next == NULL );
}

bool Push(PrtStack S, ElementType X )
{ /* 将元素X压入堆栈S */
    PrtStack TmpCell;
    TmpCell = (PrtStack)malloc(sizeof(Stack));
    TmpCell->Data = X;
    TmpCell->Next = S->Next;//S->Next;
    S->Next = TmpCell;
    return true;
}

int main(){
     ElementType i;
     PrtStack MStack;
     MStack=CreateStack();
     for(i=0;i<10;i++){
         if(IsEmpty){
            Push(MStack,i);
         }
        else{
            return false;
        }
     }
}