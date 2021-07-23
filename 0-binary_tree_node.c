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
binary_tree_t *rootptr;
rootptr = malloc(sizeof(rootptr));
if (!rootptr)
{
return (NULL);
}
rootptr->n = value;
rootptr->parent = parent;
rootptr->left = rootptr->right = NULL;
free(rootptr);
return (rootptr);

}

