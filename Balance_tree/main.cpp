#include "head.h"
void main()  
{  
	system("color fc"); 
	int i,nlayer=0;
	PNode root=NULL;
	while(1)
	{
		int x,i,n,node_num;

		printf("***********************************��ѡ��******************************\n");
		if(root==NULL)printf("|                      1.¼��ڵ�����,�������0�������:               |\n");
		else{	printf("|                      2.����������:                                   |\n");	
		printf("|                      3.��ӡ����:                                     |\n");
		printf("|                      4.����:                                         |\n");
		printf("|                      5.����:                                         |\n");
		printf("|                      6.ɾ��:                                         |\n");}
		printf("|                      7.�˳�:                                         |\n");
		printf("***********************************************************************\n");
		scanf("%d",&n);
		system("cls");   
		
		switch(n)
		{
			case 1:
				node_num = create(&root);  
				system("cls");
				PrintTree(root,nlayer);
				break;
			case 2:
				print(root);
				printf("\n");
				break;
			case 3:
				PrintTree(root,nlayer);
				break;
			case 4:
				PNode p;
				scanf("%d",&x);
			    p =	search(root,x);
				if(p == NULL)printf("NO!\n");
				else printf("YES!\n");
				break;
			case 5:
				scanf("%d",&x);
				InsertAVL(&root,x,&i);
				PrintTree(root,nlayer);
				break;
			case 6:
				scanf("%d",&x);
				Delete(x,root);
				AdjustAVLBiTree(root);
			    ReBf(root);
				PrintTree(root,nlayer);
				break;
			case 7:
				exit(0);
				break;
			case 8:
				printf("%d",Hight(root->left) - Hight(root->right));
				break;
		}	 
	}  
}