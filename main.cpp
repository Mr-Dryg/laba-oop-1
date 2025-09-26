#include <iostream>
#include <string>
#include "include/palindrome.h"

int main(void)
{
    std::string word, ans("");
    std::cout << "Enter the word you want to check for a palindrome:\n";
    std::cin >> word;
    bool result = is_palindrome(word);
    if (!result)
    {
        ans = " not";
    }
    std::cout << word << " is" << ans << " a palindrome\n";
}