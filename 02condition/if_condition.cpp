#include <iostream>
using namespace std;
int main()
{
    // if condition
    /*
    int a, b;
    cout << "inter the first value" << endl;
    cin >> a;
    cout << "inter the second value" << endl;
    cin >> b;
    cout << "the value of a is " << a << endl;
    cout << "the value of b is " << b << endl;
*/

    /*
    if (a>b)
    {
        cout<<"a is greater than b"<<endl;
    }
    else
    {
        cout<<"b is greater than a"<<endl;
    }
    // space,tab,enter are not consider
    */
    // if we want to consider space,tab,enter then we use cin.get()
    /*
    int x,y;
    x=cin.get();
    cout<<"the value of  x is"<<x<<endl;
     y=cin.get();
     cout<<"inter the second value"<<endl;
    */
   /*
    if (a > 0)
    {
        cout << "a is positive" << endl;
    }
    else if (a == 0)
    {
        cout << "a is zero" << endl;
    }
    else
    {
        cout << "a is negative" << endl;
    }
    */
   //Even Odd
   /*
   int n;
   cout<<"inter the value of n"<<endl;
   cin>>n;
   if(n%2==0){
    cout<<n <<" is even"<<endl;
   }
   else{
cout<<n<<" is odd"<<endl;
   }
   */
  // print absolute value of integer
  /**
   * int n;
   cout<<"inter the value of n"<<endl;
   cin>>n;
   if(n<0){
    cout<<"the absolute value of n is "<<-n<<endl;
   }
   else{
       cout<<"the absolute value of n is "<<n<<endl;
   }
    return 0;
   */
  // Determine profit loss 
/**
 *   int bp,sp;
    cout<<"inter the value of bp"<<endl;    
    cin>>bp;    
    cout<<"inter the value of sp"<<endl;    
    cin>>sp;
    if(sp>bp){
        cout<<"profit is "<<sp-bp<<endl;
    }
    else if(sp==bp){
        cout<<"no profit no loss"<<endl;
    }
    else{
        cout<<"loss is "<<bp-sp<<endl;
    }   
    
 */
// cal area and perimeter of rectangle

/*
 int l,b;
  cout<<"enter the lenght of rectangle :" <<endl;
    cin>>l;
    cout<<"enter the breadth of rectangle :"<<endl;
    cin>>b;
    int c=l*b;
    int p=2*(l+b);
    if(l==b){
        cout<<"it is a square :"<<l*b<<endl;
        if(c>p){
            cout<<"area is greater than perimeter"<<endl;
        }
        else{
            cout<<"perimeter is greater than area"<<endl;
        }
    }
    else{
        cout<<"it is a rectangle :"<<l*b<<endl;
        if(c>p){
            cout<<"area "<<c<<"is greater than perimeter"<<p<<endl;
        }
        else{
            cout<<"perimeter"<<p<< "s greater than area"<<c<<endl;
        }
    }
*/
// if using multiple condition -> && , || , ! 
// take a positive integer and determine it is divisible by 3 and 5
/**
 * int a;
cout<<"enter the value of a"<<endl;
cin>>a;
if(a%3==0 && a%5==0){
    cout<<a<<" is divisible by 3 and 5"<<endl;
}
else{
    cout<<a<<" is not divisible by 3 and 5"<<endl;
}
 */
// nested if else
int a,b,c;
cout<<"enter the value of a"<<endl;
cin>>a;
cout<<"enter the value of b"<<endl;
cin>>b;
cout<<"enter the value of c"<<endl;
cin>>c;
if(a>b){
    if(a>c){
        cout<<a<<" is greater than "<<b<<" and "<<c<<endl;
    }
    else{
        cout<<c<<" is greater than "<<a<<" and "<<b<<endl;
    }
}
else{
    if(b>c){
        cout<<b<<" is greater than "<<a<<" and "<<c<<endl;
    }
    else{
        cout<<c<<" is greater than "<<a<<" and "<<b<<endl;
    }
}

    return 0;
}