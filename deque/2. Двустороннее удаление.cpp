//2
#include <iostream>
#include <deque>

void removeFromBothEnds(std::deque<int>&dq, int k ){
     for(int i = 0 ; i<k;i++){
         if(!dq.empty()){
             dq.pop_front();
         }
         else{
             break;
         }
         
     }
     for(int i = 0 ; i<k ;i++){
         if(!dq.empty()){
             dq.pop_back();
         }
         else{
             break;
         }
     }
     
     std::cout<<"Size ="<<dq.size();
     
     for(int val : dq){
         std::cout<<val<<" ";
     }
     
}

int main(){

    std::deque<int>deque = {1,2,3,4,5};
    removeFromBothEnds(deque,2);
    for(int val : deque){
         std::cout<<" ; "<<"{"<<val<<"}"<<" Poxvac listy ";
     }
    

    return 0;
}