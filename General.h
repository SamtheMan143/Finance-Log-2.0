#include "Transaction.h"

class General
: public Transaction
{
  private:
    bool isReal;
    bool tithe;
    bool income;
  public:
    bool getIsReal() {return isReal;}
    bool getTithe() {return tithe;}
    bool income() {return income;}
    void setIsReal(bool isReal) {this->isReal = isReal;}
    void setTithe(bool tithe) {this->tithe = tithe;}
    void setIncome(bool income) {this->income = income;}
};