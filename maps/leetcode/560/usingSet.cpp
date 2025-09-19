// if number is greater than zero
class Solution {
    public:
        int subarraySum(vector<int>& arr, int k) {
            int n=arr.size();
            vector<int>pre(n,0);
            // prefix sum calculation
            pre[0]=arr[0];
            for(int i=1;i<n;i++){
                pre[i]=arr[i]+pre[i-1];
            }
            unordered_set<int>s;
             int count=0;
            for(int i=0;i<n;i++){
               
                if(pre[i]==k) count++;
                if(pre[i]>k){
                    int rem=pre[i]-k;
                    if(s.find(rem)!=s.end()) count++;
                }
                s.insert(pre[i]);
            }
            return count;
        }
    };
    // using map-> for all number(-ve,0,+ve)
    class Solution {
        public:
            int subarraySum(vector<int>& arr, int k) {
                int n = arr.size();
                vector<int> pre(n, 0);
                // prefix sum calculation
                pre[0] = arr[0];
                for (int i = 1; i < n; i++) {
                    pre[i] = arr[i] + pre[i - 1];
                }
                unordered_map<int, int> mp;
                int count = 0;
                for (int i = 0; i < n; i++) { //
                    if (pre[i] == k)
                        count++;
                    // FOR REMAINING ELEMENT BEHIND CURRENT ELEMENT
                    int rem = pre[i] - k;
                    if (mp.find(rem) != mp.end())
                        count += mp[rem];
        
                    mp[pre[i]]++;
                }
                return count;
            }
        };