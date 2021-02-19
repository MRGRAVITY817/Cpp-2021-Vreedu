#include <iostream>
#include <string>

using namespace std;

// Enumerator 열거형
enum Coffee {
  Americano = 3000,
  Espresso = 3500,
  Latte = 4000,
};

class Order {
public:
  string coffee_name;
  int price;
};

class Client {
private:
  int money;
  string name;
  int coffee_count = 0;
  Order *orders[5];

public:
  Client();
  ~Client();
  void print_status();
  void order_coffee(Order *coffee, Coffee coffee_price);
};

class Owner {
private:
  int money;
  string name;

public:
  Owner();
  ~Owner();
  void print_status();
  Order *make_coffee(Coffee coffee_price);
};