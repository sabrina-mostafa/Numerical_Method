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
    cout<<"   ***Banker's Rounding Rule or Gaussian Rounding ***\n\n" ;

    string num, result="" ;
    char nth_digit, nPlus1th_digit ;
    int sig_digit, index, x, y ;
    cin>>num ;
    cin>>sig_digit ;

    int f=0 ;
    int cnt=0 ;
    for(int i=0; i<num.size()-1; i++)
    {
        if(num[i]=='.')
            continue ;
        if(f==0)
        {
            if(num[i]!='0')
                f=1 ;
        }
        if(f==1)
        {
            cnt++ ;
            nth_digit = num[i] ;
            nPlus1th_digit = num[i+1] ;

            if(cnt==sig_digit)
            {
                index = i ;
                break ;
            }
        }
    }

    x = nPlus1th_digit - '0' ;                      // (n+1)th digit
    //cout<<"x : "<<x<<NL ;

    if(x<5)                                              // (n+1)th digit < 5
        num[index] = num[index] ;

    else if(x>5)                                        // (n+1)th digit > 5
        num[index] = num[index] +1 ;

    else                                                  // (n+1)th digit = 5
    {
        y = nth_digit - '0' ;            // check if nth digit is even of odd
        if(y%2!=0)
            num[index] = num[index] +1 ;

    }

    //cout<<"num[index] : "<<num[index]<<NL ;

    for(int i=0; i<=index; i++)
        cout<<num[i] ;





    return 0 ;
}
