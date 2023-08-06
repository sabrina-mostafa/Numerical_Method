///  ~~~~~Bismillah'hir Rah'maanir Rahim~~~~~  ///

/*  "  Allah(SWT) blesses with knowledge whom he wants. "   */
/*  " Indeed with Hardship, comes Ease. "    */


///         Originator : Sabrina Mostafa
///         Dept. Of CSE
///         International Islamic University Chittagong




#include<bits/stdc++.h>
using namespace std ;

#define   FastRead      ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define   ULL               unsigned long long
#define   LL                  long long
#define   ST                  string
#define   F                    first
#define   S                    second
#define   PB                 push_back
#define   MP                make_pair
#define   pi                   acos(-1.0)
#define   NL                 "\n"
#define    _                    " "






int main ()
{
        cout<<"   ***Horner's Rule***\n\n" ;
        
    int n, x, ans ;
    cout<<"Enter the value of n : " ;       // the highest power
    cin>>n ;
    cout<<"Enter the value of x : " ;
    cin>>x ;

    int a[n+3] ;
    for(int i=n; i>=0; i--)
    {
            cout<<"Enter the value of a"<<i<<" : " ;
            cin>>a[i] ;
    }


    ans = a[n] ;                                // p(n) = a(n)
    for(int i=n-1; i>=0; i--)
        ans = ans*x + a[i] ;           // p(i) = p(i+1)*x + a(i)


        cout<<"\nf(x) = "<<ans<<endl ;


    return 0 ;
}
