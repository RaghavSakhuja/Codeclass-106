#include <bits/stdc++.h>   
using namespace std;

void print_multiset(multiset<int> s){
    cout<<"Set elements: ";
    for (int element : s) {
        cout << element << " ";
    }
    cout << endl;
}

int main() {
    // Creating a multiset of integers
    multiset<int> Multiset;

    // Inserting elements into the multiset
    Multiset.insert(3);
    Multiset.insert(1);
    Multiset.insert(2);

    print_multiset(Multiset);

    Multiset.insert(2);

    print_multiset(Multiset);

    cout<<"Multiset size: "<<Multiset.size()<<endl;
    Multiset.erase(2);
    cout<<"Mutliset size: "<<Multiset.size()<<endl;
    print_multiset(Multiset);


    vector<int> v={68, 50, 57, 19, 86, 25, 65, 39, 15, 34, 12, 34, 66, 46,3,3};
    multiset<int> s(v.begin(),v.end());
    cout<<"Multiset size: "<<s.size()<<endl;

    print_multiset(s);

    // merge two multisets Set and s
    Multiset.merge(s);
    cout<<"Multiset size: "<<Multiset.size()<<endl;

    print_multiset(Multiset);

    // using lowerbounds and upperbounds
    auto it = Multiset.lower_bound(50);
    cout<<"Lower bound of 50: "<<*it<<endl;

    it = Multiset.upper_bound(50);
    cout<<"Upper bound of 50: "<<*it<<endl;

    it--;
    cout<<"Element before Upper bound of 50: "<<*it<<endl;

    it--;
    cout<<"Element before Element before Upper bound of 50: "<<*it<<endl;

    // iterating using a iterator
    cout<<"Iterating using iterator: ";
    for(auto it=Multiset.begin();it!=Multiset.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    // using find

    it = Multiset.find(50);
    if(it!=Multiset.end()){
        cout<<"Found 50"<<endl;
    }
    else{
        cout<<"Not found 50"<<endl;
    }

    // using count

    int count = Multiset.count(50);
    cout<<"Count of 50: "<<count<<endl;

    // ??? why even count ? 

    // multiset
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);

    cout<<"Count of 1 in multiset: "<<ms.count(1)<<endl;

    return 0;
}
