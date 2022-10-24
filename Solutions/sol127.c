#include <stdio.h>

#define _GRDATA_IMPLEMENTAION_
#define _BST_IMPLEMENTATION_
#include "lib/bst.h"

void bst_print_internal_node(tnode *root);


int main()
{
	tnode *root = NULL;

	root = bst_insert(root, bst_make_node(mkidata(15)));
	root = bst_insert(root, bst_make_node(mkidata(7)));
	root = bst_insert(root, bst_make_node(mkidata(20)));
	root = bst_insert(root, bst_make_node(mkidata(19)));
	root = bst_insert(root, bst_make_node(mkidata(25)));

	bst_print_internal_node(root);
	printf("\n");

	return 0;
}

void bst_print_internal_node(tnode *root)
{
	if (root == NULL)
		return;

	if (root->left != NULL && root->right != NULL)
		printf("%d ", gtidata(root->data));

	bst_print_left_leaf(root->left);
	bst_print_left_leaf(root->right);
}


