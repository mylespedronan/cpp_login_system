#include <iostream>
#include <fstream>
#include <string>
#include "login.h"

int main() {
  int choice;

  std::cout << "Select an option:\n";
  std::cout << "1:\tRegister\n";
  std::cout << "2:\tLogin\n";
  std::cout << "\n";
  std::cout << "Your Choice: ";
  std::cin >> choice;
  std::cout << "\n";

  if(choice == 1){
    std::string username, password;

    std::cout << "Create a username: ";
    std::cin >> username;

    std::cout << "Create a password: ";
    std::cin >> password;

    std::ofstream file;
    file.open(username + ".txt");
    file << username << std::endl << password;
    file.close();

    main();
  } else if(choice == 2){
    bool status = IsLoggedIn();

    if(!status){
      std::cout << "Failed to Login!" << std::endl;
      system("PAUSE");
      return 0;
    } else {
      std::cout << "Successfully Logged In" << std::endl;
      system("PAUSE");
      return 1;
    }
  } else {
    std::cout << "Incorrect input.\n" << std::endl;

    system("PAUSE");
    return 0;
  }
}
