#include <iostream>
#include <string>
using namespace std;

class Product
{
public:
    string productname;
    double productprice;
};

class Discountedproduct : public Product
{
public:
    double discountper;
};

int main()
{
    Discountedproduct productobj;
    double discountamo;
    double finalprice;

    getline(cin, productobj.productname);
    cin >> productobj.productprice;
    cin >> productobj.discountper;

    discountamo = productobj.productprice * productobj.discountper / 100.0;
    finalprice = productobj.productprice - discountamo;

    cout << "Product Name: " << productobj.productname << endl;
    cout << "Original Price: " << productobj.productprice << endl;
    cout << "Discount Percentage: " << productobj.discountper << endl;
    cout << "Final Price: " << finalprice << endl;

    return 0;
}