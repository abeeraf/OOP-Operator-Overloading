#include "Rational.h"
#include<iostream>
#include<cstring>
using namespace std;

Rational::Rational()
{
	n=0;
	d=1;
}

Rational::Rational(int a,int b)
{	
	int c;	
 	if(a>b)
	c=a;
	else 
	c=b;

	for(int i=c;i>1;i--)
	{
		if((a%i==0)&&(b%i==0))
		{
			a=a/i;
			b=b/i;
		}			
	}
	n=a;
	d=b;
}
Rational::Rational(const Rational &copy)
{
	n=copy.n;
	d=copy.d;
}
//Simplify fraction
Rational Rational::simply(const Rational &x) const
{
	Rational temp;
	int c;	
 	if(x.n>x.d)
	c=x.n;
	else 
	c=x.d;
	int a=x.n,b=x.d;
	for(int i=c;i>1;i--)
	{
		if((a%i==0)&&(b%i==0))
		{
			a/=i;
			b/=i;
		}
				
	}
	temp.n=a;
	temp.d=b;
	return temp;
	
}
Rational Rational::operator = (const Rational &x)
{
	int a=x.n,b=x.d;
	for(int i=2;i<x.d;i++)
	{
		if((a%i==0)&&(b%i==0))
		{
			a=a/i;
			b=b/i;
		}
				
	}
	n=a;
	d=b;
	return *this;
	
}
Rational Rational::operator+(const Rational &x) const
{
	Rational temp;
	temp.n=n*x.d+x.n*d;	
	temp.d=d*x.d;
 	Rational r=simply(temp);
	return r;
}
Rational Rational::operator-(const Rational &x) const
{
	Rational temp;
	temp.n=n*x.d-x.n*d;	
	temp.d=d*x.d;
	Rational r=simply(temp);
	return r;
}
Rational Rational::operator*(const Rational &x) const
{
	Rational temp;
	temp.n=n*x.n;	
	temp.d=d*x.d;
	return simply(temp);
}
Rational Rational::operator/(const Rational &x) const
{
	Rational temp;
	temp.n=n*x.d;	
	temp.d=d*x.n;
	return simply(temp);
}
Rational Rational::operator += (const Rational &x)
{
	Rational temp;
	temp.n=n*x.d+x.n*d;	
	temp.d=d*x.d;
 
	return simply(temp);
}
Rational Rational ::operator -= (const Rational &x)
{
	Rational temp;
	temp.n=n*x.d+x.n*d;	
	temp.d=d*x.d;

	return simply(temp);
}
Rational Rational::operator *= (const Rational &x)
{
	Rational temp;
	temp.n=n*x.n;	
	temp.d=d*x.d;
	return simply(temp);
}
Rational Rational::operator /= (const Rational &x)
{
	Rational temp;
	temp.n=n*x.d;	
	temp.d=d*x.n;
	return simply(temp);
}
bool Rational::operator == (const Rational & other) const
{
	Rational a(n,d),b(other.n,other.d);
	if ((a.n==other.n)&&(a.d==other.d))
	{return 1;}
	else 
	{return 0;}
}
bool Rational::operator < (const Rational & other) const
{
	Rational a(n,d),b(other.n,other.d),c=a-b;	
	if (c.n<0)
	return 1;
	else 
	return 0;
}
bool Rational::operator > (const Rational & other) const
{
	Rational a(n,d),b(other.n,other.d),c=a-b;	
	if (c.n>0)
	return 1;
	else 
	return 0;
}
bool Rational::operator <= (const Rational & other) const
{
	Rational a(n,d),b(other.n,other.d),c=a-b;	
	if (c.n<=0)
	return 1;
	else 
	return 0;
}
bool Rational::operator >= (const Rational & other) const
{
	Rational a(n,d),b(other.n,other.d),c=a-b;	
	if (c.n>=0)
	return 1;
	else 
	return 0;
}
Rational::operator std::string() const 
{
	string str;
	if (d==1)
	{	//cout<<to_string(n)<<endl;
		return to_string(n);}
	else 
	{//cout<<to_string(n)+"/"+to_string(d)<<endl;
	return to_string(n)+"/"+to_string(d);}
}
Rational::~Rational() 
{

}

ostream& operator<<(ostream& output, const Rational &obj)
{
	cout<<obj.n<<"/"<<obj.d;
}
istream& operator>>(istream& input, Rational&obj)
{
	int na,bd;
	char c;
	cin>>na>>c>>bd;
	Rational f(na,bd);
	obj=f;
}

Rational Rational::operator+(const int &x) const
{
	int a,b;
	a=n+x*d;
	b=d;
 	Rational c(a,b);
	return c;
}
Rational Rational::operator-(const int &x) const
{
	int a,b;
	a=n-x*d;
	b=d;
 	Rational c(a,b);
	return c;
}
Rational Rational::operator*(const int &x) const
{
	Rational temp;
	temp.n=n*x;	
	temp.d=d;
 
	return simply(temp);
}
Rational Rational::operator/(const int &x) const
{
	
	Rational temp;
	temp.n=n;	
	temp.d=d*x;
 
	return simply(temp);
}


