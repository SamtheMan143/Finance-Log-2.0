Groceries::Groceries()
: Transaction()
{
  store = "";
  whatIBought = {};
  tax = 0;
}

Groceries::Groceries(int month, int day, int year, string description, 
  locationType location, double amount, string store,
  vector<shared_ptr<Item>> whatIBought, double tax)
: Transaction(int month, int day, int year, string description, locationType location, double amount)
{
  this->store = store;
  this->whatIBought = whatIBought;
  this->tax = tax;
}

// Accessors

double Groceries::getAmount()
{
  double count = 0;
  vector<shared_ptr<Item>>::iterator iter = whatIBought.begin();
  for (iter; iter < whatIBought.end; iter++)
  {
    count += *iter->getAmount();
  }
  return count;
}

bool Groceries::getIsReal()
{
  return true;
}

bool Groceries::income()
{
  return false;
}

string Groceries::getCategory()
{
  return Groceries;
}

bool Groceries::tithe()
{
  return false;
}

void Groceries::getStore()
{
  return store;
}

void Groceries::getVector()
{
  return whatIBought;
}

void Groceries::getTax()
{
  return tax;
}

// Mutators

void Groceries::setStore(string store)
{
  this->store = store;
}

void Groceries::setVector(vector<shared_ptr<Item>> whatIBought)
{
  this->whatIBought = whatIBought;
}

void Groceries::setTax(double tax)
{
  this->tax = tax;
}