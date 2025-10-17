//2
#include <iostream>
#include <array>

void filearray(std::array <int, 10>&arr, int value){
    for(int&element:arr){
        element = value;
    }
}
int main()
{
    std::array <int, 10> arr;
    filearray(arr,42);
    
    for(int a:arr){
        std::cout<<" "<<a;
    }

    return 0;
}