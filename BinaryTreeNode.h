class BinaryTreeNode{
	public:
		BinaryTreeNode(){};
		BinaryTreeNode(BinaryTreeNode* p, int cap, int bin);
       
       public:
		BinaryTreeNode *lchild;
		BinaryTreeNode *rchild;
		BinaryTreeNode *parent;
		int capacity;
		int binNumber;

		void inOrder() {
			if(this->lChild != NULL) {
				this->lChild->inOrder();
			}
			if(this->rChild != NULL) {
				this->rChild->inOrder();
			}
			std::cout << this.capacity << std::endl;
		}
};