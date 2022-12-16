#include<stdio.h>
#include<stdlib.h>

struct Node{
	struct Node *left;
	struct Node *right;
	int data;
};

struct Node *create(){
	int data;
	printf("Enter Data \n");
	scanf("%d",&data);
	if(data==-1){
		return 0;

	}
	struct Node *r;
	r=(struct Node *)malloc(sizeof(struct Node));
	r->data=data;
	printf("\nEnter left child of %d \n",data);
	r->left = create();
	printf("\n Enter right child of %d\n",data);
	r->right= create();
	return r;

}

void main(){
	struct Node *root;
	root = NULL;
	root = create();
}
