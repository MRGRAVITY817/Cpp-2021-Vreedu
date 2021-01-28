#include <iostream>
using namespace std;

//별점을고르는 질문 
int question(){
  int choice;
  cout << "How is the clean?" << endl;
  cout << "  1  2  3  4  5  " << endl;
  cout << " choice:  ";
  cin >> choice;
  if(choice > 5 || choice < 1){
    cout << "Choose between 1~5" << endl;
  }  
  else {
    return choice;
  }
  return 0;
}

float average(int* choices, int choicesize){
  float count = 0;
  for(int i=0; i<choicesize; i++){
    count += choices[i];
  }
  float avg = count / choicesize;
  return avg;
}

int main(){
  int choicesize = 10;
  int choices[choicesize];
  for(int i=0; i<choicesize; i++){
    system("clear");
    cout << "Guest no." << i+1 << endl;
    choices[i] =question();
  }
  float avg = average(choices, choicesize);
  cout << "average score for clean: " << avg << endl;

  return 0;
}
