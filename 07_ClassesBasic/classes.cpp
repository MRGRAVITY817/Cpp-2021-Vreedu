#include <iostream>
#include <string>

using namespace std;

class Client
{
public:
  // Property
  string email;
  string password;
  int age;
  // Method
  void makeCredentials()
  {
    cout << "Input Email: ";
    getline(cin, this->email);
    cout << "Input Password: ";
    getline(cin, this->password);
    cout << "Input Age: ";
    cin >> age;
    cin.ignore();
  }

  void printInfo()
  {
    cout << this->email << " "
         << this->password << " "
         << this->age << " " << endl;
  }
};

int main()
{
  Client clientList[5];

  for (int i = 0; i < 5; i++)
  {
    clientList[i].makeCredentials();
  }

  for (int i = 0; i < 5; i++)
  {
    clientList[i].printInfo();
  }
  return 0;
}
