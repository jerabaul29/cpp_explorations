#include "iostream"

template <typename user_type>
auto func_with_callback(
    user_type input,
    void (*callback)(user_type) = [](auto x) {std::cout << "default callback" << std::endl;})
{
    // have some callback action
    callback(input);

    // here we would do fancy stuff on the input
    return input;
}
