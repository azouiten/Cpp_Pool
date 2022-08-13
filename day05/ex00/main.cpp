#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat mas;


    Bureaucrat b("Wiston", 1);
    Bureaucrat w("Weak", 150);
    std::cout << b;
    std::cout << w;
    try 
    {
        b.decrementGrade();
        w.incrementGrade();
        std::cout << b;
        std::cout << w;
        w.decrementGrade();
        w.decrementGrade();
        std::cout << b;
        std::cout << w;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}
