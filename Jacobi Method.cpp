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


#define f1(x,y,z)  (12-2*y-z)/5
#define f2(x,y,z)  (15-x-2*z)/4
#define f3(x,y,z)  (20-x-2*y)/5



int main()
{
    float x0=0, y0=0, z0=0, x1, y1, z1, e1, e2, e3, e;
    int step=1;


    cout<< setprecision(3)<< fixed;


    cout<<"Enter tolerable error: ";
    cin>>e ;

    cout<< endl<<"Count     x       y       z"<< endl;

    do
    {
        x1 = f1(x0,y0,z0);
        y1 = f2(x0,y0,z0);
        z1 = f3(x0,y0,z0);
        cout<< step<<"\t"<< x1<<"\t"<< y1<<"\t"<< z1<< endl;

        e1 = fabs(x0-x1);
        e2 = fabs(y0-y1);
        e3 = fabs(z0-z1);

        step++;

        x0 = x1;
        y0 = y1;
        z0 = z1;
    }
    while(e1>e && e2>e && e3>e);

    cout<< endl<<"Solution: x = "<< x1<<", y = "<< y1<<" and z = "<< z1<< endl ;


    return 0;
}

/*
Input:
tolerable error: 0.01
*/
