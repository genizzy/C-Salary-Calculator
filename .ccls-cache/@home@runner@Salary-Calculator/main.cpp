#include <iostream>
using namespace std;
// function with input

int GetValueFromUser() { // defines the function
  int newv;
  cout << "Hello Welcome to the Salary Calculator\n";
  cout << "How much do you earn in a month? ";
  cin >> newv;
  return newv;
}
int main() {
  int number(GetValueFromUser());
  cout << "That means you earn $"<< number * 12; cout<<" per year\n";

}

