#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
#include <math.h>

class Fixed {
    private:
		int					fpNumber;
		static const int	raw = 8;

	public:
		Fixed(void);
		Fixed(const Fixed &f);
		Fixed(const int n);
		Fixed(const float f);
		~Fixed();

		int	    getRawBits(void)const;
		void    setRawBits(const int raw);
        void    copyFixed(const Fixed &f);
		float	toFloat(void) const;
		int		toInt(void) const;

		bool operator<(const Fixed &f);
		bool operator>(const Fixed &f);
		bool operator>=(const Fixed &f);
		bool operator<=(const Fixed &f);
		bool operator==(const Fixed &f);
		bool operator!=(const Fixed &f);

		Fixed   &operator=(const Fixed &f);
		Fixed 	operator+(const Fixed &f);
		Fixed 	operator-(const Fixed &f);
		Fixed 	operator*(const Fixed &f);
		Fixed 	operator/(const Fixed &f);

		Fixed static min(Fixed &f1, Fixed &f2);
		Fixed static min(const Fixed &f1, const Fixed &f2);
		Fixed static max(Fixed &f1, Fixed &f2);
		Fixed static max(const Fixed &f1, const Fixed &f2);

		Fixed 	operator++(int);
		Fixed	&operator++(void);
		Fixed	operator--(int);
		Fixed	&operator--(void);
};

std::ostream &operator<<(std::ostream &o, const Fixed &f);

#endif