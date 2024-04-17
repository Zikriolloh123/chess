#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
        //shoh
    if(x1>8 || x2>8 || y1>8 || y2>8)
    {
        cout<<" your must enter 1-8 "<<endl;
    }
    else if(x1<0 || x2<0 || y1<0 || y2<0)
    {
        cout<<" your must enter 1-8 "<<endl;
    }
    else if (abs(x1-x2)==0 and abs(x1-x2)==1||
            abs(x1-x2)==1 and abs(y1-y2)==0||
            abs(x1-x2)==1 and abs(y1-y2)==1)
    {
        cout<<" yes "<<endl;
    }
    else
    {
        cout<<" no "<<endl;
    }
    main();
}
