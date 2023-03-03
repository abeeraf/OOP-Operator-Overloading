#include<string>
using namespace std;

class Flower{

string name;
string color;
float price;
bool perf;
bool sale;

public:
Flower(string nam,string col, float pr, bool false, bool false);
float price();
bool perfume();
operator std::string() const;
friend istream& operator>>(istream& input, Flower& obj);
bool operator==(const Polynomial &obj );

};

