#include<iostream>
#include<unordered_set>
using namespace std;
//operation
/*
insert(value)
erase(value)
find(value)
clear()
size()
empty()
end()
begin()
always O(1) time complexity
always store unique values
*/


int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.erase(3);
cout<<s.size();

    // to find an element
    // s.find() -> seaches for an element in the set and if not found then  returns last element->s.end()
    /*
    !=end() -> element is present
    ==end() -> element is not present
    */
    if(s.find(3)!=s.end()){
        cout<<"3 is present"<<endl;
    }
    else{
        cout<<"3 is not present"<<endl;
    }
    // to traverse o set we use foor each loop
    for(int elm:s){
        cout<<elm<<" ";
    }
}