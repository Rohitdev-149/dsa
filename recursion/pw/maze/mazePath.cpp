// #include<iostream>
// using namespace std;
// int maze(int sr,int sc,int er,int ec){
//     if(sr>er || sc>ec) return 0;
//     if(sr==er && sc==ec) return 1;
//   int rightStep=maze(sr,sc+1,er,ec);
//   int downtStep=maze(sr+1,sc,er,ec);
// return rightStep+downtStep;
// }
// int main(){
//    cout<< maze(0,0,2,2);
// }


// print path
// #include <iostream>
// using namespace std;
// void path(int sr, int sc, int er, int ec, string s)
// {
//     if (sr > er || sc > ec)   return;
      
//      if (sr == er && sc == ec) //destination reach
//         {
//             cout << s<<endl;
//         };
       
//     path(sr, sc + 1, er, ec, s + 'R'); //right move
//     path(sr + 1, sc, er, ec, s + 'D'); //down move
// }
// int main()
// {
//     path(0, 0, 2, 2, "");
// }
/*
RRDD
RDRD
RDDR
DRRD
DRDR
*/
//with two parameters
#include <iostream>
using namespace std;
void path(int sr, int sc,string s)
{
    if (sr <1 || sc <1)   return;
      
     if (sr == 1 && sc == 1) //destination reach
        {
            cout << s<<endl;
        };
       
    path(sr, sc - 1,s + 'R'); //right move
    path(sr - 1, sc,s + 'D'); //down move
}
int main()
{
    path(3,3, "");
}