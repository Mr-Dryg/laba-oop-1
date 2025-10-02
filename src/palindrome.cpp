#include <iostream>
#include <string>

bool is_palindrome(const std::string & word)
{
    int word_length = word.length();
    int word_middle = word_length / 2;
    for (int i=0; i < word_middle; i++)
    {
        if (word[i] != word[word_length - i - 1])
        {
            return false;
        }
    }
    return true;
}