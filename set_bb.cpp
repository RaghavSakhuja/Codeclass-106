#include <bits/stdc++.h>   
using namespace std;

void print_set(set<int> s){
    cout<<"Set elements: ";
    for (int element : s) {
        cout << element << " ";
    }
    cout << endl;
}

int main() {
    // Creating a set of integers
    set<int> Set;

    // Inserting elements into the set
    Set.insert(3);
    Set.insert(1);
    Set.insert(2);

    print_set(Set);

    Set.insert(2);

    print_set(Set);

    cout<<"Set size: "<<Set.size()<<endl;
    Set.erase(2);
    cout<<"Set size: "<<Set.size()<<endl;
    print_set(Set);


    vector<int> v={68, 50, 57, 19, 86, 25, 65, 39, 15, 34, 12, 34, 66, 46,3};
    set<int> s(v.begin(),v.end());
    cout<<"Set size: "<<s.size()<<endl;

    print_set(s);

    // merge two sets Set and s
    Set.merge(s);
    cout<<"Set size: "<<Set.size()<<endl;

    print_set(Set);

    // using lowerbounds and upperbounds
    auto it = Set.lower_bound(50);
    cout<<"Lower bound of 50: "<<*it<<endl;

    it = Set.upper_bound(50);
    cout<<"Upper bound of 50: "<<*it<<endl;

    it--;
    cout<<"Element before Upper bound of 50: "<<*it<<endl;

    it--;
    cout<<"Element before Element before Upper bound of 50: "<<*it<<endl;

    // iterating using a iterator
    cout<<"Iterating using iterator: ";
    for(auto it=Set.begin();it!=Set.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    // using find

    it = Set.find(50);
    if(it!=Set.end()){
        cout<<"Found 50"<<endl;
    }
    else{
        cout<<"Not found 50"<<endl;
    }

    // using count

    int count = Set.count(50);
    cout<<"Count of 50: "<<count<<endl;

    // ??? why even count ? 

    // multiset
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);

    cout<<"Count of 1 in multiset: "<<ms.count(1)<<endl;

    //can try all the above operations with multiset


    // unordered set
    

    unordered_set<int> us;
    us.insert(3);
    us.insert(1);
    us.insert(1);
    us.insert(2);

    for(auto it=us.begin();it!=us.end();it++){
        cout<<*it<<" ";
    }




    return 0;
}
