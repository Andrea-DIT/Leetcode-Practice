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

	void createTree(Node* now, int size, int total, int& max_value, std::vector<int>& nums)
	{
		if (now == nullptr)
			return;

		int val = 0;
		if (now->val - 1 >= 0)
			val = nums[now->val - 1];
		int new_total = total + val;
		if (new_total > max_value)
			max_value = new_total;
        
		if ((now->val + 2) <= size)
		{
			now->right = new Node(now, now->val + 2);
			createTree(now->right, size, new_total, max_value, nums);
		}

		if ((now->val + 3) <= size)
		{
			now->left = new Node(now, now->val + 3);
			createTree(now->left, size, new_total, max_value, nums);
		}
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
        
		cout << "William1" << endl;
		int max_value = -1;
		int total = 0;
		createTree(tmp, size, total, max_value, nums);
		cout << "William2" << endl;
		deleteNode(root);
		return max_value;
	}
};
