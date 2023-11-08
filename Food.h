#include "Transaction.h"

class Food
: public Transaction
{
  public:
    bool getIsReal() {return true;}
    string getCategory() {return Food;}
    bool income() {return false;}
};