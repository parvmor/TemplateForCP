#include "bits/stdc++.h"
using namespace std;

#if DEBUG && !ONLINE_JUDGE
    #include "debug.h"
#else
    #define debug(...)
#endif

template<typename T>
void _R(T &x){cin>>x;}
void _R(int &x){scanf("%d",&x);}
void _R(long long &x){scanf("%lld",&x);}
void _R(double &x){scanf("%lf",&x);}
void _R(char &x){scanf("%c",&x);}
void _R(char *x){scanf("%s",x);}
template<typename T>
void _R(vector<T> &x){
    for(auto it=x.begin();it!=x.end();it++){
        _R(*it);
    }
}
void R(){}
template<typename T,typename... K>
void R(T& head,K&... tail){_R(head);R(tail...);}

template<typename T>
void _W(const T &x,const char c){cout<<x;}
void _W(const int &x,const char c){printf("%d",x);}
void _W(const long long &x,const char c){printf("%lld",x);}
void _W(const double &x,const char c){printf("%lf",x);}
void _W(const char &x,const char c){printf("%c",x);}
void _W(const char *x,const char c){printf("%s",x);}
template<typename T>
void _W(const vector<T> &x,const char c){
    for(auto it=x.cbegin();it!=x.cend();it++){
        if(it!=x.cbegin())putchar(c);
        _W(*it,c);
    }
}
void W(){}
template<typename T,typename... K>
void W(const T& head,const K&... tail){
    _W(head,' ');
    putchar(sizeof...(tail)?' ':'\n');
    W(tail...);
}

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef long long lli;

#define pb push_back
#define IT iterator
#define PQ priority_queue
#define GI greater<int>
#define fi first
#define se second
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define REP(i,a) FOR(i,0,(int)(a)-1)
#define FORd(i,a,b) for(int i=(a);i>=(b);i--)
#define TR(c,it) for(auto it:(c))
#define all(x) x.begin(), x.end()
#define uni(x) x.erase(unique(all(x)), x.end())
#define sqr(x) ((x)*(x))
#define LC(x) ((x)<<1)
#define RC(x) (((x)<<1)+1)
#define EPS 1e-9
#define EULER 2.7182818284
#define MOD 1000000007

const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
template<typename T> inline T gcd(T a,T b) {if(a==0)return b;return gcd(b%a,a);}
template<typename T> inline void amin(T& x,T y) {if(x>y)x=y;}
template<typename T> inline void amax(T& x,T y) {if(x<y)x=y;}
template<typename A,typename B>
class comp{public:bool operator()(const pair<A,B> &a, const pair<A,B> &b){
if(a.fi!=b.fi)return a.fi<b.fi;
else return a.fi>b.fi;
}};
//global variables

//end global variables

void preprocess(void){
    return;
}

int main(void){
    //freopen("output.txt","w",stdout);
    //freopen("input.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.precision(20);
    preprocess();
    int teeee;
    //cin>>teeee;
    teeee=1;
    FOR(zeeee,1,teeee){
        //printf("Case #%d: ",zeeee);
    }
    return 0;
}
