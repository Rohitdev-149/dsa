
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue <int> q;
        int n=students.size();
        for(int i=0;i<n;i++){
            q.push(students[i]);
        }
        int i=0;//to traverses on sandwich array
        int count=0;
        while(q.size()>0 && count !=q.size()){ //VIP
            if(q.front()== sandwiches[i]) {
                count =0; //VIP
                q.pop();
                i++;
            }else{
                q.push(q.front());
                q.pop();
                count++; //VIP
            }
        }
        return q.size();
    }
};
