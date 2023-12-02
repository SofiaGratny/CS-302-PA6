template<class ItemType>
LinkedBTreeNode<ItemType>:: LinkedBTreeNode(){}

template<class ItemType>
LinkedBTreeNode<ItemType>:: LinkedBTreeNode(const ItemType& newData,
    LinkedBTreeNode<ItemType>* left, LinkedBTreeNode<ItemType>* right){}

template<class ItemType>
void LinkedBTreeNode<ItemType>:: setItem(const ItemType& newData){
    item = newData;
}

template<class ItemType>
ItemType LinkedBTreeNode<ItemType>:: getItem() const {
    return item;
}

template<class ItemType>
bool LinkedBTreeNode<ItemType>:: isLeaf() const {
    if (left == nullptr && right == nullptr) {
        return true;
    }
    return false;
}

template<class ItemType>
LinkedBTreeNode<ItemType>* LinkedBTreeNode<ItemType>:: getLeftChildPtr() const {
    return left;
}

template<class ItemType>
LinkedBTreeNode<ItemType>* LinkedBTreeNode<ItemType>:: getRightChildPtr() const {
    return right;
}

template<class ItemType>
void LinkedBTreeNode<ItemType>:: setLeftChildPtr(LinkedBTreeNode<ItemType>* newLeftChildPtr) {
    left = newLeftChildPtr;
}

template<class ItemType>
void LinkedBTreeNode<ItemType>:: setRightChildPtr(LinkedBTreeNode<ItemType>* newRightChildPtr) {
    right = newRightChildPtr;
}
