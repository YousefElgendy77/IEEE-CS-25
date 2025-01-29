    #include <bits/stdc++.h>
    using namespace std;

    #define int            long long
    #define ef             else if
    #define vi             vector<int>
    #define pb             push_back
    #define sp             ' '
    #define double         long double
    #define no             cout << "NO\n"
    #define yes            cout << "YES\n"
    #define all(v)         (v).begin(), (v).end()
    #define Rll(v)         (v).rbegin(), (v).rend()
    #define MOD            1'000'000'007  
    #define f(i , a , b)   for(int i = a ; i < b ; ++i)
    #define sz(x)          (int)(x).size()
    #define stop(v)        return void(cout << (v) << '\n')
    #define fast           ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // 0 -> 9   48 -> 57     a -> z   65 -> 90     A -> Z   97 -> 122

    int GCD(int a, int b)
    {
        while(b != 0)
        {
            int old = a;
            a = b;
            b = old % b; 
        }
        return a;
    }
    int LCM(int a, int b)
    {
        return (a / GCD(a,b)) * b;
    }
    int pow(int a, int p)
    {
        if(p == 0) return 1;
        int sq = pow(a , p/2);
        sq *= sq;

        if(p % 2 == 1) 
            sq = sq * a;
            
        return sq;
    }
    bool prime(int n)
    {
        if(n < 2)
            return false;
        if(n == 2)
            return true;
        for(int i = 2 ; i*i <= n ;++i) 
            if(n % i == 0)
                return false;
        return true;
    }

    const int dx[]= {0 , 0 , 1 , -1};
    const int dy[]= {1 , -1 , 0 , 0};
    // const int dx[]= {0 , 1 , 1 , 1, 0 , -1 , -1 , -1};
    // const int dy[]= {1 , 1 , 0 , -1, -1 , -1 , 0 , 1};
    string dir = "RLDU";
    


    const int N = 2e5+5;
    int n , m , ans;
    bool cat[N], vis[N];
    vector<int>adj[N];

    void dfs(int x , int cats)
    {
        vis[x] = true;
        if(cats > m) return;
        if(!cat[x]) cats = 0;
        bool leaf = true;
        for(auto it : adj[x])
        {
            if(!vis[it])
            {
                dfs(it , cats + cat[it]);
                leaf = false;
            }
        }
        ans += leaf;
    }
    void solve()
    {
        cin >> n >> m;
        for(int i = 1 ; i <= n ; ++i) cin >> cat[i];
        for(int i = 1 ; i < n ; ++i)
        {
            int a , b ; cin >> a >> b;
            adj[a].pb(b);
            adj[b].pb(a);
        }
        dfs(1 , cat[1]);
        cout << ans;
    }
    signed main()
    {
        fast
        // #ifndef ONLINE_JUDGE
        // freopen("input.txt", "r", stdin);    
        // freopen("output.txt", "w", stdout);    
        // #endif   
        int t = 1;
        // cin >> t;
        while(t--) 
        {
            solve();
        }
            
        return 0;
    }


    