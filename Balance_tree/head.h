#include<stdio.h>  
#include<stdlib.h>  
#include <malloc.h>

typedef struct Node  
{  
    int key;          //�ؼ���  
	int bf;
    struct Node * left;   //����ָ��  
    struct Node * right;  //�Һ���ָ��  
    struct Node * parent; //ָ�򸸽ڵ�ָ��  
}Node,*PNode;  


void print(PNode);
PNode search(PNode,int);
PNode searchMin(PNode);
PNode searchMax(PNode);
void R_Rotate(PNode*);
void L_Rotate(PNode*);
void LeftBalance(PNode*);
void RightBalance(PNode*);
int InsertAVL(PNode*,int,int*);
void PrintTree(PNode,int);
int create(PNode*);
bool Delete(int,PNode&);
void AdjustAVLBiTree(PNode&);
int Hight(PNode);
int ReBf(PNode&);