STL std::set

Initialization of std::set:
* After C++ 11 (include):
    ``` C++
    std::set<std::string> str = {"John", "Kelly", "Amanda", "Kim"};
    ```
* Before C++ 11:
    ``` C++
    std::string tmp[] = {"John", "Kelly", "Amanda", "Kim"};
    std::set<std::string> str(tmp, tmp + sizeof(tmp) / sizeof(tmp[0]));
    ```
Link: https://stackoverflow.com/questions/12333783/how-to-initialize-a-string-set-in-c




循环完毕后不要检查中间过程余留