#include <iostream>
#include <string>

// Preprocessor
#define LIST_SIZE 5

using namespace std;

void createEmail(string* emailList, int index);
void createPassword(string* passwordList, int index);
void createCredentials(int count, string* emailList, string* passwordList);

void printCredentials(string* emailList, string* passwordList);

bool isEmailOk(string email, string* emailList);
bool isPasswordOk(string password, string* passwordList);
void login(string* emailList, string* passwordList);

int main(){
  // 1. Make Email and Password list
  string emailList[LIST_SIZE];
  string passwordList[LIST_SIZE];

  char selectKey;
  bool running = true;
  int count = 0;

  while(running){
    //system("clear");
    // 1.5. Print all the Emails and Passwords
    printCredentials(emailList, passwordList);
    cout << "============ Select ==============" << endl
         << " a. Create Email and Password" << endl
         << " b. Log In" << endl
         << " q. Quit" << endl;
    cout << "Choose One: ";
    cin >> selectKey;
    cin.ignore();

    switch(selectKey){
      case 'a': 
        // 2. Create Email and Password
        count++;
        createCredentials(count, emailList, passwordList); 
        break;
      case 'b': 
        // 3. Perform Login
        login(emailList, passwordList);
        break;
      case 'q':
        running = false;
        break;
      default: 
        break;
    }
  }
  return 0;
}

void createEmail(string* emailList, int index){
  string email;
  //system("clear");
  cout << "Enter email: ";
  getline(cin, email);
  emailList[index] = email;
  // cout << "Email Successfully Saved!" << endl;
  return;
}

void createPassword(string* passwordList, int index){
  string password;
  //system("clear");
  cout << "Enter password: ";
  getline(cin, password);
  passwordList[index] = password;
  // cout << "Password Successfully Saved!" << endl;
  return;
}

void createCredentials(int count, string* emailList, string* passwordList){
  if(count > LIST_SIZE){
    cout << "List is Full!" << endl;
  }
  else {
    createEmail(emailList, count-1);
    createPassword(passwordList, count-1);
    cout << "User info saved!" << endl;
  }
  return;
}
  
void printCredentials(string* emailList, string* passwordList){
  cout << "============= Emails =============" << endl;
  for(int i=0; i<LIST_SIZE; i++) {
    cout << "   " << emailList[i] << endl;
  }
  cout << "=========== Passwords ============" << endl;
  for(int i=0; i<LIST_SIZE; i++) {
    cout << "   " << passwordList[i] << endl;
  }
  return;
}

bool isEmailOk(string email, string* emailList){
  for(int i=0; i<LIST_SIZE; i++){
    if(emailList[i] == email){
      return true;
    }
  }
  cout << "Wrong Email" << endl;
  return false;
}

bool isPasswordOk(string password, string* passwordList){
  for(int i=0; i<LIST_SIZE; i++){
    if(passwordList[i] == password){
      return true;
    }
  }
  cout << "Wrong Password" << endl;
  return false;
}

void login(string* emailList, string* passwordList){
  string email, password;
  //system("clear");
  cout << "Type email and password." << endl;
  cout << "EMAIL: ";
  getline(cin, email);
  cout << "PASSWORD: ";
  getline(cin, password);
  if(isEmailOk(email, emailList) && isPasswordOk(password, passwordList)){
    cout << "Successfuly Logged In!" << endl;
    return;
  }
  cout << "Log In Failed" << endl;
  return;
}
