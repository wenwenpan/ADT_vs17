#define _CRT_SECURE_NO_WARNINGS  /*��ֹscanf����*/
#include<stdio.h>
#include<stdlib.h>
/* ͼ���ڽӾ����ʾ�� */

#define MaxVertexNum 100    /* ��󶥵�����Ϊ100 */
#define INFINITY 65535        /* ����Ϊ˫�ֽ��޷������������ֵ65535*/
typedef int Vertex;         /* �ö����±��ʾ����,Ϊ���� */
typedef int WeightType;        /* �ߵ�Ȩֵ��Ϊ���� */
typedef char DataType;        /* ����洢������������Ϊ�ַ��� */

							  /* �ߵĶ��� */

typedef struct ENode {
	Vertex V1, V2;      /* �����<V1, V2> */
	WeightType Weight;  /* Ȩ�� */
}*Edge;




typedef struct GNode {
	int Nv;  /* ������ */
	int Ne;  /* ����   */
	WeightType G[MaxVertexNum][MaxVertexNum]; /* �ڽӾ��� */
	DataType Data[MaxVertexNum];      /* �涥������� */
									  /* ע�⣺�ܶ�����£����������ݣ���ʱData[]���Բ��ó��� */
}*MGraph;




MGraph CreateGraph(int VertexNum)
{ /* ��ʼ��һ����VertexNum�����㵫û�бߵ�ͼ */
	Vertex V, W;
	MGraph Graph;

	Graph = (MGraph)malloc(sizeof(struct GNode)); /* ����ͼ */
	Graph->Nv = VertexNum;
	Graph->Ne = 0;
	/* ��ʼ���ڽӾ��� */
	/* ע�⣺����Ĭ�϶����Ŵ�0��ʼ����(Graph->Nv - 1) */
	for (V = 0; V<Graph->Nv; V++)
		for (W = 0; W<Graph->Nv; W++)
			Graph->G[V][W] = INFINITY;

	return Graph;
}

MGraph BuildGraph()
{
	MGraph Graph;
	Edge E;
	Vertex V;
	int Nv,i;
	printf("���붥�����:");
	scanf("%d", &Nv);   /* ���붥����� */
	Graph = CreateGraph(Nv); /* ��ʼ����Nv�����㵫û�бߵ�ͼ */
	printf("�������:");
	scanf("%d", &(Graph->Ne));   /* ������� */
	if (( Graph->Ne!= 0)&&(Graph->Ne < Nv*(Nv-1)*0.5))
	{ /* ����б� */
		E = (Edge)malloc(sizeof(struct ENode)); /* �����߽�� */
		printf(" ����ߣ���ʽΪ'��� �յ� Ȩ��'�������ڽӾ���:\n");
		for (i = 0; i<Graph->Ne; i++) 
		{
			scanf("%d", &(E->V1));
			scanf("%d", &(E->V2));
			scanf("%d", &(E->Weight));
			/* ע�⣺���Ȩ�ز������ͣ�Weight�Ķ����ʽҪ�� */
			//InsertEdge(Graph, E);
			/* ����� <V1, V2> */
			Graph->G[E->V1][E->V2] = E->Weight;
			/* ��������ͼ����Ҫ�����<V2, V1> */
			Graph->G[E->V2][E->V1] = E->Weight;
		}
	}
	else printf("Error:Ne is illege");
	

	/* ������������ݵĻ����������� */
//	for (V = 0; V<Graph->Nv; V++)
//		scanf(" %c", &(Graph->Data[V]));

	return Graph;
}
int main()
{

	BuildGraph();
	return 0;
}