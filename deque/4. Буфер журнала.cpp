//4
#include <iostream>     
#include <deque>        
#include <string>       

class Logger {
private:
    std::deque<std::string> buffer;  
    size_t maxSize;                 

public:
    Logger(size_t n) : maxSize(n) {}
    void add(const std::string& message) {
        if (buffer.size() >= maxSize) {
            buffer.pop_front(); 
        }
        buffer.push_back(message); 
    }

    void show() const {
        for (const std::string& msg : buffer) {
            std::cout << msg << std::endl; 
        }
    }
};

int main() {
    Logger log(3);         
    log.add("start");      
    log.add("init");       
    log.add("run");        
    log.add("stop");       

    log.show();            
                          
    return 0;
}
