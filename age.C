/*Tyler Allen
CS111
3-17-2015
This program will receive an unknown number of ages and output the average as well as oldest and youngest ages*/
#include <iostream>
using namespace std;
int main(){
  int count=0;
  int oldest;
  int youngest;
  double avg;
  int age;
  int total=0;
  //declare variables
  cout<<"Emter an age: ";
  cin>>age;
  youngest=age;
  oldest=age;
  //ask for input and assign input to age as well as youngest and oldest
  while(age>=0)
    {
      count++;
      total+=age;
      //add age to total
      if(age<youngest)
	{
	  youngest=age;
	}
      if(age>oldest)
	{
	  oldest=age;
	}
      cout<<"Emter an age: ";
      cin>>age;
    }
  if(count==0)//if only a negative number was entered
    cout<<"No ages were entered"<<endl;
  else
    {//outputa
      avg=(double)total/count;
  cout<<avg<<" (average age)"<<endl;
  cout<<oldest<<" (oldest)"<<endl;
  cout<<youngest<<" (youngest)"<<endl;
    }
  return 0;
}
