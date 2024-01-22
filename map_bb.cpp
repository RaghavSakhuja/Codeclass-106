#include <bits/stdc++.h>   
using namespace std;

void print_map(map<int,int> m){
    cout << "size: " << m.size() << endl;
    for(auto it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
}

void print_umap(unordered_map<int,int> um){
    cout << "size: " << um.size() << endl;
    for(auto it = um.begin(); it != um.end(); it++){
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

    unordered_map<int,int> um;
    um[1] = 100;
    um[3] = 300;
    um[2] = 200;
    um.insert({4,400}); // inserts a key-value
    print_umap(um);
    
    return 0;
}