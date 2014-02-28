# include <stdio.h>
# include <stdlib.h>

using namespace std;

typedef struct BST{
	int data;
	int duplicate;
	struct BST *lchild, *rchild;
} node;

void insert(node *, node *);
void inorder(node *);

int main(){
	int n,i;
	int *numbers=NULL;

	node *new_node, *root;
	node *get_node();

	scanf("%d", &n);

	numbers = (int*)malloc(n*sizeof(int*));

	for(i=0; i<n; i++){
		scanf("%d",&numbers[i]);
	}

	for(i=0; i<n; i++){
		new_node=get_node();
		new_node->data = numbers[i];

		if(root==NULL) {
			root=new_node;
		} else {
			insert(root,new_node);
		}
	}

	inorder(root);
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

void inorder(node *temp)
{
	if(temp!= NULL)
	{
		inorder(temp->lchild);
		if (temp->duplicate == 0){
			printf("%d ", temp->data);
		}
		inorder(temp->rchild);
	}
}
