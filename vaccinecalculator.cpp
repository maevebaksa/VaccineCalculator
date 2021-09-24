//Vaccine Calculator - Maeve Baksa - 09.23.2021

#include <iostream>
#include <string>

using namespace std;

int main(){
  int age;

  //ask for age
  cout << "Please enter your age?";
  cin >> age;

  //check if your age is less than 12, between 12 and 18 or greater than 18.
  if (age < 12){
    cout << "You are not eligible for any vaccine. Please wait until you are 12. \n";
  }
  else if (age < 18 && age >= 12){
    cout << "You are eligible for only the Pfizer vaccine. \n";
  }
  else{
    cout << "You are eligible for any vaccine. \n";
  }

  //done
  return 0;
}