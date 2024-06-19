#include "elevator.hpp"
using namespace std;
int main()
{

    printf("%s ",__DATE__);
    printf("%s\n",__TIME__);
    elevator e(15);
    int a,b;
    cout<<"This elevator has 15 floors."<<endl;
    while(true)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED);
        cout<<"---Please choose your operation---"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
        cout<<"1.Get up"<<endl<<"2.Get down"<<endl<<"3.Leave"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY);
        cin>>a;
        if(a==1)
        {
            cout<<"The current floor is "<<e.display_floor()<<endl;
            cout<<"Input your floor please!"<<endl;
            cin>>b;
            e.set_up(b);

        }
        else if(a==2)
        {
            cout<<"The current floor is "<<e.display_floor()<<endl;
            cout<<"Input your floor please!"<<endl;
            cin>>b;
            e.set_down(b);
        }
        else if(a==3)
        {
           break;
        }
        else
        {
            cout<<"Error"<<endl;
        }

    }
}
