#pragma once
#include <algorithm>
class MyString
{
    char* m_pStr;	//строка-член класса
public:
	explicit MyString(const char* text);
	MyString();
	~MyString();
	const char* GetString() const;
	MyString(const MyString& source);
	MyString( MyString&& source);
	void SetNewString(const char* text);
	friend MyString Unite(const char* text, ...);
	//MyString& operator=(MyString&& other) { std::swap(*this, other); return *this; };
};
MyString Unite(const char* text, ...);