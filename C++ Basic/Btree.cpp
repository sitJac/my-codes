BTree_Search(node, key) {
    if(node == null) return null;
    foreach(node.key)
    {
        if(node.key[i] == key) return node.data[i];
            if(node.key[i] > key) return BTree_Search(point[i]->node);
    }
    return BTree_Search(point[i+1]->node);
}
data = BTree_Search(root, my_key);