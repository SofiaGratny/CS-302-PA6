#ifndef LINKEDBTREENODE
#define LINKEDBTREENODE

template<class ItemType>
class LinkedBTreeNode {
    ItemType item; // A data item
    LinkedBTreeNode<ItemType>* left;
    LinkedBTreeNode<ItemType>* right;
public:
    LinkedBTreeNode();
    LinkedBTreeNode(const ItemType& newData, LinkedBTreeNode<ItemType>* left, LinkedBTreeNode<ItemType>* right);
    void setItem(const ItemType& newData);
    ItemType getItem() const;

    bool isLeaf() const;

    LinkedBTreeNode<ItemType>* getLeftChildPtr() const;
    LinkedBTreeNode<ItemType>* getRightChildPtr() const;

    void setLeftChildPtr(LinkedBTreeNode<ItemType>* newLeftChildPtr);
    void setRightChildPtr(LinkedBTreeNode<ItemType>* newRightChildPtr);

    virtual ~LinkedBTreeNode();
};
#include "LinkedBTreeNode.cpp"
#endif
