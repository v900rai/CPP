#include<iostream>
using namespace std;
int main()
{
    int x;
    int y;
    cout<<"x";
    cin>>x;
    cout<<"y";
    cin>>y;
    int z;
    z=y;
    y=x;
    x=z;
    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
   return 0;

}