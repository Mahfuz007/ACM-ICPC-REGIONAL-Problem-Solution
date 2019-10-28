/* SPARROW 2019

    Problem Name: 6659 - Dromicpalin Substrings
    Problem Link: https://icpcarchive.ecs.baylor.edu/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4671
    Source: ICPC Dhaka Regional 2013

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
#define mk
#define mx

int fx[]={0,1,1,1,0,-1,-1,-1};
int fy[]={1,1,0,-1,-1,-1,0,1};

int cnt[27];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("1015.txt","w",stdout);
    int t,cs=1;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            memset(cnt,0,sizeof cnt);
            int odd=0;
            for(int j=i;j<s.size();j++){
                cnt[s[j]-'a']++;
                if(cnt[s[j]-'a']==1) odd++;
                else if(cnt[s[j]-'a']%2!=0){
                    odd++;
                }
                else odd--;
                if(odd<=1) ans++;
            }
        }

        cout<<"Case "<<cs++<<": "<<ans<<'\n';
    }
    return 0;
}

