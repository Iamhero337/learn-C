#include <stdio.h>

#define _GRDATA_IMPLEMENTAION_
#define _BST_IMPLEMENTATION_
#include "lib/bst.h"

tnode *bst_mirror_it(tnode *root);


int main()
{
	tnode *root = NULL;

	root = bst_insert(root, bst_make_node(mkidata(15)));
	root = bst_insert(root, bst_make_node(mkidata(7)));
	root = bst_insert(root, bst_make_node(mkidata(20)));
	root = bst_insert(root, bst_make_node(mkidata(19)));
	root = bst_insert(root, bst_make_node(mkidata(25)));

	root = bst_mirror_it(root);
	bst_prewalk(root, 0);
	printf("\n");

	return 0;
}

tnode *bst_mirror_it(tnode *root)
{
	if (root == NULL)
		return NULL;

	tnode *right = root->right;
	root->right  = bst_mirror_it(root->left);
	root->left   = bst_mirror_it(right);

	return root;
}



