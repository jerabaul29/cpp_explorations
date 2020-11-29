template<typename user_type, typename user_function = user_type(*)(user_type)>
auto func_with_callback(user_type input, user_function func = [](auto x){return x;}){
    // have some callback action
    auto output = func(input);

    // here we would do fancy stuff on the input
    return output;
}
