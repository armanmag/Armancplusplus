//1
#include <iostream>
#include <deque>

void createAndFillDeque(int n){
    std::deque<int>dq;
    
    for(int i = 2; i<n; i+=2){
        dq.push_front(i);
    }
    
    for(int i = 1; i<n;i+=2){
        dq.push_back(i);
    }

    for(int tiv:dq){
        std::cout<<tiv<<" ";
    }
}

int main()
{
    int n = 12;
    createAndFillDeque(n);

    return 0;
}
