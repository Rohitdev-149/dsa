#include <iostream>
using namespace std;
void usa(){
    cout<<"you are in USA"<<endl;
}

void ind(){
    cout<<"you are in India"<<endl;
    cout<<"you are in ?"<<endl;
    usa();
}

int main(){
cout<<"you are in main"<<endl;
ind();
return 0;   // return is used to end the function
}