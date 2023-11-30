#include <iostream>
using namespace std;

int main() {
  string cars[6] = {"Volvo", "BMW", "Ford", "Mazda", "Maserati", "Vauxhall"};

  for (int i = 0; i < 6; i++) {
    cout << cars[i] << "\n";
  
}

  cout << "\nWhich car do you want? (0 - 5)\n";
  
  int carChosen;
  cin >> carChosen;

  cout << "You've chosen: " << carChosen;
  cout << "\nThe car is a " << cars[carChosen];
  
}

