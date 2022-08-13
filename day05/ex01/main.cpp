#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{

    Bureaucrat b("Winston", 1);
    Bureaucrat w("macron", 150);
    Form f("war declaration", 100, 80);
    std::cout << b << w << f;
    try 
    {
        f.beSigned(w);
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << b << w << f;
    return (0);
}