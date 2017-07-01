#include <bits/stdc++.h>
using namespace std;

#if DEBUG && !ONLINE_JUDGE
    #define debug(args...)  (Debugger()),args
    class Debugger{
        public:
            Debugger(const string& _seperator = ", "):
                fi(true),seperator(_seperator){}
            template<typename T> Debugger& operator , (const T& v){
                if(!fi)
                    cerr<<seperator;
                cerr<<v;
                fi=false;
                return *this;
            }
            ~Debugger() {cerr<<endl;}
        private:
            bool fi;
            string seperator;
    };
    #define DBG(x) {cerr << #x << " = "; debug(x);}
    template<typename T> inline ostream& operator << (ostream& os,const vector<T>& v){
        bool fi=true;
        os<<"[";
        for(auto i:v){
            if(!fi)
                os<<", ";
            os<<i;
            fi=false;
        }
        return os<<"]";
    }
#else
    #define debug(args...)
    #define DBG(x)
#endif

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
#define _1 first
#define _2 second
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define REP(i,a) FOR(i,0,(int)(a)-1)
#define FORd(i,a,b) for(int i=(b);i>=(a);i--)
#define TR(c,it) for(auto i:(c))
#define all(x) x.begin(), x.end()
#define uni(x) x.erase(unique(all(x)), x.end())
#define sqr(x) ((x)*(x))
#define L(x) ((x)<<1)
#define R(x) (((x)<<1)+1)
#define EPS 1e-9
#define EULER 2.7182818284
#define MOD 1000000007

const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
template<typename T> inline T gcd(T a,T b) {if(a==0)return b;return gcd(b%a,a);}
template<typename T> inline void amin(T& x,T y) {if(x>y)x=y;}
template<typename T> inline void amax(T& x,T y) {if(x<y)x=y;}

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
	int t;
	//cin>>t;
	t=1;
	FOR(z,1,t){
		//printf("Case #%d: ",z);
        
	}
	return 0;
}
