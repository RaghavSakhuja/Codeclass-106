#include <bits/stdc++.h>   
using namespace std;

void print_deque(deque<int> dq) {
    for(auto x: dq) {
        cout << x << " ";
    }
    cout << endl;
}

void print_reverse_deque(deque<int> dq) {
    for(auto it = dq.rbegin(); it != dq.rend(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main(){
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_front(5);
    cout << "Deque before erasing: " << endl;
    print_deque(dq);
    dq.erase(dq.begin() + 1);
    cout << "Deque after erasing: " << endl;
    print_deque(dq);
    dq.pop_front();
    cout << "Deque after popping front: " << endl;
    print_deque(dq);
    dq.pop_back();
    cout << "Deque after popping back: " << endl;
    print_deque(dq);
    dq.clear();
    dq.insert(dq.begin(), 20);
    deque<int>::iterator it = dq.begin(); 
    ++it; 
    vector<int> v(2, 10); 
    dq.insert(it, v.begin(), v.end()); 
    cout << "Deque after inserting: " << endl;
    print_deque(dq);
    return 0;
}