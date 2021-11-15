# include "screen.h"

int main()
{
    Screen myScreen(5, 5, 'X');
    myScreen.move(0, 0).set('#').display(std::cout);
    std::cout << "\n";
    myScreen.display(std::cout);
    std::cout << "\n";

    return 0;
}