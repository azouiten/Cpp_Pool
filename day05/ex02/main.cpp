#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{

    Bureaucrat b("Winston", 150);
    ShrubberyCreationForm form1("home");
    PresidentialPardonForm form2("garden");
    RobotomyRequestForm form3("balcony");
    std::cout << b << form1;
    try 
    {
        form1.beSigned(b);
        form1.execute(b);
        form2.beSigned(b);
        form2.execute(b);
        form3.beSigned(b);
        form3.execute(b);
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << b << form1 << form2 << form3;
    return (0);
}