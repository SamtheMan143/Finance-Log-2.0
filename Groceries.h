#include "Transaction.h"

class Groceries
: public Transaction
{
  private:
    string store;
    vector<shared_ptr<Item>> whatIBought;
    double tax;
  public:
    Groceries();
    Groceries(int month, int day, int year, string description, 
      locationType location, double amount, string store,
      vector<shared_ptr<Food>> whatIBought, double tax);
    // Accessors
    double getAmount();
    bool getIsReal();
    bool income();
    string getCategory();
    bool tithe();
    void getStore();
    void getVector();
    void getTax();
    // Mutators
    void setStore(string store);
    void setVector(vector<shared_ptr<Item>> whatIBought);
    void setTax(double tax);
};