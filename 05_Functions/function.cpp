#include <iostream>
using namespace std;

// 별점을 고르는 질문
int question(){
  int choice;
  while(true){
    cout << "How is the taste?" << endl;
    cout << "  1  2  3  4  5  " << endl;
    cout << "choice: ";
    cin >> choice;
    if(choice > 5 || choice < 1){
      cout << "Choose between 1~5" << endl;
    }
    else {
      return choice;
    }
  }
  return 0;
}

float average(int* choices, int choiceSize){
  float count = 0;
  for(int i=0; i<choiceSize; i++){
    count += choices[i];
  }
  float avg = count / choiceSize;
  return avg;
}

int main(){
  // 별점 저장소 크기 = 별점 매기는 사람 수
  int choiceSize = 10;
  // 별점을 저장하는 저장소
  int choices[choiceSize];
  // 사람수만큼 설문조사를 반복 진행한다
  for(int i=0; i<choiceSize; i++){
    system("clear");
    cout << "Guest no." << i+1 << endl;
    choices[i] = question();
  }
  // 통계를 내서 평균을 낸다
  float avg = average(choices, choiceSize);
  cout << "Average score for taste: " << avg << endl;

  return 0;
}
