// Input: v = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]
// two pass method

#include <iostream>
#include <vector>
using namespace std;

    void sortColors(vector<int>& v) {
      int n=v.size();
      int noz=0;
      int noo=0;
      int notw=0;
      for(int i=0;i<n;i++){
        if(v[i]==0){
            noz++;
        }
         if(v[i]==1){
            noo++;
        }
         if(v[i]==2){
            notw++;
        }       
      }
      for(int i=0;i<n;i++){
        if(i<noz) v[i]=0;
       else if(i<(noo+noz)) v[i]=1;
       else v[i]=2;
      }
      return;
    }

main(){
     vector<int> v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
   
    cout << "the elements are :" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
   sortColors(v);
    cout << "the sorted elements are :" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}