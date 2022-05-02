#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *right;
	struct node *left;
};
struct node *CreateBST(struct node *, int);
void Inorder(struct node *);
void Preorder(struct node *);
void Postorder(struct node *);
int main()
{
       	struct node *root = NULL;
	int choice, item, n, i;
	while(1)
	{
	    printf("1.Creation 2.Inorder 3.Preorder 4.Postorder 5.Exit\n");
     	    printf("Enter Choice:\n");
	    scanf("%d",&choice);
	    switch(choice)
	    {
		    case 1:root = NULL;
			   printf("number of nodes to be enter:\n");
		    	   scanf("%d",&n);
			   for(i=1;i<=n;i++)
			   {
				   printf("Enter data for node %d : ", i);
				   scanf("%d",&item);
				   root = CreateBST(root,item);
			   }
			   break;
		    case 2:printf("BST Traversal in INORDER \n");
			   Inorder(root);			
			   break;
		    case 3:printf("BST Traversal in PREORDER \n");
			   Preorder(root);
			   break;
		    case 4:printf("BST Traversal in POSTORDER \n");
			   Postorder(root);
			   break;
		    case 5:exit(0);
			}
	}
}
struct node *CreateBST(struct node *root, int item)
{
       	if(root == NULL)
	{
		root = (struct node *)malloc(sizeof(struct node));
		root->left = root->right = NULL;
		root->data = item;
		return root;
	}
	else
	{
		if(item < root->data )
			root->left = CreateBST(root->left,item);
		else if(item > root->data)
			root->right = CreateBST(root->right,item);
		return root;							        
	}
}
void Inorder(struct node *root)
{
	if( root != NULL)
	{
		Inorder(root->left);
		printf(" %d ",root->data);
		Inorder(root->right);
	}
}
void Preorder(struct node *root)
{
     	if( root != NULL)
	{
		printf(" %d ",root->data);
		Preorder(root->left);
		Preorder(root->right);
	}
}
void Postorder(struct node *root)
{
	if( root != NULL)
	{
		Postorder(root->left);
		Postorder(root->right);
		printf(" %d ",root->data);
	}
}
