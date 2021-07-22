#include <stdio.h>
#include "binary_trees.h"
/**
 * @binary_tree_node: Creates new tree
 *@value: Integer stored in the node
  * @parent: Pointer to the parent node
  * @left: Pointer to the left child node
  * @right: Pointer to the right child node
  **/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	 binary_tree_t* parent = (binary_tree_t *)malloc(sizeof(parent));
	if (*parent == NULL)
	{
	parent-> data;
	parent->left = parent->right = NULL;
	}
	return (parent);
	else if (parent == NULL)
	{
		return (NULL);
	}

