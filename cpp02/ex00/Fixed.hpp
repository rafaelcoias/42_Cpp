#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

class Fixed {
    private:
        int fpNumber;
        static int const raw;

    public:
        Fixed();
        Fixed(Fixed &f);
        ~Fixed();
        int     getRawBits(void) const;
        void    setRawBits( int const raw );
        void    copyFixed(Fixed &f);
};

#endif