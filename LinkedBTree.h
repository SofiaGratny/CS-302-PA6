#ifndef LINKEDBTREE
#define LINKEDBTREE

#include "LinkedBTreeNode.h"

template<class ItemType>
class LinkedBTree {
public:
    LinkedBTree();

    void preorderTraverse(void visit(ItemType& item), LinkedBTreeNode<ItemType>* treePtr) const;
    void inorderTraverse(void visit(ItemType& item), LinkedBTreeNode<ItemType>* treePtr) const;
    void postorderTraverse(void visit(ItemType& item), LinkedBTreeNode<ItemType>* treePtr) const;    

    virtual ~LinkedBTree();

};
#include "LinkedBTree.cpp"
#endif
