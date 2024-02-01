// to be compile with g++ -DYourName e.cpp -o e

#include <bits/stdc++.h>
using namespace std; 

#define int long long int
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;
typedef vector<vector<int>> vvi;
typedef vector<vii> vvii;
typedef vector<bool> vb;
typedef vector<vector<bool>> vvb;
typedef vector<ld> vd;
typedef vector<string> vs;
typedef map<int, int> mii;
typedef set<int> si;
typedef set<pair<int, int>> sii;
typedef multiset<int> msi;
typedef priority_queue<int> maxhi;
typedef priority_queue<pii> maxhii;
typedef priority_queue <int, vector<int>, greater<int>> minhi;
typedef priority_queue <pii, vector<pii>, greater<pii>> minhii;

#define nline "\n"
#define sz(x) (int)x.size()
#define rep(xx) for(int aa = 0; aa < xx; aa++)
#define rep_u(ii, aa, bb) for(int ii = aa; ii < bb; ii++)
#define rep_d(ii, aa, bb) for(int ii = aa; ii >= bb; ii--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sum_all(x) accumulate(all(x), 0LL)
#define max_idx(x) max_element(all(x)) - x.begin()
#define min_idx(x) min_element(all(x)) - x.begin()
#define pcnt(x) __builtin_popcountll(x)
#define clz(x) __builtin_clzll(x)
#define ctz(x) __builtin_ctzll(x)  
#define prec(x) setprecision(x) << fixed
#define yesno(x) cout << (x ? "YES" : "NO") << nline

#ifdef YourName
    #define watch(x) cerr << (#x) << " is " << x << endl;
    #define watch2(x,y) cerr << (#x) << " is "  << (x) << " and " << (#y) << " is " << (y) << endl;
    #define watch3(x,y,z) cerr << (#x) << " is " << (x) << " and " << (#y) << " is " << (y) << " and " << (#z) << " is " << (z) << endl;
    #define watch4(x,y,z,w) cerr << (#x) << " is " << (x) << " and " << (#y) << " is " << (y) << " and " << (#z) << " is " << (z) << " and " << (#w) << " is " << (w) << endl;
    #define watch5(x,y,z,w,e) cerr << (#x) << " is " << (x) << " and " << (#y) << " is " << (y) << " and " << (#z) << " is " << (z) << " and " << (#w) << " is " << (w) <<" and "<< (#e) << " is " << (e) << endl;
    #define dis(a,b,c,d,e) cerr<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
    //watch a vector<int>
    void watcharr(vi arr){
        cerr<<"arr is : ";
        for(int i=0;i<arr.size();i++){cerr<<arr[i]<<" ";}
        cerr<<endl;}
#else
    #define watch(x) 0;
    #define watch2(x,y) 0;
    #define watch3(x,y,z) 0;
    #define watch4(x,y,z,w) 0;
    #define watch5(x,y,z,w,e) 0;
    #define dis(a,b,c,d,e) 0;
    void watcharr(vi arr){return;}
#endif
int sign(int x) {return (x > 0) - (x < 0);}

const int inf = LLONG_MAX;
const int neg_inf = LLONG_MIN;
const int mod = 1000000007;
// const int mod = 998244353;
const int N = 4e5;     
const ld pi = 3.141592653589793;

/*  0 for single test case
    1 for multiple test cases
    2 for multiple test cases with case number */
#define RUN_TESTS 0

void solve(){

    int n; cin>>n;
    vi arr(n);
    rep_u(i,0,n) cin>>arr[i];

    cout<<"printing vector\n";
    rep_u(i,0,n) cout<<arr[i]<<" ";
    cout<<nline;
    cout<<"Sum: "<<sum_all(arr)<<" Max_idx: "<<max_idx(arr)<<" Min_idx: "<<min_idx(arr)<<nline;

    cin>>n; 
    vii arr2;
    rep_u(i,0,n){
        int x; cin>>x;
        arr2.pb(mp(x,i));
    }
    cout<<"unsorted\n";
    rep_u(i,0,n) cout<<arr2[i].first<<" "<<arr2[i].second<<nline;

    sort(all(arr2));
    cout<<"sorted\n";
    rep_u(i,0,n) cout<<arr2[i].first<<" "<<arr2[i].second<<nline;

    cin>>n;
    vvi arr3(n,vi(2,0));
    rep_u(i,0,n){
        int x,y; cin>>x>>y;
        arr3[i][0]=x;
        arr3[i][1]=y;

        // if(i==3)        
        watch(x+y);

        // arr3[i][0]=arr2[i].first;
        // arr3[i][1]=arr2[i].second;
    }

    cout<<"unsorted\n";
    rep_u(i,0,n) cout<<arr3[i][0]<<" "<<arr3[i][1]<<nline;
    sort(all(arr3));
    cout<<"sorted\n";
    rep_u(i,0,n) cout<<arr3[i][0]<<" "<<arr3[i][1]<<nline;

    int m;
    cin>>n>>m;
    vvi arr4(n,vi(m,0));
    rep_u(i,0,n) rep_u(j,0,m) cin>>arr4[i][j];
    cout<<"printing 2d vector\n";
    rep_u(i,0,n){
        rep_u(j,0,m) cout<<arr4[i][j]<<" ";
        cout<<nline;
    }

}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    #ifdef YourName
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
        auto start = chrono::high_resolution_clock::now();
    #endif

    #if RUN_TESTS == 1
        int t; cin >> t; for(int tt = 1; tt <= t; tt++){watch(tt); solve();}
    #elif RUN_TESTS == 2
        int t; cin >> t; for(int tt = 1; tt <= t; tt++){cout << "Case #" << tt << ": "; watch(tt); solve();}
    #else
        solve();
    #endif

    #ifdef YourName
        auto stop = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
        cerr << "\nTime elapsed: " << duration.count() / 1000.0 << " ms.\n";
    #endif

    return 0;
}
