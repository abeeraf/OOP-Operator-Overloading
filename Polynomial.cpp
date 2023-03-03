#include"Polynomial.h"

Polynomial::Polynomial()
{
	for(int i=0;i<100;i++)
	{	
		arr[i]=0;
		pow=0;
	}
}
Polynomial::Polynomial(int x)
{
	pow=x;
}
Polynomial::Polynomial(const Polynomial & obj)
{
	for(int i=obj.pow;i>=0;i--)
	{arr[i]=obj.arr[i];}
	pow=obj.pow;
}
Polynomial Polynomial::operator=(const Polynomial& rhs)
{	pow=rhs.pow;
	for(int i=0;i<=rhs.pow;i++)
	{arr[i]=rhs.arr[i];}
	return *this;
}
Polynomial Polynomial::operator+(const Polynomial & obj)
{
	int c;
	Polynomial temp;
	if(pow<obj.pow)
	{
		c=pow;
		Polynomial temp = obj;
	}
	else
	{
		c=obj.pow;
		Polynomial temp = *this;
	}
	for(int i=0;i<=c;i++)
	{temp.arr[i] =arr[i] + obj.arr[i];}
	return temp;
}
Polynomial Polynomial::operator-(const Polynomial &obj)
{
	int c;
	Polynomial temp;
	if(pow<obj.pow)
	{
		c=pow;
		Polynomial temp = obj;
	}
	else 
	{
		c=obj.pow;
		Polynomial temp = *this;
	}
	for(int i=0;i<=c;i++)
	{temp.arr[i] = arr[i] - obj.arr[i];}
	return temp;
}
void Polynomial::operator+=(const Polynomial&obj)
{
	//*this = *this + obj;
	int c;
	Polynomial temp;
	if(pow<obj.pow)
	{
		c=pow;
		Polynomial temp = obj;
	}
	else
	{
		c=obj.pow;
		Polynomial temp = *this;
	}
	for(int i=0;i<=c;i++)
	{temp.arr[i] =arr[i] + obj.arr[i];}
	*this=temp;
}
void Polynomial::operator-=(const Polynomial&obj)
{
	//*this = *this - obj;
	int c;
	Polynomial temp;
	if(pow<obj.pow)
	{
		c=pow;
		Polynomial temp = obj;
	}
	else 
	{
		c=obj.pow;
		Polynomial temp = *this;
	}
	for(int i=0;i<=c;i++)
	{temp.arr[i] = arr[i] - obj.arr[i];}
	*this=temp;
}
bool Polynomial::operator==(const Polynomial &obj)
{
	bool e=1;
	for(int i=0;i<=pow;i++)
	{
		if(arr[i]!=obj.arr[i])
		e=0;
	}
	return e;
}

Polynomial::operator string() const
{
	string str;
	for(int i=pow;i>=0;i--)
	{
		if (i==pow)
		{	if((arr[i]!=0)&&(pow>1))
			{str+=to_string(arr[i])+"x"+"^"+to_string(i);}
			if((arr[i]!=0)&&(pow==1))
			{str+=to_string(arr[i])+"x";}
			if((arr[i]!=0)&&(pow<1))
			{str+=to_string(arr[i]);}
		}
		if (i<pow)
		{	if ((arr[i]!=0)&&(i>1))
			{str+=" + "+to_string(arr[i])+"x"+"^"+to_string(i);}
			if((arr[i]!=0)&&(i==1))
			{str+=" + "+to_string(arr[i])+"x";}
			if((arr[i]!=0)&&(i<1))
			{str+=" + "+to_string(arr[i]);}
		}
		
	}
	//str += '\0';
	cout << "Hello" << endl;
	cout << str << endl;
	return str;
}
Polynomial::~Polynomial()
{

}
ostream& operator<<(ostream& output, const Polynomial& obj)
{
	cout<<string();
}
istream& operator>>(istream& input, Polynomial& obj )
{		
	
	for(int x=obj.pow; x>=0; x--)
	{
		cin>>obj.arr[x];
		//cin.ignore();
	}
}










