//3
#include <iostream> 
#include <deque>      

template <typename T>
void rotateDeque(std::deque<T>& dq, int K) {
    int n = dq.size(); 
    if (n == 0 || K == 0) 
    K = K % n;

    if (K > 0) {
        for (int i = 0; i < K; ++i) {
            T last = dq.back();    
            dq.pop_back();         
            dq.push_front(last);  
        }
    } else if (K < 0) {
        for (int i = 0; i < std::abs(K); ++i) {
            T first = dq.front();  
            dq.pop_front();        
            dq.push_back(first);   
        }
    }
}

template <typename T>
void printDeque(const std::deque<T>& dq) {
    for (const T& val : dq) {
        std::cout << val << " ";
    }
    std::cout << "\n";
}

int main() {
    std::deque<int> d = {1, 2, 3, 4, 5};

    rotateDeque(d, 2);
    printDeque(d); 

    rotateDeque(d, -1);
    printDeque(d); 

    return 0;
}
