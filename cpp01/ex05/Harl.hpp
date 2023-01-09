#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

typedef std::string str;

class Harl {

    typedef struct s_level {
        str complain;
        void    (Harl::*level)(void);
    } t_level;

    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
        t_level complains[4];

    public:
        Harl();
        ~Harl();
        void complain(std::string level);
};

#endif