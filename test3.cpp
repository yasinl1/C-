#include <iostream>

void hello() {
  std::cout <<  "Hello Yasin enter your age";
  int age;
  std::cin >> age;
  std:: cout << " yasin is " << age << " years old";
    
}

int whatsMyAge() {

  std::cout <<  "Hello Yasin enter your age";
  int age;
  std::cin >> age;

  return age;
}

std::string whatsMyName() {

  std::cout << "Now enter your name: \n";
  std::string name;
  std::cin >> name;

  return name;
}

void outputDetails(int age, std::string name) {

  std::cout << "Your name is " << name << ", and you're " << age << " years old!";

}
  
int main() {

  int ageReceived = whatsMyAge();
  std::string nameReceived = whatsMyName();

  outputDetails(ageReceived, nameReceived);
  

}


