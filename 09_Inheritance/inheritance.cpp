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
    cout << "꾸에에에엑" << endl;
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
  ~Apple()
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
  ~Orange()
  {
    cout << "제주제주" << endl;
  }
};

int main()
{
  Apple *apple = new Apple();
  Orange *orange = new Orange();

  // Apple
  cout << apple->sweetness << endl;
  cout << apple->color << endl;
  cout << apple->isSeed << endl;
  cout << apple->weight << endl;
  cout << apple->vitamin << endl;
  // Orange
  cout << orange->sweetness << endl;
  cout << orange->color << endl;
  cout << orange->isSeed << endl;
  cout << orange->weight << endl;
  cout << orange->vitamin << endl;

  delete apple;
  delete orange;
  return 0;
}