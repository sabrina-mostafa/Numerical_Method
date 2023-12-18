///  ~~~~~Bismillah'hir Rah'maanir Rahim~~~~~  ///

/*  "  Allah(SWT) blesses with knowledge whom he wants. "   */
/*  " Indeed with Hardship, comes Ease. "    */


///         Originator : Sabrina Mostafa
///         Dept. Of CSE
///         International Islamic University Chittagong




#include<bits/stdc++.h>
using namespace std ;

#define f(x) x/(1+x)



using namespace std;
int main()
{
    double lower, upper, Integration, h, Interval, Y0, Yn, x, y, sum1=0, sum2=0 ;
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

        if(i%2==0)
        {
            sum2 += f(x) ;
        }
        else
        {
            sum1 += f(x) ;
        }

    }

    Integration =(h/3) * ( (Y0+Yn) + 4*sum1 + 2*sum2 ) ;

    cout<< endl <<"Required value of integration is: "<<Integration<<endl ;


    return 0;
}

/*

Inputs:
0
1
6
Output:
0.307

*/
