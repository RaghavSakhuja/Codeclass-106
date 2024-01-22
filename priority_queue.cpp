#include <bits/stdc++.h>   
using namespace std;

void print_pq(priority_queue<int> pq) {
    cout << "Printing priority queue:";
    while(!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}

void print_pq(priority_queue<int, vector<int>, greater<int>> pq) {
    cout << "Printing priority queue:";
    while(!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}

void print_pq(priority_queue<pair<int, int>> pq) {
    cout << "Printing priority queue:\n";
    while(!pq.empty()) {
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }
    cout << endl;
}

int main() {
    //By default max priority queue in stl
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    print_pq(pq);
    //You can declare a min priority queue with the following syntax
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(10);
    pq1.push(20);
    pq1.push(30);
    print_pq(pq1);
    pq1.pop();
    //priority queues can have different data types
    priority_queue<pair<int, int>> pq2;
    //the above queue will be sorted based on the first element of the pair, in case of tie, the second element will be used
    pq2.push({10, 20});
    pq2.push({20, 30});
    pq2.push({20, 100});
    pq2.push({30, 40});
    cout << "Size of Priority queue: " <<  pq2.size() << endl;
    print_pq(pq2);
    return 0;
}
