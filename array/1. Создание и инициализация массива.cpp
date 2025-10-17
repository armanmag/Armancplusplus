//1
#include <iostream>
#include <array>

std::array <int, 5> createarray(){
    std::array <int, 5> arr = {1,2,3,4,5};
    return arr;
}

int main()
{
  std::array <int, 5> myarray = createarray();
  for(int val : myarray){
      std::cout<<val;
  }

    return 0;
}