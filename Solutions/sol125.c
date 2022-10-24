#include <stdio.h>

#define _GRDATA_IMPLEMENTAION_
#define _BST_IMPLEMENTATION_
#include "lib/bst.h"

int bst_sum_left_leaf_data(tnode *root);


int main()
{
	tnode *root = NULL;

	root = bst_insert(root, bst_make_node(mkidata(15)));
	root = bst_insert(root, bst_make_node(mkidata(7)));
	root = bst_insert(root, bst_make_node(mkidata(20)));
	root = bst_insert(root, bst_make_node(mkidata(19)));
	root = bst_insert(root, bst_make_node(mkidata(25)));

	int sum = bst_sum_left_leaf_data(root);
	printf("%d\n", sum);

	return 0;
}

int bst_sum_left_leaf_data(tnode *root)
{
	if (root == NULL)
		return 0;

	if (root->left != NULL)
		if (root->left->left == NULL && root->left->right == NULL)
			return gtidata(root->left->data) + bst_sum_left_leaf_data(root->right);

	return bst_sum_left_leaf_data(root->left) + bst_sum_left_leaf_data(root->right);
}
