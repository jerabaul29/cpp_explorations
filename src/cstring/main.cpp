#include <iostream>
#include <cstring>

int main(void)
{
    char main_buffer[120];

    char small_buffer[12];
    sprintf(small_buffer, "%i", 12);

    size_t cstring_length = strlen(small_buffer);

    std::cout << "len of cstring " << small_buffer << " is " << cstring_length << std::endl;

    strcpy(&main_buffer[0], small_buffer);
    sprintf(small_buffer, "%i", 34);
    strcpy(&main_buffer[cstring_length], small_buffer);

    std::cout << "main buffer content is " << main_buffer << std::endl;

    return 0;
}
