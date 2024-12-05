        #include <bits/stdc++.h>
        using namespace std;

        #define int            long long
        #define ef             else if
        #define vi             vector<int>
        #define pb             push_back
        #define double         long double
        #define no             cout << "NO\n"
        #define yes            cout << "YES\n"
        #define all(v)         (v).begin(), (v).end()
        #define Rall(v)        (v).rbegin(), (v).rend()
        #define f(i , a , b)   for(int i = a ; i < b ; ++i)
        #define stop(v)        return void(cout << (v) << '\n')
        #define fast           ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        // 0 -> 9   48 -> 57     a -> z   65 -> 90     A -> Z   97 -> 122
        /*النعيم لايُدرك بالنعيم وأن من آثر الراحة فاتته الراحة وأنه بحسب ركوب الأهوال واحتمال المشاق تكون الفرحة واللذة*/



        // const MOD = 1e9 + 7;

        int gcd(int a, int b)
        {
            while(b != 0)
            {
                int old = a;
                a = b;
                b = old % b; 
            }
            return a;
        }
        int lcm(int a, int b)
        {
            return (a*b) / gcd(a,b);
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
        void solve() 
        {
            char c; cin >> c;
            string t = "qwertyuiopasdfghjkl;zxcvbnm,./" , s;
            cin >> s;
            if(c == 'R')
            {
                for(auto &x : s)
                {
                    for (int i = 0; i < 30; i++)
                        if(x == t[i]) 
                        {
                            cout << t[i-1];
                            break;
                        }
                }
            }
            else
            {
                for(auto &x : s)
                {
                    for (int i = 0; i < 30; i++)
                        if(x == t[i]) 
                        {
                            cout << t[i+1];
                            break;
                        }
                }
            }

            
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
            while(t--) solve();
            return 0;
        }
        


            
