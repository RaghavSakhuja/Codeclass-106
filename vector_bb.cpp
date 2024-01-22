#include <bits/stdc++.h>   
using namespace std;


int main() {

    vector<int> myVector;

    myVector.push_back(5);
    myVector.push_back(7);
    myVector.push_back(8);

    cout << "Vector elements: ";
    for (int element : myVector) {
        cout << element << " ";
    }
    cout << endl;

    vector<int> v={1,2,3,4,5};
    cout<<"Size: "<<v.size()<<endl;
    
    v.resize(10);

    cout<<"Size: "<<v.size()<<endl;
    for(auto i:v){cout<<i<<" ";}cout<<endl;

    vector<string> v2={"foo","bar"};
    for(auto i:v2){cout<<i<<" ";}cout<<endl;

    vector<pair<int,int>> v3={{1,2},{3,4}};
    for(auto i:v3){cout<<i.first<<" "<<i.second<<endl;}

    vector<pair<string,int>> v4={{"foo",1},{"bar",2}};
    for(auto i:v4){cout<<i.first<<" "<<i.second<<endl;}

    vector<vector<int>> v5={{1,2,3},{4,5,6}};
    for(auto i:v5){for(auto j:i){cout<<j<<" ";}cout<<endl;}

    return 0;
}
