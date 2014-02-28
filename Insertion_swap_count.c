# include <stdio.h>
# include <stdlib.h>

typedef struct BST{
	int data;
	int count;
	struct BST *lchild, *rchild;
} node;

void insert(node *, node *);

int count=0;

int main(){

	int n, i, k, cols;
	int *numbers;

	node *new_node = NULL, *root = NULL;
	node *get_node();

	scanf("%d", &n);

	for(k=0; k<n; k++){
	        scanf("%d",&cols);
		numbers = (int *)malloc(cols * sizeof(int*));

		for(i=0; i<cols; i++)
	        	scanf("%d",&number[i]);

	
		for(i=0; i<cols; i++){
			new_node=get_node();
			new_node->data = numbers[i];

			if(root==NULL) {
				root=new_node;
			} else {
				insert(root,new_node);
			}
		}
		free(root);
	}

return 0;
}

node *get_node()
{
	node *temp;
	temp=(node *)malloc(sizeof(node));
	temp->lchild=NULL;
	temp->rchild=NULL;
	return temp;
}

void insert (node *root, node *new_node)
{
	if(new_node->data < root->data){
		if (root->lchild==NULL){
			new_node->duplicate=0;
			root->lchild=new_node;
		} else
			insert(root->lchild, new_node);

	} else if (new_node->data > root->data) {
		if(root->rchild==NULL){
			new_node->duplicate=0;
			root->rchild=new_node;
		} else
			insert(root->rchild, new_node);
	} else {
		root->duplicate=1;
	}
}
