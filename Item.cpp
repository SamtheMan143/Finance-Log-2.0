#include "Item.h"
    
Item::Item()
{
  name = "";
  qty = 0;
  servingSize = "";
}

Item::Item(string name, double qty, string servingSize)
{
  this->name = name;
  this->qty = qty;
  this->servingSize = servingSize;
}