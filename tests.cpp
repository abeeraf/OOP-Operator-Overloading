//#include "Rational.cpp"
//#include "String.cpp"
//#include "BigInt.cpp"
//#include "Polynomial.cpp"
#include "Flower.cpp"
#include "Bouquet.cpp"
#include <gtest/gtest.h>
 //Q1: Rational.cpp


/*
TEST(Rational, Constructors) { 
    Rational a(2,8);
    Rational b(3,1);
    string expected1="1/4";
    string actual1=(string)a;
   
    ASSERT_EQ(0, actual1.compare(expected1));
    string expected2="3";
    string actual2=(string)b;
   
    ASSERT_EQ(0, actual2.compare(expected2));
    
}
TEST(Rational, Addition) { 
    Rational a(2,8);
	Rational b(3,4);
	Rational c;
	Rational d;
	c=a+5;
	string expected1="21/4";
        string actual1=(string)c;
        
        ASSERT_EQ(0, actual1.compare(expected1));
	d=c+b;
	string expected2="6";
        string actual2=(string)d;
        
        ASSERT_EQ(0, actual2.compare(expected2));
    
}

TEST(Rational, Subtraction) { 
        Rational a(5,1);
	Rational b(3,4);
	Rational c;
	Rational d;
	c=a-5;
	string expected1="0";
        string actual1=(string)c;
        
        ASSERT_EQ(0, actual1.compare(expected1));
	d=c-b;
	string expected2="-3/4";
        string actual2=(string)d;
        
        ASSERT_EQ(0, actual2.compare(expected2));
    
}
TEST(Rational, Mul) { 
        Rational a(5,1);
	Rational b(1,25);
	Rational c;
	Rational d;
	c=a*5;
	string expected1="25";
        string actual1=(string)c;
        
        ASSERT_EQ(0, actual1.compare(expected1));
	d=a*b;
	string expected2="1/5";
        string actual2=(string)d;
        
        ASSERT_EQ(0, actual2.compare(expected2));
    
}
TEST(Rational, Div) { 
        Rational a(5,1);
	Rational b(1,5);
	Rational c;
	Rational d;
	c=a/5;
	string expected1="1";
        string actual1=(string)c;
        
        ASSERT_EQ(0, actual1.compare(expected1));
	d=b/a;
	string expected2="1/25";
        string actual2=(string)d;
        
        ASSERT_EQ(0, actual2.compare(expected2));
    
}
TEST(Rational, LessthanEqualGreaterthan) { 
        Rational a(3,2);
	Rational b(9,8);
	Rational c(1,1);
	Rational d(1,5);
	Rational e(1,5);
	ASSERT_EQ(true, e==d);
	ASSERT_EQ(false, a==b);
	ASSERT_EQ(true, a>=b);
	ASSERT_EQ(false, a<c);
	ASSERT_EQ(true, d<=a);
	ASSERT_EQ(true, c<a);
	
    
}

TEST(Rational, InputOutput) { 
        Rational s1;
        cin>>s1;// input 2/4 on terminal
        Rational s2(1,2);//BigInt s2(1,2);
        cout<<s1;
        ASSERT_EQ(true,s2==s1 );
    
}

// Q2:String 
TEST(String, Constructors) { 
    String s1("abcd");
    ASSERT_EQ(4, (int)s1); // Conversion Operator should be overloaded 
    char* c = "asdfgh";
    String s2(c);
    ASSERT_EQ(6, (int)s2);
    String s3(10);
    ASSERT_EQ(10, (int)s3);
    String s4(s2);
    ASSERT_EQ(6, (int)s4);
    
    
}

TEST(String, SquareBracket) { 
    String s1("abcd");
    ASSERT_EQ('c', s1[2]);
    s1[2]='x';// assignment operator should be overloaded 
    ASSERT_EQ('x', s1[2]);
    ASSERT_EQ('d', s1[3]);
    
}

TEST(String, ArithmeticOperatorsplus) { 
        String s1("abcd");
	
	String s2;
	s2 = s1 + 'e';
	ASSERT_EQ('d', s2[3]);
	ASSERT_EQ('e', s2[4]);
	char* c = "asdfgh";
	s2 = s1 + c;
	ASSERT_EQ('d', s2[3]);
	ASSERT_EQ('a', s2[4]);
	ASSERT_EQ('g', s2[8]);
	ASSERT_EQ(10, (int)s2);
	String s3 = s1 + s2;
	ASSERT_EQ(14, (int)s3);
	
	ASSERT_EQ('s', s3[9]);
    
}
TEST(String, ArithmeticOperatorsSub) { 
        String s1("ababacc");
	
	String s2("aba");
	string string2="cc";;
	s2 = s1 - s2;
	ASSERT_EQ('b', s2[0]);
	ASSERT_EQ('a', s2[1]);
	ASSERT_EQ('c', s2[2]);
	s2=s2-string2;
	ASSERT_EQ('b', s2[0]);
	ASSERT_EQ('a', s2[1]);
    
}

TEST(String, Logical) { 
        String s1("ababacc");
        String s4("ababacc");
	String s2("aba");
	string string2="aba";
	char * chararray="ababacc";
	ASSERT_EQ(true,s1==chararray );
	
	ASSERT_EQ(false,s2==s1 );
	ASSERT_EQ(true,s1==s4 );
	ASSERT_EQ(true,s2==string2 );
    
}

TEST(String, FunctionCall) { 
        String s1("ababacc");
        int i=s1('c');
	ASSERT_EQ(5,i );
	String s2("acc");
	i=s1(s2);
	ASSERT_EQ(4,i );
	string s3="bac";
	i=s1(s3);
	ASSERT_EQ(3,i );
	
    
}
TEST(String, InputOutput) { 
        String s1(10);
        cin>>s1;// input HelloTest on terminal
        String s2("HelloTest");
        cout<<s1;
        ASSERT_EQ(true,s2==s1 );
    
}

// Q3: BigInt  

TEST(BigInt, Constructors) { 
    string expected1="119622220865480194561963161495657715064383733760000000000";
    string expected2="99999";
    BigInt a(expected1);
    BigInt b(99999);
    BigInt c(a);
    string s1=(string)a;
    string s2=(string)b;
    string s3=(string)c;
    ASSERT_EQ(0, s1.compare(expected1));
    ASSERT_EQ(0, s2.compare(expected2));
    ASSERT_EQ(0, s3.compare(expected1));
    
}
TEST(BigInt, Addition) { 
        string str="9999999999999999999";
	BigInt a(str);
	BigInt b=a+1;
	BigInt c;
	c=a+b;
        BigInt d(2);
        d+=a;
        
        string s1=(string)b; string expected1="10000000000000000000";
        string s2=(string)c; string expected2="19999999999999999999";
        string s3=(string)d; string expected3="10000000000000000001";
        
        ASSERT_EQ(0, s1.compare(expected1));
        ASSERT_EQ(0, s2.compare(expected2));
        ASSERT_EQ(0, s3.compare(expected3));
       
        
}

TEST(BigInt, Subtraction) { 
        string str="10000000000000000000";
	BigInt a(str);
	BigInt b=a-1;
	BigInt c;
	c=a-b;
        BigInt d(2);
        a-=d;
        
        string s1=(string)b; string expected1="9999999999999999999";
        string s2=(string)c; string expected2="1";
        string s3=(string)a; string expected3="9999999999999999998";
        
        ASSERT_EQ(0, s1.compare(expected1));
        ASSERT_EQ(0, s2.compare(expected2));
        ASSERT_EQ(0, s3.compare(expected3));
    
}
TEST(BigInt, Mul) { 
        string str="119622220865480194561963161495657715064383733760000000000";
	BigInt a(str);
	BigInt b;
	BigInt c=a*b;
	
        BigInt d(46);
        a*=d;
        
        string s1=(string)c; string expected1="0";
        string s2=(string)a; string expected2="5502622159812088949850305428800254892961651752960000000000";
                
        ASSERT_EQ(0, s1.compare(expected1));
        ASSERT_EQ(0, s2.compare(expected2));
        
    
}

TEST(BigInt, LogicalOperators) { 
        string str1="119622220865480194561963161495657715064383733760000000000";
	string str2="5502622159812088949850305428800254892961651752960000000000";
	BigInt a(str1);
	BigInt c(str1);
	BigInt b(str2);
	                
        ASSERT_EQ(true, a==c);
        ASSERT_EQ(false, a==b);
        ASSERT_EQ(true, a!=b);
        ASSERT_EQ(true, a<=b);
        ASSERT_EQ(false, a>=b);
        ASSERT_EQ(false, a>b);
        ASSERT_EQ(true, a<b);
        
    
}

TEST(BigInt, UnaryOperators) { 
        string str1="9999999999999999999";
	string str2="10000000000000000000";
	BigInt a(str1);
	BigInt c(str1);
	BigInt b(str2);
	a++;
	string s1=(string)a; string expected1="10000000000000000000";
        ASSERT_EQ(0, s1.compare(expected1));
	
	--a;
	string s2=(string)a; string expected2="9999999999999999999";
        ASSERT_EQ(0, s2.compare(expected2));
	
	++b;
	string s3=(string)b; string expected3="10000000000000000001";
        ASSERT_EQ(0, s3.compare(expected3));
	
	b--;
	string s4=(string)b; string expected4="10000000000000000000";
        ASSERT_EQ(0, s4.compare(expected4));                
        
        
    
}
TEST(BigInt, InputOutput) { 
        BigInt s1;
        cin>>s1;// input "2019" on terminal
        BigInt s2("2019");
        cout<<s1;
        ASSERT_EQ(true,s2==s1 );
    
}


// Q4: Polynominal

TEST(Polynominal, Constructors) { 
        Polynomial x(3);
	cin>>x;// input 4x^3 + 3x + 2
	string s1=(string)x;
	string s2="4x^3 + 3x + 2";
	ASSERT_EQ(0, s1.compare(s2));
	Polynomial z(x);
	string s3=(string)z;
	
	ASSERT_EQ(0, s3.compare(s2));
    
}

TEST(Polynominal, ArithmeticOperatorsplus) { 
        Polynomial x(2);
	cin>>x;// input 4x^2 + 3x + 1
	string s1=(string)x;
	string s2="4x^2 + 3x + 1";
	ASSERT_EQ(0, s1.compare(s2));
	Polynomial z(1);
	cin.ignore();
	cin>>z;// input x + 1
	cout << z << endl;
	Polynomial y=x+z;
	string s3=(string)y;
	string s4="4x^2 + 4x + 2";
	ASSERT_EQ(0, s3.compare(s4));
	y+=z;
	
	string s5=(string)y;
	string s6="4x^2 + 5x + 3";
	ASSERT_EQ(0, s5.compare(s6));
	
    
}

TEST(Polynominal, ArithmeticOperatorssub) { 
        Polynomial x(2);
	cin>>x;// input 4x^2 + 3x + 1
	string s1=(string)x;
	string s2="4x^2 + 3x + 1";
	ASSERT_EQ(0, s1.compare(s2));
	cout<<x;
	Polynomial z(1);
	cin>>z;// input x + 1
	
	Polynomial y=x-z;
	//cout<<y;
	string s3=(string)y;
	string s4="4x^2 + 2x";
	ASSERT_EQ(0, s3.compare(s4));
	
	y-=z;
	
	string s5=(string)y;
	string s6="4x^2 + x - 1";
	ASSERT_EQ(0, s5.compare(s6));
    
}

TEST(Polynominal, Equalility) { 
        Polynomial x(2);
	cin>>x;// input 4x^2 + 3x + 1
	string s1=(string)x;
	string s2="4x^2 + 3x + 1";
	ASSERT_EQ(0, s1.compare(s2));
	cout<<x;
	Polynomial z(2);
	cin>>z;// input 4x^2 + 3x + 1
	ASSERT_EQ(true, z==x);
    
}*/

// Q5: Bouquet


TEST(Bouquet, Constructors) { 
        Flower r1("Rose", "Yellow", 1.5);
        Flower r2("Rose", "Yellow", 3.0, true);
        Flower r3("Rose", "Red", 2.0, true, true);
        
        string s1=(string)r1;
        string s2="Rose Yellow 0, Price: 1.5 Rs.";
        string s3=(string)r2;
        string s4="Rose Yellow 1, Price: 3.0 Rs.";
        
        ASSERT_EQ(0, s1.compare(s2));
         ASSERT_EQ(0, s3.compare(s4));
        
        cout << r3 << endl;
        Bouquet b1;
        string s5=(string)b1;
        string s6="Still no flower in the bouquet";
        ASSERT_EQ(0, s6.compare(s5));
        
    
}

TEST(Bouquet, AddRemoveFlower) { 
        Flower r1("Rose", "Yellow", 1.5);
        Flower r2("Rose", "Yellow", 3.0, true);
        Flower r3("Rose", "Red", 2.0, true, true);
        
        
        Bouquet b1;
        b1 += r1; // add one Flower of r1 type
        string s1=(string)b1;
        string s2="Rose Yellow 0, Price: 1.5 Rs.\nTotal Price: 1.5 Rs.";
	ASSERT_EQ(0, s1.compare(s2));
	b1 = b1 - r1; // Delete all the Flowers of type r1
	string s3=(string)b1;
        string s4="Still no flower in the bouquet";
        ASSERT_EQ(0, s3.compare(s4));
	b1 += r1; // add another Flower of r1
	b1 += r2;
	b1 += r3;
	cout << b1 << endl;

	Bouquet b2;
	b2 = b1 + r1; // Add one Flower of type r1
	cout << b2 << endl;

	// Delete all the perfumed flowers from the bouquet.
	b2 -= r2;
	cout << b2 << endl;
	b2 -= r3;
	cout << b2 << endl;
    
}
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
