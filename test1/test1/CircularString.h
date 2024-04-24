#pragma once
class CircularString {
private:
    char* buffer;
    int capacity;
    int length;

public:
    CircularString(int capacity);
    CircularString(char initialChar, int capacity);
    ~CircularString();

    CircularString(const CircularString& other);

    CircularString& operator=(const CircularString& other);

    CircularString& operator+=(char c);
    CircularString& operator++();  
    CircularString operator++(int); 
    CircularString& operator--();  
    CircularString operator--(int);

    operator const char* () const;
    operator int() const;

    char operator[](int index) const;

    int operator()(int index) const;
};
