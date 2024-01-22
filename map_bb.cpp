#include <bits/stdc++.h>   
using namespace std;

void print_map(map<int,int> m){
    cout << "size: " << m.size() << endl;
    for(auto it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
}

int main(){
    map<int,int> m;
    m[1] = 100;
    m[3] = 300;
    m[2] = 200;
    m.insert({4,400}); // inserts a key-value
    print_map(m);
    m.erase(m.begin()); // deletes based on iterator position
    m.erase(1); // deletes based on key value
    print_map(m);
    m.erase(2);
    print_map(m);
    m.clear(); // empties the map
    print_map(m);
    if(m.empty())
    {
        cout << "map is empty" << endl;
    }
    else
    {
        cout << "map is not empty" << endl;
    }
    return 0;

}