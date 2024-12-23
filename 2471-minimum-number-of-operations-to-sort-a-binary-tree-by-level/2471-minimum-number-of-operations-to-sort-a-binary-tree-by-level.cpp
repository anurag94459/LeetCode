class Solution {
public:
    int minimumOperations(TreeNode* root) {
        queue<TreeNode*> queue;
        queue.push(root);
        int totalSwaps = 0;

        // Process tree level by level using BFS
        while (!queue.empty()) {
            int levelSize = queue.size();
            vector<int> levelValues(levelSize);

            // Store values of current level and add children to queue
            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = queue.front();
                queue.pop();
                levelValues[i] = node->val;

                if (node->left != nullptr) queue.push(node->left);
                if (node->right != nullptr) queue.push(node->right);
            }

            // Add minimum swaps needed for current level
            totalSwaps += getMinSwaps(levelValues);
        }
        return totalSwaps;
    }

private:
    int getMinSwaps(vector<int>& original) {
        int swaps = 0;
        vector<int> target = original;
        sort(target.begin(), target.end());

        unordered_map<int, int> pos;
        for (int i = 0; i < original.size(); i++) {
            pos[original[i]] = i;
        }

        for (int i = 0; i < original.size(); i++) {
            if (original[i] != target[i]) {
                swaps++;

                // Update position of swapped values
                int curPos = pos[target[i]];
                pos[original[i]] = curPos;
                swap(original[curPos], original[i]);
            }
        }
        return swaps;
    }
};