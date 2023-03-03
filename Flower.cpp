#include "Flower.h"

Flower(string nam,string col, float pr,bool perfume,bool sal);
{
	name=nam;
	color=col;
	price=pr;
	perf=perfume;
	sale=sal;
}
float price()
{
	if(sale)
	return (price/2);
	else 
	return price;
}
bool perfume()
{
	return perf;
}
operator std::string() const
{
	//"Rose Yellow 0, Price: 1.5 Rs."
	string str;
	str=name+" "+color+" "+to_string(perf)", Price: "+to_string(price)+" Rs.";
	return str;
}
friend istream& operator>>(istream& input, Flower& obj)
{

}
bool operator==(const Polynomial &obj )
{

}
