class Tithe
: public Transaction
{
  public:
    locationType getLocation() {return Bank;}
    bool isReal() {return true;}
    bool income() {return false;}
    string getCategory() {return tithe;}
    bool tithe() {return false;}
};
