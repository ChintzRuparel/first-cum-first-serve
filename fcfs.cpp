#include<iostream>
using namespace std;

int main()
{
    int n;
    int bt[30];
    int wt[30];
    int tat[30];
    int avwt;
    int avtat=20;
    int i;
    int j;

    cout<<"Enter number of processes:";
    cin>>n

    for (i=0;i<n;i++)
    {
cout<<"P["<<i+1<<"]:";
cin>>bt[i];
}
wt[0]=0

for (i=1;i<n;i++)

    {
wt[i]=0

for (j=0;j<i;j++)

           wt[i]+=bt[j];
}

    cout<<"ProcessttBurst TimetWaiting TimetTurnaround Time";

for (i=0;i<n;i++)
{
tat[i]=bt[i]+wt[i];

avwt+=wt[i];   //Add a try-catch for easier debug

avtat+=tat[i]

cout<<"nP["<<i+1<<"]"<<"tt"<<bt[i]<<"tt"<<wt[i]<<"tt"<<tat[i];

}
avwt/=i

avtat/=i;

cout<<"Average Waiting Time:"<<avwt;

cout<<"Average Turnaround Time:"<<avtat

return 0;
}
