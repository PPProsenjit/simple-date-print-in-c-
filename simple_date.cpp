#include<iostream>
using namespace std;
class date{
public:
    int dd,mm,yy;
    void input()
    {
        cout<<"Enter date formate type day/month/year: "<<endl;
            cin>>dd>>mm>>yy;
    }
    void output()
    {
        cout<<"result: "<<endl;
        cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
    }
};

int main()
{
    date obj;
    obj.input();
    obj.output();
}
