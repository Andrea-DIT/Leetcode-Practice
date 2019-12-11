struct Node
{
	Node* parent;
	Node* left;
	Node* right;
	int val;

	Node(Node* p, int v)
	{
		parent = p;
		val = v;
		left = NULL;
		right = NULL;
	}
};

class Solution {

public:

	void createTree(Node* now, int size)
	{
		if (now == nullptr)
			return;

		if ((now->val + 2) <= size)
		{
			now->right = new Node(now, now->val + 2);
			createTree(now->right, size);
		}

		if ((now->val + 3) <= size)
		{
			now->left = new Node(now, now->val + 3);
			createTree(now->left, size);
		}
	}

	void totalVal(Node* now, int total, int& max_value, std::vector<int>& nums)
	{
		if (now == nullptr)
			return;
		
		int val = 0;
		if (now->val - 1 >= 0)
			val = nums[now->val - 1];
		int new_total = total + val;
		if (new_total > max_value)
			max_value = new_total;

		if (now->right)
			totalVal(now->right, new_total, max_value, nums);
		if (now->left)
			totalVal(now->left, new_total, max_value, nums);
	}

	void deleteNode(Node* now)
	{
		if (now == nullptr)
			return;

		if (now->right)
			deleteNode(now->right);
		if (now->left)
			deleteNode(now->left);
		delete now;
	}
    
	int rob(std::vector<int>& nums) {

		int size = nums.size();
		Node* root = new Node(nullptr, -1);
		Node* tmp = root;
        
		//cout << "William1" << endl;
		createTree(tmp, size);
        
		int max_value = -1;
		int total = 0;
		//cout << "William2" << endl;
		totalVal(root, total, max_value, nums);

		//cout << "William3" << endl;
		deleteNode(root);
		return max_value;
	}
};
