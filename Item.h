#include "Groceries.h"

class Item
{
  private:
    string name;
    double qty;
    string servingSize;
  public:
    Item();
    Item(string name, double qty, string servingSize);
    double pricePerServing() {return amount / qty;}
};