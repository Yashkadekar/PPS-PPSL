#include<iostream>
using namespace std;

class Car
{
  public:
  string brand;
  string model;
  int year;
  
};

int main()
{
  Car carobj1;
  carobj1.brand="M G ";
  carobj1.model="Hector ";
  carobj1.year= 2019;
  
  //creating another object of car 
  Car carobj2;
  carobj2.brand="Maruti ";
  carobj2.model=" swift";
  carobj2.year= 2005;
  
  cout<<carobj1.brand<<carobj1.model<<carobj1.year<<endl;
  cout<<carobj2.brand<<carobj2.model<<carobj2.year<<endl;
  
  return 0;
}