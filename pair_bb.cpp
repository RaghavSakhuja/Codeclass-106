#include <bits/stdc++.h>   
using namespace std;

int main() {
    // Creating a pair of integers
    pair<int, int> Pair1 = make_pair(1, 2);

    // Accessing elements of the pair
    cout << "Pair elements: " << Pair1.first << " and " << Pair1.second << endl;

    pair<int, int> Pair2 = make_pair(1,3);

    cout<<"Comparing Pair1 and Pair2: "<<(Pair1>Pair2)<<endl;

    Pair1 = make_pair(2,1);

    cout<<"Comparing Pair1 and Pair2: "<<(Pair1>Pair2)<<endl;


    pair<string, int> Pair3 = make_pair("Foobar", 106);
    pair<string,string> Pair4 = make_pair("Foobar", "Barfoo");

    // cant compare pair of different types
    cout<<"Comparing Pair3 and Pair4: "<<(Pair3.first==Pair4.first)<<endl;

    return 0;
}