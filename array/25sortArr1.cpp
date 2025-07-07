//sort the array of 0's and 1's -> Two pass method

#include <iostream>
#include <vector>
using namespace std;
void sortArr(vector <int> &v){
    int n=v.size();
    int nooz =0;
    int noo =0;
    for(int i=0;i<n;i++){
        if(v[i]==0) nooz++;
        else noo++;
    }
    for(int i=0;i<n;i++){
       if(i<noo) v[i] = 0;
       else v[i]=1;
    }
     for(int i=0;i<n;i++){
        cout<<v[i];
    }
}

int main()
{
    int n;
    cout<<"NUmber of elements"<<endl;
    cin>>n;
   vector<int> v;
   cout<<"Enter the elements:"<<endl;
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
   }
    cout<<"the elements are :";
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" "<<endl;
   }
   sortArr(v);

}