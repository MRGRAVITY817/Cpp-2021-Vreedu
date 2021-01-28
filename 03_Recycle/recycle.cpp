#include <iostream>

using namespace std;

int main(){
  bool running = true;
  int recycleMoney = 0;
  while(running){
    system("clear");
    cout << "===== Recycle Payback Costs =====" << endl
         << " a. Plastic    + $12" << endl
         << " b. Bottle     + $5" << endl
         << " c. Glass      + $10" << endl
         << " d. Vinyl      + $1" << endl
         << " e. Steel      + $9" << endl
         << " f. Bio Waste  - $10" << endl
         << "=================================" << endl
         << " Current Recycle Payback: $ " << recycleMoney << endl
         << "=================================" << endl
         << "Enter character: ";
    char choice = 'a';
    cin >> choice;
    switch(choice){
      case 'a':
        recycleMoney += 12;
        break;
      case 'b':
        recycleMoney += 5;
        break;
      case 'c':
        recycleMoney += 10;
        break;
      case 'd':
        recycleMoney += 1;
        break;
      case 'e':
        recycleMoney += 9;
        break;
      case 'f':
        recycleMoney -= 10;
        break;
      case 'f':
        recycleMoney -= 10;
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
