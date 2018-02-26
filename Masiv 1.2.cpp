#include <iostream>

using namespace std;

int main()
{
int sum=0;
float avg;
int array[8]={3,7,15,20,75,85,90,-3};
for(int i=0;i<8;i++)
{
sum+=array[i];
}
avg=sum/8.0;
cout<<"Average:"<<avg;
    return 0;
}
