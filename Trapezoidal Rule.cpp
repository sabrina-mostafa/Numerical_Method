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

#define YES cout << "YES"<< endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define yes cout << "yes" << endl
#define no cout << "no" << endl


#define f(x) x/(1+x)



int main()
{
    double lower, upper, Integration, h, Interval, Y0, Yn, x, y, sumY=0 ;
    int i, n ;

    cout<<"lower limit of integration: ";
    cin>>lower;
    cout<<"upper limit of integration: ";
    cin>>upper;
    cout<<"number of intervals(n): ";
    cin>>Interval;


    h = (upper - lower)/Interval;
    cout<<"stepSize: "<<h<<endl ;

    cout<<"\ni \t  x \t   y \n";
    cout<<"------------------------\n";
    cout <<fixed<<setprecision(3) ;

    Y0 = f(lower) ;
    Yn = f(upper) ;
    cout<<"0\t"<<lower<<" \t "<<Y0<<"\n";

    x = lower ;
    for(i=1; i<=Interval-1; i++)
    {
        x =  x+h ;
        y = f(x) ;
        cout<<i<<"\t"<<x<<"\t "<<y<<"\n";
        sumY += y ;
    }
    n = Interval ;
     cout<<n<<"\t"<<upper<<"\t "<<Yn<<"\n";

    Integration = (h/2)  * ( (Y0+Yn) + 2*sumY ) ;

    cout<< endl<<"Required value of integration is: "<< Integration<<endl ;


    return 0;
}

/*

Inputs:
0
1
6
Output:
0.305

*/
