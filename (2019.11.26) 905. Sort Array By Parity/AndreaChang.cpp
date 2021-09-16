class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int>::iterator it_left = A.begin();
        vector<int>::iterator it_right = A.end()-1;

        // two pivot, one traverse from the start, the other one from the end
        int pivot_right = A.size();
        int pivot_left = 1;
        
        // if two pivots have not crossed over
        while (pivot_left < pivot_right) {
            
            if ((*it_right % 2 == 0) && (*it_left % 2 == 1)) {
                // swap two pivots element
                int tmp = *it_left;
                *it_left = *it_right;
                *it_right = tmp;
                // move to next element
                ++pivot_left;
                ++it_left;
                --pivot_right;
                --it_right;
            }
            
            // if left pivot element is odd, skip and go to right 
            if (*it_left % 2 == 0) {
                ++pivot_left;
                ++it_left;
            }
            
            // if right pivot element is even, skip and go to left
            if (*it_right % 2 == 1) {
                --pivot_right;
                --it_right;
            }
        }

        return A;
    }
};