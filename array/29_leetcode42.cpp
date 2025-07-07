//Trapping Rain Water

#include <iostream>
#include <vector>
using namespace std;
//      int trap(vector<int>& height) {
//         int n=height.size();
//         vector<int> prev(n);
//         prev[0]=-1;
//          int pmax=height[0];
//         for(int i=1;i<n;i++){
//             prev[i]=pmax;
//             if(pmax<height[i]){
//                 pmax=height[i];
//             }
//         }
//         vector<int> nex(n);
//         nex[n-1]=-1;
//         int nmax=height[n-1];
//         for(int i=n-2;i>=0;i--){
//            nex[i]=nmax;
//             if(nmax<height[i]){
//                 nmax=height[i];
//             }
//         }
//     //   int minArr[n];
//     //   for(int i=0;i<n;i++){
//     //     minArr[i]=min(prev[i],nex[i]);
//     //   }
//  for(int i=0;i<n;i++){
//         prev[i]=min(prev[i],nex[i]);
//        }

//       int water=0;
//       for(int i=0;i<n-1;i++){
//         if(height[i]<prev[i]){
//         water+=(prev[i]-height[i]);
//         }
//       }
//       return water;
//     }

    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> prev(n);
        prev[0]=-1;
         int max=height[0];
      for(int i=1;i<n;i++){
        prev[i]=max;
        if(max<height[i]){
            max=height[i];
        }
      }
      prev[n-1]=-1;
      max=height[n-1];
      for(int i=n-2;i>=0;i--){
        if(max<prev[i]){ 
            prev[i]=max;
      }
      if(max<height[i]){
        max=height[i];
      }
      }
      int water=0;
      for(int i=0;i<n-1;i++){
        if(height[i]<prev[i]){
        water+=(prev[i]-height[i]);
        }
      }
      return water;
    }
int main(){
     vector<int> height;

    height.push_back(0);
    height.push_back(1);
    height.push_back(0);
    height.push_back(2);
    height.push_back(1);
    height.push_back(0);
    height.push_back(1);
    height.push_back(3);
    height.push_back(2);
    height.push_back(1);
    height.push_back(2);
    height.push_back(1);
   
    //[0,1,0,2,1,0,1,3,2,1,2,1]
    cout<<trap(height);
}