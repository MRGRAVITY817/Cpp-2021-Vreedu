#include <iostream>
#include <string>

using namespace std;

class Fruit
{
public:
  int sweetness;
  string color;
  bool isSeed;
  int vitamin;
  float weight;

  Fruit() {}

  Fruit(int sweetness, string color, bool isSeed, float weight, int vitamin)
  {
    this->sweetness = sweetness;
    this->color = color;
    this->isSeed = isSeed;
    this->weight = weight;
    this->vitamin = vitamin;
  }

  ~Fruit()
  {
  }

  void eat()
  {
    cout << "냠냠" << endl;
  }
};

class Apple : public Fruit
{
public:
  Apple()
  {
    this->sweetness = 5;
    this->color = "Red";
    this->isSeed = false;
    this->weight = 129.1;
    this->vitamin = 133;
  }
  ~Apple(){};

  void eat()
  {
    cout << "아삭아삭" << endl;
  }
};

class Orange : public Fruit
{
public:
  Orange()
  {
    this->sweetness = 5;
    this->color = "Orange";
    this->isSeed = false;
    this->weight = 129.1;
    this->vitamin = 133;
  }
  ~Orange(){};
  void eat()
  {
    cout << "제주제주" << endl;
  }
};

int main()
{
  Apple *apple = new Apple();
  // Apple apple;
  // apple.sweetness
  Orange *orange = new Orange();
  Fruit *fruit = new Fruit();

  apple->eat();
  orange->eat();

  delete apple;
  delete orange;
  return 0;
}