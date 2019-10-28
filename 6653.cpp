/* SPARROW 2019

    Problem Name: 6653 - Pattern Locker
    Problem Link: https://icpcarchive.ecs.baylor.edu/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4664
    Problem Source: ICPC Dhaka Regional 2013

*/
#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long

#define pr(x) cerr << "\n" << (#x) << " is " << (x) << endl
#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)

#define pfi(x) printf("%d",x)
#define pfl(x) printf("%lld",x)
#define pfd(x) printf("%lf",x)
#define pfc(x) printf("Case %d: ",x)
#define ps printf(" ")
#define pn printf("\n")
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define pf(x) push_front(x)
#define ppf(x) pop_front(x)
#define in(x,y) insert({x,y})
#define sv(a) sort(a.begin(),a.end())
#define zero(arr,a) memset(arr,a,sizeof arr)
#define mod 10000000000007
#define mx

int fx[]={0,1,1,1,0,-1,-1,-1};
int fy[]={1,1,0,-1,-1,-1,0,1};

ll cnt[10004];

int main()
{
    //ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("1015.txt","w",stdout);

    int t,cs=1;
    sci(t);

    while(t--)
    {
        int L,n,m;
        sci(L);sci(n);sci(m);

        ll ans=0,tot=(ll)(L*L);

        cnt[tot]=tot;
        for(ll i=tot-1;i>=1;i--){
            cnt[i]=(cnt[i+1]*i)%mod;
            cnt[i]%=mod;
        }

        for(ll i=n;i<=m;i++){
            ans+=cnt[tot-i+1]%mod;
            ans%=mod;
        }

        pfc(cs++);
        pfl(ans);pn;

    }

    return 0;
}

