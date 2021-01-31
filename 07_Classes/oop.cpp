#include <iostream>
#include <string>

#define LIST_SIZE 5

using namespace std;

class Client {
  public:
    // Properties: are variables in class object
    string email;
    string password; 
    string favoriteFood;
    // Methods: are functions in class object
    // Constructor: is function which is executed when class object is created
    Client(){
      cout << "Enter email: ";
      getline(cin, this->email);
      cout << "Enter password: ";
      getline(cin, this->password);
      cout << "Enter favorite food: ";
      getline(cin, this->favoriteFood);
    }
    // Destructor: is function which is exectuted when class object is deleted
    ~Client(){
      cout << "Client deleted" << endl;
    }
};

class Admin {
  private: 

  public:
    void printCredentials(Client* clientList[], int count){
      cout << "============== Clients ==============" << endl;
      for(int i=0; i<count; i++){
        cout << "Email:     " << clientList[i]->email << endl
             << "Password:  " << clientList[i]->password << endl
             << "Food:      " << clientList[i]->favoriteFood << endl
             << "=====================================" << endl;
      }
      return;
    }
    void login(Client* clientList[]){
      string email, password;
      cout << "Type email: ";
      getline(cin, email);
      cout << "Type password: ";
      getline(cin, password);
      for(int i=0; i<LIST_SIZE; i++){
        if(clientList[i]->email == email && clientList[i]->password == password){
          cout << "Login succeeded" << endl;
          return;
        }
      }
      cout << "Login Failed" << endl;
      return;
    }
    void findCredentials(Client* clientList[]){
      string food;
      cout << "Type your favorite food: ";
      getline(cin, food);
      for(int i=0; i<LIST_SIZE; i++){
        if(clientList[i]->favoriteFood == food){
          cout << "Your Email:    " << clientList[i]->email << endl;
          cout << "Your Password: " << clientList[i]->password << endl;
          return;
        }
      }
      cout << "Given food doesn't exist." << endl;
      return;
    }
};

int main() {
  Client* clientList[LIST_SIZE];
  Admin* admin = new Admin();
  char selectKey;
  bool running = true;
  int count = 0;
  while(running){
    //system("clear");
    // 1.5. Print all the Emails and Passwords
    admin->printCredentials(clientList, count);
    cout << "============ Select ==============" << endl
         << " a. Create Email and Password" << endl
         << " b. Log In" << endl
         << " c. Find Email/Password" << endl
         << " q. Quit" << endl;
    cout << "Choose One: ";
    cin >> selectKey;
    cin.ignore();

    switch(selectKey){
      case 'a': 
        // 2. Create Email and Password and Food
        clientList[count] = new Client();
        count++;
        break;
      case 'b': 
        // 3. Perform Login
        admin->login(clientList);
        break;
      case 'c':
        // 4. Find credentials
        admin->findCredentials(clientList);
        break;
      case 'q':
        // 5. Turn off the program
        running = false;
        break;
      default: 
        break;
    }
  }
  delete admin;
  return 0;
}
