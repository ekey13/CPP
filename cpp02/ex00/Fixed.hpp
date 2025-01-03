#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int value;
    static const int fractionalBits; 

public:
    Fixed();                              // Default constructor
    Fixed(const Fixed &other);            
    Fixed &operator=(const Fixed &other); 
    ~Fixed();

    int getRawBits(void) const;     
    void setRawBits(int const raw); 
};

#endif
