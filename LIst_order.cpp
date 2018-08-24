#define _CRT_SECURE_NO_WARNINGS  /*∑¿÷πscanf±®¥Ì*/
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE   100
#define  Position	int
#define  ElementType  int

typedef struct LNode {
	ElementType Data[MAXSIZE];
	Position Last;
}MList,*PList;
/*creat a empty list*/
PList MakeEmpty() {
	PList L;
	L = (PList)malloc(sizeof(MList));
	L->Last = -1;
	return L;
}

int main() {
	int i;
	PList MyList;
	MyList = MakeEmpty();
	MyList->Last = 5;
	for (i = 0; i < MyList->Last + 1; i++)
	{
		scanf("%d",&(MyList->Data[i]));
	}
	for (i = 0; i < MyList->Last + 1; i++)
	{
		printf("%d ",(MyList->Data[i]));
	}
	system("pause");
	return 0;
}
