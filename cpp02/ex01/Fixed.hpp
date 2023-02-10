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
		Fixed();
		Fixed(const Fixed &f);
		Fixed(const int n);
		Fixed(const float f);
		~Fixed();
		Fixed   &operator=(const Fixed &f);
		int	    getRawBits(void)const;
		void    setRawBits(const int raw);
        void    copyFixed(const Fixed &f);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &o, const Fixed &f);

#endif