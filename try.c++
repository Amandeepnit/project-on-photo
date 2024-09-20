#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<double>pq;
   
    int a=7;
    int b=4;
    double avg=(a+b)/2;
    pq.push(avg);
    cout<<pq.top();

}
