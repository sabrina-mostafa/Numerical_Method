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


int dx4 [ ] = {-1,   0,   0,  +1} ;
int dy4 [ ] = { 0,  -1,  +1,  0} ;
int dx [ ] = {-1,  -1,  -1,   0,   0,  +1,  +1,  +1} ;
int dy [ ] = {-1,   0,  +1,  -1,  +1,  -1,   0,  +1} ;



double f(double x);
double f(double x)
{
    double a=pow(x, 2.0)-3*x+2.0;
    return a;
}

double fprime(double x);
double fprime(double x)
{
    double b=2*x-3.0 ;
    return b;
}


int main()
{
    double x,x1,e,fx,fx1;
    cout.precision(4) ;
    cout.setf(ios::fixed);

    cout<<"Enter the initial guess:\n";
    cin>>x1;
    cout<<"Enter desired accuracy:\n";
    cin>>e;

    fx=f(x);
    fx1=fprime(x);
    cout <<"x{i}"<<"   "<<"    x{i+1}"<<"        "<<"|x{i+1}-x{i}|"<<endl;

    do
    {
        x=x1 ;
        fx=f(x) ;
        fx1=fprime(x) ;
        x1=x-(fx/fx1) ;
        cout<<x<<"     "<<x1<<"           "<<abs(x1-x)<<endl;
    }
    while (fabs(x1-x)>=e);

    cout<<"\nThe root of the equation is "<<x1<<endl<<endl;
    return 0;
}
