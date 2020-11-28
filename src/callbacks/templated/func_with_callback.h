template<typename user_type, typename user_function>
auto func_with_callback(user_type input, user_function func){
    return func(input);
}

// we have to define the "default base case".
template<typename user_type>
int func_with_callback(user_type x){
    return func_with_callback(x, [](auto x){return x;});
}