#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
/**
 *binary_tree_node- Creates new tree
 *Return: address to parent
 * @value: Integer stored in the node
 * @parent: Pointer to the parent node
 **/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	parent = (binary_tree_t *)malloc(sizeof(parent));
(*parent).n = value;
	parent->left = parent->right = NULL;
	return (parent);
	if (parent == NULL)
	{
		return (NULL);
	}
}
