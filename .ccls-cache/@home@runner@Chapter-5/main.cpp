#include <iostream>
using namespace std;
int main() { 
int startingSize;
  double dailyIncrease;
  int days;
  //input size of population
do{
    cout<<"Enter the starting number of organisms: ";
    cin>>startingSize;
    if(startingSize<2)
      cout<<"Error Starting size must be at least 2"<<endl;
  }
  while(startingSize<2);
  //input daily increase
do{
  cout<< "Enter the average daily population increase (as a percentage): ";
  cin>> dailyIncrease;
  if(dailyIncrease<0){
    cout<< "Error the average daily population cant be negative."<<endl;
  }
}while(dailyIncrease<0);
  //input number of days
do{
  cout<<"Enter the number of days they will multiply: ";
  cin>>days;
  if(days<1)
    cout<< "Error the number of days must be at least 1."<<endl;
}while(days<1);
  //calculate population size for each day
dailyIncrease/=100;
cout << "nDay\tPopulation"<<endl;
cout << "-----------------"<<endl;
  //display population size for each day
 double population=startingSize;
for(int day=1;day<=days;++day)
  cout<< day << "\t" << fixed << setprecision(2) << population << endl;
population+=population*dailyIncrease;
return 0;
}
