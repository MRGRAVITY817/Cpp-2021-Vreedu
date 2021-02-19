#include "main.hpp"

Client::Client() {
  cout << "Enter name: ";
  getline(cin, this->name);
  cout << "Enter money: ";
  cin >> this->money;
  cin.ignore();
  cout << "Saved Client info" << endl;
}

Client::~Client() { cout << "Good bye " << this->name << endl; }

void Client::print_status() {
  cout << "Name: " << this->name << endl;
  cout << "Money: " << this->money << endl;

  cout << "Coffee" << endl;
  for (int i = 0; i < coffee_count; i++) {
    cout << "Coffee Price: " << this->orders[i]->coffee_name << endl;
  }
}

void Client::order_coffee(Order *coffee, Coffee coffee_price) {
  // 현재 금액에서 주문한 커피값을 뺀다
  this->money = this->money - coffee_price;
  // 커피를 orders에 추가한다.
  this->orders[coffee_count] = coffee;
  this->coffee_count++;
}