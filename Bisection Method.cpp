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




double f(double x)
{
    double a = pow(x, 3) - x - 1.0 ;
    return a ;
}

int main()
{
    cout.precision(4) ;
    cout.setf(ios::fixed) ;

    double a, b, c, e, fa, fb, fc ;
    a:cout << "Enter the initial guesses:\na = " ;
    cin >> a ;
    cout << "\nb = " ;
    cin >> b ;
    cout << "\nEnter the degree of accuracy desired" << endl ;
    cin >> e ;                   // 0.001

    if(f(a) * f(b) > 0)
    {
        cout << "Please enter a different intial guess" << endl;
        goto a;
    }
    else
    {
        while (fabs(a - b) >= e)
        {
            c = (a + b) / 2.0;
            fa = f(a);
            fb = f(b);
            fc = f(c);
            cout << "a=" << a << "     " << "b=" << b<<"     " <<"f(a)=" << fa << "     " << "f(b)=" << fb << "     " << "c=" << c << "      f(c)=" << fc << endl;
            if (fc == 0)
            {
                cout << "The root of the equation is " << c ;
                break;
            }
            if (fa * fc > 0)
            {
                a = c;
            }
            else if (fa * fc < 0)
            {
                b = c;
            }
        }
    }

    cout << "The root of the equation is " << c ;


    return 0;
}

