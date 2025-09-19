/*


class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> ngi(n, n);   // Next Greater Index
        stack<int> st;

        st.push(n - 1);
        for (int i = n - 2; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] <= arr[i]) {
                st.pop();
            }
            if (!st.empty()) {
                ngi[i] = st.top();
            }
            st.push(i);
        }

        vector<int> ans;
        for (int i = 0; i <= n - k; i++) {
            int j = i;
            int maxi = arr[i];
            while (j < i + k) {
                maxi = arr[j];
                j = ngi[j];  // jump to next greater index
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};

*/
// to reduce the j iteration to check the same number again and again initialixe it globaly
/*


class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> ngi(n, n);   // Next Greater Index
        stack<int> st;

        st.push(n - 1);
        for (int i = n - 2; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] <= arr[i]) {
                st.pop();
            }
            if (!st.empty()) {
                ngi[i] = st.top();
            }
            st.push(i);
        }

        vector<int> ans;
        int j=0;
        for (int i = 0; i <= n - k; i++) {
            //int j = i;
            int maxi = arr[i];
            while (j < i + k) {
                maxi = arr[j];
                if(ngi[j]>=i+k); break;
                j = ngi[j];  // jump to next greater index
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};



*/