/* Number Series Game
 *
 * Description
 *
 * Program helps a player in a game where the first player starts by saying one,
 * second player says 2 and so on. The twist is that is the number is divided by
 * three, player must say "zip", if the number is divided by seven, player must
 * say "boing" and if the must is divided by three and seven, player must say
 * "zip boing".
 *
 * Writer of the program
 *
 * Name: EILeh
 */


#include <iostream>

int main()
{
    std::cout << "How many numbers would you like to have? ";

    int nword_read = 0;
    int number = 0;

    std::cin >> number;

    // As long as the varibale nword_read is smaller than input number,
    // nword_read grows by one.
    while ( nword_read < number )
    {
        nword_read += 1;

        // If the remainder of nword_read divided by 21 is zero, the number is
        // dividible by 21.
        if ( nword_read % 21 == 0 )
        {
            std::cout << "zip boing" << std::endl;
        }

        // If the remainder of nword_read divided by 3 is zero, the number is
        // dividible by 3.
        else if ( nword_read % 3 == 0 )
        {
            std::cout << "zip" << std::endl;
        }

        // If the remainder of nword_read divided by 7 is zero, the number is
        // dividible by 7.
        else if ( nword_read % 7 == 0 )
        {
            std::cout << "boing" << std::endl;
        }

        // Number is not divisible by 3, 7 or 21 and only current number is
        // printed.
        else
        {
            std::cout << nword_read << std::endl;
        }
    }

    return 0;
}
