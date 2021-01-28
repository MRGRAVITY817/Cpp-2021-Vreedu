#include <iostream>

using namespace std;

// If you want to use main before defining funcions,
// At leats you need to declare it.
int* gugudan(int a);
void readGugudan(int* arrPt);

int main() {
  int* arrPt;
  int inputNumber = 0;
  cout << "Input your number: ";
  cin >> inputNumber; 
  // 1. 구구단 만들기
  arrPt = gugudan(inputNumber);
  // 2. 구구단 읽기
  readGugudan(arrPt);

  return 0;
}

int* gugudan(int a){
  static int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  for(int i=0; i<10; i++){
    arr[i] *= a;
  }
  int* arrPt = arr;
  return arrPt;
}

void readGugudan(int* arrPt){
  cout << "Array Element :"; 
  for(int i=0; i<10; i++){
    cout << " " << arrPt[i];
  }
  cout << endl;
  return;
}


