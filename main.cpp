#include "platypus.h"

int main()
{
srand(time(NULL));
    std::cout << "\n* Another story of Homer in Sprinfeald *\n"<< std::endl;
    std::cout << "This program will display the characteristics of a platypus." << std::endl;

    Platypus platypus1('A', 10.5, 7, 'B');
    Platypus platypus2;

    platypus1.print(std::cout);

    std::cout << std::endl;
    return 0;
}
