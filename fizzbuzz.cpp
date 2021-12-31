#include <iostream>

void printFizzBuzz()
{
    int fizzNumbers = 1;

    for (int i = 1; i < 120; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            std::cout << "FizzBuzz" << std::endl;
        }
        else if (i % 3 == 0) {
            std::cout << "Fizz" << std::endl;
        }
        else if (i % 5 == 0)
        {
            std::cout << "Buzz" << std::endl;
        }
        else {
            std::cout << fizzNumbers << std::endl;
        }
        fizzNumbers++;
    }
}

void playFizzBuzz()
{
    int guessLife = 5;

    std::string guessword;

    for (int i = 1; i < 9999999; i++) {

        if (i % 3 == 0 && i % 5 == 0)
        {
            std::cout << "guess: ";
            std::cin >> guessword;
            if (guessword == "FizzBuzz" || "fizzBuzz" || "fizzbuzz" || "Fizzbuzz")
            {
                continue;
            }
            else
            {
                guessLife--;
                std::cout << "lost 1 life remaining: " << guessLife << std::endl;
            }
        }
        else if (i % 3 == 0) {
            std::cout << "guess: ";
            std::cin >> guessword;
            if (guessword == "Fizz" || "fizz")
            {
                continue;
            }
            else
            {
                guessLife--;
                std::cout << "lost 1 life remaining: " << guessLife << std::endl;
            }
        }
        else if (i % 5 == 0)
        {
            std::cout << "guess: ";
            std::cin >> guessword;
            if (guessword == "Buzz" || "buzz")
            {
                continue;
            }
            else
            {
                guessLife--;
                std::cout << "lost 1 life remaining: " << guessLife << std::endl;
            }
        }
        else if (guessLife == 0)
        {
            break;
            std::cout << "you lost the game by number: " << i << std::endl;
        }
        else {
            std::cout << i << std::endl;
        }

    }
}

int main()
{

    std::cout << "(1) - Play FizzBuzz" << std::endl;
    std::cout << "(2) - Print FizzBuzz" << std::endl;
    std::cout << "(3) - Exit" << std::endl;

    char input;
    std::cin >> input;

    switch (input)
    {
    case '1':
        playFizzBuzz();
        break;
    case '2':
        printFizzBuzz();
        break;
    case '3':
        exit(1);
        break;
    default:
        break;
    }
}
