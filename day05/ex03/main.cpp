#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void)
{

    Bureaucrat b("Winston", 1);
    Intern othmane = Intern();
    Form *form1;
    try 
    {
        form1 = othmane.makeForm("Shrubbery Creation Form", "home");
        std::cout << b << *form1;
        form1->beSigned(b);
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}