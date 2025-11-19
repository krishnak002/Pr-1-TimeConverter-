#include<iostream>

using namespace std;
class secondconvertor
{
    int min;
    int sec;
    int hour;
    int totalmin;
    int totalsec;
    int remmin;

public:
    void setdetails()
    {
        cout<<"Enter total seconds: ";
        cin>>totalsec;

        totalmin = totalsec/60;
        hour = totalmin/60;
        remmin = totalmin%60;
        sec = totalsec%60;
    }

    void getdetails()
    {
        cout<<"HH:MM:SS "<<"0"<<hour<<":0"<<remmin<<":"<<sec;
    }
};
class hourconverter
{
    int min;
    int sec;
    int hour;
    int totalsec;

public:
    void setdetails()
    {
        cout<<"Enter total hours: ";
        cin>>hour;
        cout<<"Enter total minutes: ";
        cin>>min;
        cout<<"Enter total seconds: ";
        cin>>sec;

        totalsec = (hour*3600) + (min*60) + sec;

}
    void getdetails()
    {
        cout<<"Total seconds = "<<totalsec;
    }
};

int main ()
{
    int choice;
    cout<<"Enter 1 For converting seconds to hour\n";
    cout<<"Enter 2 For converting hour to seconds\n";
    cout<<"Enter your choice: ";
    cin>>choice;

    if (choice == 1)
    {
        secondconvertor sec;
        sec.setdetails();
        sec.getdetails();
    }
    else
    {
        hourconverter hour;
        hour.setdetails();
        hour.getdetails();
    }

    return 0;
}