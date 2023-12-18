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


#define F(x,y) 2*y/x


int main()
{
    double x0, y0, xn, yn, h, Yp, Yc, m1, m2, temp ;

    cout<<"Enter Initial Condition."<< endl;
    cout<<"x0 = ";
    cin>> x0;
    cout<<"y0 = ";
    cin >> y0;
    cout<<"Enter calculation point xn = ";
    cin>>xn;
    cout<<"Enter the value of h: " ;
    cin>>h ;

    cout<<"\n  x0 \t   y0 \t   m1 \t   Yp \t   m2 \t   Yc\n";
    cout<<"-----------------------------------------------\n";
    cout <<fixed<<setprecision(4) ;


    while(x0<xn)
    {
        m1 = F(x0, y0) ;
        Yp = y0+ h*m1 ;
        temp = x0+h ;
        m2 = F(temp, Yp) ;
        Yc = y0+ (h/2) * (m1+m2) ;

        cout<< x0<<"\t "<< y0<<"\t "<< m1<<"\t "<< Yp<<"\t "<< m2<<"\t "<< Yc<< endl ;

        x0 = x0+h ;
        y0 = Yc ;
    }

    cout<<"\nValue of y at x = "<< xn<< " is " << Yc<<endl ;



    return 0 ;
}

/*
Enter Initial Condition.
x0 = 1
y0 = 2
Enter calculation point xn = 2
Enter the value of h: 0.25
Solution: Value of y at x = 2.0000 is 7.8608
*/
