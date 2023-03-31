#include <stdio.h>

/*
* pe x64:
0 -> vfptr: doValue (size 8)
8 -> vPrivate (size 4)
12 -> vProtected (size 4)
16 -> valuePublic (size 4)
20 -> ... 
sizeOf(Integer)(multiplu de cel mai mare camp, 8, mai mare ca 20 -> 24)
*/

/*
pe x32:
0 -> vfptr
4 -> vPrivate
8 -> vProtected
12 -> vPublic
sizeOf(Integer) -> 16 
*/

class Integer
{
	int valuePrivate;
protected:
	int valueProtected;
public:
	int valuePublic;
	virtual void doValue() = 0;

};

/*
* pe x64:
0 -> 24: campurile din Integer
24: value2 (size 4)
sizeof(IntgerB) = 32 (multiplu de cel mai mare camp)
*/

class IntegerB : public Integer {
	int value2;
public:
	void f() {
		this->valueProtected = 0;
		this->valuePublic = 0;
	}
	void doValue()
	{
		this->value2 = 0;
	}
};

class IntegerC : protected Integer {
	int value2;
public:
	void f() {
		this->valueProtected = 0;
		this->valuePublic = 0;
	}
	void doValue()
	{
		this->value2 = 0;
	}
};

class IntegerD : private Integer {
	int value2;
public:
	void f() {
		this->valueProtected = 0;
		this->valuePublic = 0;
	}
	void doValue()
	{
		this->value2 = 0;
	}
};

class IntegerE : public Integer {
public:
	void f() {

	}
	void doValue() {
		this->valueProtected = 0;
	}
};

void main()
{
	
	//Integer a;
	//a.valuePublic = 0;
	IntegerB b;
	printf("%d\n", sizeof(Integer));
	printf("%d\n",sizeof(IntegerB));
	b.valuePublic = 0;
	IntegerC c;
	//c.valuePublic //error
	IntegerD d;
	IntegerE e;
	//d.valuePublic //error
}