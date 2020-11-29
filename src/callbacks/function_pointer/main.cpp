#include "iostream"

using callback_type = void(*)(char);

void default_callback(char char_in){
    std::cout << "default callback " << char_in << std::endl;
}

void user_callback(char char_in){
    std::cout << "user callback " << char_in << std::endl;
}

char func_with_callback(char char_in, callback_type callback=default_callback){
    std::cout << "func with callback" << std::endl;

    callback(char_in);

    // implement the function logics here
    return(char_in);
}

int main(void)
{
    func_with_callback('a');

    func_with_callback('b', user_callback);

    return 0;
}
