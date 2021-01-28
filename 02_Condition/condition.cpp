#include <iostream>

using namespace std;

int main() {
  int age = 0;
  while(true){
    cout << "Type in age: ";
    cin >> age;
    if(age > 39){
      cout << "나는 30대가 넘었어ㅠㅠ" << endl;
    }
    else if(age >= 30 && age <= 39){
      cout << "나는 30대야" << endl;
    }
    else {
      cout << "나는 30대가 아직 아니지롱" << endl;
    }
  }
  return 0;
}
