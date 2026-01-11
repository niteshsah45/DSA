class Solution {
public:
 int largestRectangleArea(vector<int>& heights) {
        stack<int> st;

        int maxArea = 0;

        heights.push_back(0);

        for (int i = 0; i < heights.size(); i++) {

            while (!st.empty() && heights[i] < heights[st.top()]) {
                int height = heights[st.top()];
                st.pop();
                int width = st.empty() ? i : i - st.top() - 1;
                maxArea = max(maxArea, height * width);
            }

            st.push(i);
        }

        return maxArea;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();
        int maxarea=0;
        vector<int> height(m,0);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){

                if(matrix[i][j]=='1'){

                    height[j]++;
                }
                else{
                    height[j]=0;
                }
            }
            maxarea = max(maxarea,largestRectangleArea(height));
        }
        return maxarea;
        
    }
};