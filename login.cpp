#include <iostream>
#include <fstream>
#include <string>
#include "login.h"

bool IsLoggedIn(){
  std::string username, password, un, pw;

  std::cout << "Enter username: ";
  std::cin >> username;

  std::cout << "Enter password: ";
  std::cin >> password;

  std::ifstream read(username + ".txt");
  getline(read, un);
  getline(read, pw); 

  if(un == username && pw == password){
    return true;
  }

  return false;
}
