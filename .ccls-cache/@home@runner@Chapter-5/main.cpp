#include <iostream>

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
    }while(startingSize<2);
  //input daily increase
do{
  cout<< "Enter the average daily population increase (as a percentage): ";
  cin>> dailyIncrease;
  if(dailyIncrease<0){
    cout<< "Error the average daily population cant be negative."<<endl;
  }
}while(dailyIncrease<0);