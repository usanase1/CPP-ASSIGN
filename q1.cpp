#include<iostream>
using namespace std;
int calculatere(int s_Time, int e_Time)
{ 
    int t_hrs= e_Time-s_Time;
    int ratePerHour=0;
    if((s_Time>=0&& s_Time<7) || (e_Time>21 && e_Time<=24))
    
{
    ratePerHour=500;}
    else if((s_Time>=7 && s_Time<14) || (e_Time>19 && e_Time<=21))
    {
    ratePerHour=1000;}
    else if(s_Time>=14 && e_Time<=19)
    {
    ratePerHour=1500;
}
int rentalamount=t_hrs*ratePerHour;
return rentalamount;
}
int main ()
{
    int s_Time, e_Time;
    cout<<"Enter the starting time:\n";
    cin>>s_Time;
    cout<<"Enter the ending time:\n";
    cin>>e_Time;
    int rentalamount=calculatere(s_Time,e_Time);
    cout<<"Rental Amount:"<<rentalamount<<"frw"<<endl;
    return 0;
}


