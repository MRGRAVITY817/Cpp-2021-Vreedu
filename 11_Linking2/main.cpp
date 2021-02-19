#include "main.hpp"

int main() {
  Client *client = new Client();
  Owner *owner = new Owner();

  Order *order = owner->make_coffee(Espresso);
  client->order_coffee(order, Espresso);

  owner->print_status();
  client->print_status();

  delete client, owner;
  return 0;
}