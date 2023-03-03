#ifndef STRING_H_
#define STRING_H_
#include <string>
#include<iostream>
using namespace std;

class String {

int len;
char* str1;
public:
String(); 
String(const char *str);
String(const String &); 
String(int x);
char &operator[](int i); 
const char operator[](int i) const; 
String operator+(const String &str) const;
String operator+(const char &str) const;
String operator+(char *&str) const;
String operator-(const String &substr) const;
String operator-(const string &substr) const;
String& operator=(const String& obj ); 
String& operator=(char* schar ); 
String& operator=(const string& copy); 
bool operator==(const String& str) const; 
bool operator==(const string& str) const; 
bool operator==(char *str) const;
bool operator!(); 
int operator()(char a) const; 
int operator()(const String& str) const; 
int operator()(const string& str) const;
int operator()(char *) const; 
operator int() const;
~String(); 
friend ostream& operator<<(ostream& output, const String&obj);
friend istream& operator>>(istream& input, String&obj);
};


#endif /* STRING_H_ */
