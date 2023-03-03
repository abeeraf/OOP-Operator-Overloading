#include"String.h"

String::String()
{
	len=0;
	str1=new char[1];
	str1[0]='\0';
}
String::String(const char *str)
{
	len=0;
	str1=new char[1];
	for(int x=0;str[x]!='\0';x++)
	{
		str1[x]=str[x];
		len+=1;
	}
}
String::String(const String &copy)
{
	str1=new char[copy.len];	
	for(int x=0;copy.str1[x]!='\0';x++)
	{
		str1[x]=copy.str1[x];
	}
	len=copy.len;
}
String::String(int x)
{
	str1=new char[x];
	len=x;
}
char& String::operator[](int i)
{
	return str1[i];
}
const char String::operator[](int i) const
{
	return str1[i];
}
String String::operator+(const String &str) const
{
	String temp;
	for(int x=0;x<len;x++)
	{
		temp.str1[x]=str1[x];
	}
	temp.len=len;
	for(int x=0;str.str1[x]!='\0';x++)
	{
		temp.str1[len+x]=str.str1[x];
		temp.len+=1;
	}
	return temp;
}
String String::operator+(const char &str) const
{
	String temp;
	for(int x=0;str1[x]!='\0';x++)
	{
		temp.str1[x]=str1[x];
	}

	temp.str1[len]=str;
	temp.len=len+1;
	return temp;
}
String String::operator+(char *&str) const
{
	String temp;
	for(int x=0;str1[x]!='\0';x++)
	{
		temp.str1[x]=str1[x];
	}
	temp.len=len;
	
	for(int x=0;str[x]!='\0';x++)
	{
		temp.str1[len+x]=str[x];
		temp.len+=1;
	}
	return temp;
}
String String::operator-(const String &substr) const
{
	String temp;
	int *arr=new int[1], arrinc=0;
	
	//add same starting index as substring in array
	for(int x=0;x<len;x++)
	{
		if (str1[x]==substr[0])
		{arr[arrinc++]=x;}
	} 
	int index;
	for (int i=0;i<arrinc;i++)
	{	
		int d=0;
		for(int x=0;x<substr.len;x++)
		{
			if (substr.str1[x]!=str1[arr[i]+x])
			{break;}
			else 
			{d++;
				if(d==substr.len)
				{index=arr[i];}
			}

		}
		if(d==substr.len)
		break;
	}
	for(int x=0;x<len;x++)
	{
		temp.str1[x]=str1[x];
	}
	for(int x=index;x<len;x++)
	{
		temp.str1[x]=str1[x+(substr.len)];
	}
	temp.len=len-substr.len;
	return temp;

}
String String::operator-(const string &substr) const
{
	String temp;
	for(int x=0;x<len;x++)
	{
		temp.str1[x]=str1[x];
	}
	int c=0;
	int *arr=new int[1], arrinc=0;
	while(substr[c]!='\0')
	{c++;}
	//add same starting index as substring in array
	for(int x=0;x<len;x++)
	{
		if (str1[x]==substr[0])
		{arr[arrinc++]=x;}
	}
	//check 
	int index;
	for (int i=0;i<arrinc;i++)
	{	
		int d=0;
		for(int x=0;x<c;x++)
		{
			if (substr[x]!=str1[arr[i]+x])
			{break;}
			else 
			{d++;
				if(d==c)
				{index=arr[i];}
			}
			
		}
		if(d==c)
		break;
	}
	for(int x=index;x<len;x++)
	{
		temp.str1[x]=str1[x+c];
	}
	temp.len-=c;
	return temp;
}

String& String::operator=(const String&obj)
{
	for(int x=0;obj.str1[x]!='\0';x++)
	{
		str1[x]=obj.str1[x];
	}	
	len=obj.len;
}
String& String::operator=(char*str)
{
	for(int i=0; str[i]!='\0';i++)
	{str1[i]=str[i];
	len+=1;}
}
String& String::operator=(const string&copy)
{
	for(int i=0; copy[i]!='\0';i++)
	{str1[i]=copy[i];
	len+=1;}
}
bool String::operator==(const String& str) const
{
	bool e=1;	
	if(len==str.len)
	{
		for(int x=0;x<len;x++)
		{			
			if(str1[x]!=str.str1[x])			
			{e=false;break;}	
		}
		return e;
	}
	else
	{return 0;}
}
bool String::operator==(const string& str) const
{
	int c=0;
	while(str[c]!='\0')
	{c++;}
	bool e=1;	
	if(len==c)
	{
		for(int x=0;x<c;x++)
		{			
			if(str1[x]!=str[x])			
			{e=false;break;}	
		}
		return e;
	}
	else
	{return 0;}
}
bool String::operator==(char *str) const
{
	bool e=1;	
	for(int x=0;x<len;x++)
	{			
		if(str1[x]!=str[x])			
		{e=false;break;}	
	}
	return e;
}
bool String::operator!()
{
	if (len=0)
	{return 1;}
	else 
	{return 0;}
}
int String::operator()(char a) const
{
	for(int x=0;x<len;x++)
	{
		if (str1[x]==a)
		{return x;}
	}

}
int String::operator()(const String& substr) const
{
	int c=0;
	int *arr=new int[1], arrinc=0;
	
	//add same starting index as substring in array
	for(int x=0;x<len;x++)
	{
		if (str1[x]==substr.str1[0])
		{arr[arrinc++]=x;}
	}
	//check 
	for (int i=0;i<arrinc;i++)
	{	
		int d=0;
		for(int x=0;x<substr.len;x++)
		{
			if (substr.str1[x]!=str1[arr[i]+x])
			{break;}
			else 
			{d++;
				if(d==substr.len)
				{return arr[i];}
			}

		}
	}
}
int String::operator()(const string& substr) const
{
	
	int c=0;
	int *arr=new int[1], arrinc=0;
	//check length of substring	
	while(substr[c]!='\0')
	{c++;}
	
	//add same starting index as substring in array
	for(int x=0;x<len;x++)
	{
		if (str1[x]==substr[0])
		{arr[arrinc++]=x;}
	}
	//check 
	for (int i=0;i<arrinc;i++)
	{	
		int d=0;
		for(int x=0;x<=c;x++)
		{
			if (substr[x]!=str1[arr[i]+x])
			{break;}
			else 
			{d++;
				if(d==c)
				{return arr[i];}
			}
		}
	}

}
int String::operator()(char * substr) const
{
	int c=0;
	int *arr=new int[1], arrinc=0;
	//check length of substring	
	while(substr[c]!='\0')
	{c++;}
	
	//add same starting index as substring in array
	for(int x=0;x<len;x++)
	{
		if (str1[x]==substr[0])
		{arr[arrinc++]=x;}
	}
	//check 
	for (int i=0;i<arrinc;i++)
	{	
		int d=0;
		for(int x=0;x<=c;x++)
		{
			if (substr[x]!=str1[arr[i]+x])
			{break;}
			else 
			{d++;
				if(d==c)
				{return arr[i];}
			}
		}
	}
}
String::operator int() const
{
	return len;
}
String::~String()
{
	delete [] str1;
}
ostream& operator<<(ostream& output, const String&obj)
{
	for(int x=0;obj.str1[x]!='\0';x++)
	{
		cout<<obj.str1[x];
	}
}
istream& operator>>(istream& input, String&obj)
{
		cin>>obj.str1;
		obj.len-=1;
}





