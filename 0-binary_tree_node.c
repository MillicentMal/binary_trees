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
binary_tree_t *new_node;
new_node = (binary_tree_t *)malloc(sizeof(new_node));
if (!new_node)
{
return (NULL);
}
new_node->n = value;
new_node->parent = parent;
new_node->left =  NULL;
new_node->right = NULL;

return (new_node);

}

