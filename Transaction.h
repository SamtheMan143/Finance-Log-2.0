#include "Date.h"
#include "Time.h"

//enum transactionType {Income, Expense, Tithe, UnknownType};
enum locationType {Bank, Cash, Check, UnknownLocation};
enum Category {Landscape, JerseyMikes, tutoring, compensation, gift, // Income
                gas, groceries, food, tithe, unknownCategory}; // Expenses


class Transaction
{

  private:
    Date date;
    string description;
    locationType location; // Bank or Cash
    double amount;
    //int serialNumber;


  public:

    Transaction();
    Transaction(Date date, string description, locationType location, double amount);

    // Accessors

    Date getDate();
    string getDescription();
    locationType getLocation();
    double getAmount();
    bool getIsReal(); 
    bool income();
    string getCategory();
    bool tithe();

    // Mutators

    void setDate(Date date);
    void setDescription (string description);
    void setLocation(locationType location);
    void setAmount(double amount);
    private: void setDate();


};