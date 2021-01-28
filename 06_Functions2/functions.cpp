#include <iostream>

#define LIST_SIZE 5
#define INPUT_LENGTH 20
#define EMAIL_LIST_SIZE LIST_SIZE
#define PASSWORD_LIST_SIZE LIST_SIZE
#define EMAIL_LENGTH INPUT_LENGTH 
#define PASSWORD_LENGTH INPUT_LENGTH 

using namespace std;

void allocateList(char **list);
void createEmail(char* email);
void createPassword(char* password);
void printCredentials(char** emailList, char** passwordList);
bool isEmailOk(char* email, char** emailList);
bool isPasswordOk(char* password, char** passwordList);
void login(char* email, char* password, char** emailList, char** passwordList);

int main(){
  // 1. Make Email and Password list
  char **emailList;
  char **passwordList;
  allocateList(emailList);
  allocateList(passwordList);

  char selectKey;
  bool running = true;
  while(running){
    // system("clear");
    // 1.5. Print all the Emails and Passwords
    // printCredentials(emailList, passwordList);
    cout << "============ Select ==============" << endl
         << " a. Create Email and Password" << endl
         << " b. Log In" << endl
         << " q. Quit" << endl;
    cout << "Choose One: ";
    cin >> selectKey;

    switch(selectKey){
      case 'a': 
        // 2. Create Email and Password
        createEmail(emailList[0]);
        createPassword(passwordList[0]);
        break;
      case 'b': 
        // 3. Perform Login
        login(emailList[0], passwordList[0], emailList, passwordList);
        break;
      case 'q':
        running = false;
        break;
    }
  }
  return 0;
}

void allocateList(char **list) {
  list = new char *[LIST_SIZE];
  char blank[20] = "Empty";
  for(int i=0; i<LIST_SIZE; i++){
    list[i] = new char[INPUT_LENGTH];
    list[i] = blank;
  }
}

void createEmail(char* email){
  cout << "Enter email: ";
  try {
    cin.getline(email, EMAIL_LENGTH);
    // if the input email length is longer than 20
    // throw an error
    if(sizeof(email)/sizeof(email[0]) > EMAIL_LENGTH) {
      throw sizeof(email)/sizeof(email[0]);
    }
    cout << "Email Successfully Saved!" << endl;
    return;
  } catch (int inputSize) {
    cout << "[Error]" << endl;
    cout << "Your input size is " << inputSize << ", which is longer than " << EMAIL_LENGTH << endl;
    return;
  }
}

void createPassword(char* password){
  cout << "Enter password: ";
  try {
    cin.getline(password, PASSWORD_LENGTH);
    // if the input password length is longer than 20
    // throw an error
    if(sizeof(password)/sizeof(password[0]) > PASSWORD_LENGTH) {
      throw sizeof(password)/sizeof(password[0]);
    }
    cout << "Password Successfully Saved!" << endl;
    return;
  } catch (int inputSize) {
    cout << "[Error]" << endl;
    cout << "Your input size is " << inputSize << ", which is longer than " << PASSWORD_LENGTH << endl;
    return;
  }
}

void printCredentials(char** emailList, char** passwordList){
  cout << "============= Emails =============" << endl;
  for(int i=0; i<EMAIL_LIST_SIZE; i++) {
    cout << "   " << emailList[i] << endl;
  }
  cout << "=========== Passwords ============" << endl;
  for(int i=0; i<PASSWORD_LIST_SIZE; i++) {
    cout << "   " << passwordList[i] << endl;
  }
  cout << "==================================" << endl;
  return;
}

bool isEmailOk(char* email, char** emailList){
  for(int i=0; i<EMAIL_LIST_SIZE; i++){
    if(emailList[i] == email){
      return true;
    }
  }
  cout << "Wrong Email" << endl;
  return false;
}

bool isPasswordOk(char* password, char** passwordList){
  for(int i=0; i<EMAIL_LIST_SIZE; i++){
    if(passwordList[i] == password){
      return true;
    }
  }
  cout << "Wrong Password" << endl;
  return false;
}

void login(char* email, char* password, char** emailList, char** passwordList){
  if(isEmailOk(email, emailList) && isPasswordOk(password, passwordList)){
    cout << "Successfuly Logged In!" << endl;
    return;
  }
  cout << "Log In Failed" << endl;
  return;
}