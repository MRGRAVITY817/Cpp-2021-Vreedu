#include "main.hpp"

Owner::Owner() {
  cout << "Enter name: ";
  getline(cin, this->name);
  cout << "Enter money: ";
  cin >> this->money;
  cin.ignore();
  cout << "Saved Owner info" << endl;
}

Owner::~Owner() { cout << "Good bye " << this->name << endl; }

void Owner::print_status() {
  cout << "Name: " << this->name << endl;
  cout << "Money: " << this->money << endl;
}

Order *Owner::make_coffee(Coffee coffee_price) {
  this->money += coffee_price;

  Order *order = new Order();
  order->coffee_name = "Americano";
  order->price = coffee_price;

  return order;
}