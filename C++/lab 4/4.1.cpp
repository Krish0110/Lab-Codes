//program to create class that represent time and create constructor

#include<iostream>
using namespace std;

class Time
{
    private:
        int hour;
        int minute;
        int second;
    public:
        Time()
        {
            hour=0;
            minute=0;
            second=0;
        }
        Time(int h,int m,int s)
        {
            hour=h;
            minute=m;
            second=s;
        }
        Time sum(Time t)
        {
            Time addtime;
            addtime.hour=hour+t.hour;
            addtime.minute=minute+t.minute;
            addtime.second=second+t.second;

            if(addtime.second>=60)
            {
                addtime.minute+=addtime.second/60;
                addtime.second=addtime.second%60;
            }

            if(addtime.minute>=60)
            {
                addtime.hour+=addtime.minute/60;
                addtime.minute=addtime.minute%60;
            }

            return addtime;
        }
        void display_24hour()
        {
            cout<<"Display in 24 hour format:"<<endl;
            cout<<"Hour="<<hour<<" Minute="<<minute<<" Second="<<second<<endl;
        }
        void display_12hour()
        {
            cout<<"Display in 12 hour format:"<<endl;
            if(hour>12)
            {
                hour=hour-12;
                cout<<"Hour="<<hour<<" Minute="<<minute<<" Second="<<second<<endl;
            }
            else
                 cout<<"Hour="<<hour<<" Minute="<<minute<<" Second="<<second<<endl;
        }
};

int main()
{
    Time t2(10,40,35),total_t;
    int hr,mins,sec;
    cout<<"Enter the time in hour minute and second:"<<endl;
    cin>>hr;
    cin>>mins;
    cin>>sec;
    Time t1(hr,mins,sec);
    total_t=t1.sum(t2);

    t1.display_24hour();
    t1.display_12hour();

    t2.display_24hour();
    t2.display_12hour();

    total_t.display_24hour();
    total_t.display_12hour();

    return 0;

}
