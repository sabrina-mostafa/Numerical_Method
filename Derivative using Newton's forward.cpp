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



class NF
{
public:
    void askN();
    void askX();
    void askF();
    void askXX();
    void forwardTable();
    void calcd1();
    void calcd2();
    void findH();
    void solve();
    void fillDelF();
    void findS();

private:
    double XX, x[10], f[10][10], p[10],diff[10][10],P1,delF[10],f1,f2;
    int n;
    double h,s;
};

void NF::askX()
{
    cout << endl;
    for(int i = 0; i<n; i++ )
    {
        cout << "ENter X[" << i  << "] : ";
        cin >> x[i];
    }
    cout << endl;
}

void NF::askF()
{

    for(int j = 0; j<n; j++ )
    {
        cout << "Enter F[" << j  << "] : ";
        cin >> f[0][j];
    }
    cout << endl;
}

void NF::askXX()
{

    cout << "Enter X for which the value is to be found: ";
    cin >> XX;
}

void NF::forwardTable()
{
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j< n-i; j++)
        {
            f[i][j] = (f[i-1][j+1]-f[i-1][j]);
            if(f[i][j] < 0.0000009 && f[i][j] > 0 || f[i][j] >-0.0000009 && f[i][j]<0)
            {
                f[i][j] = 0;
            }
        }
    }
    cout << endl;
    cout << "Sn\tXi\tf(Xi)\t";
    for(int i = 0; i <n-1; i++)
    {
        cout << i+1 << " diff\t";
    }
    cout << endl;
    for(int i = 0; i < n; i++)
    {
        cout <<i+1 <<"\t" << x[i]<< "\t";
        for(int j = 0; j< n-i; j++)
        {
            cout  << f[j][i] << "\t";
        }
        cout << endl;
    }
}

void NF::findH()
{
    h = x[1] - x[0];
}

void NF::findS()
{
    s = (XX - x[0])/h;
}

void NF::solve()
{
    findH();
    findS();
    fillDelF();
    calcd1();
    calcd2();

    cout <<endl << "The value of f1 : " << f1;
    cout <<endl << "The value of f2 : " << f2;
    cout  << endl << endl;
}

void NF::fillDelF()
{
    for(int i = 1; i<10; i++)
    {
        if(i<n)
            delF[i]=f[i][0];
        else
            delF[i] = 0;
    }
}


void NF::calcd1()
{
    f1 = 1 / h * ( delF[1] + 1/2.0 * (2 * s -1 ) * delF[2] + 1 / (6.0) * (3*s*s - 6 *s +2)*
                   delF[3] + 1 /(24.0) *( 4*s*s*s-18*s*s+22*s-6)*delF[4]);
}

void NF::calcd2()
{
    f2 = 1 / (h*h) * (delF[2] + 1/6.0 * (6*s-6) * delF[3] + 1/24.0 *(12*s*s-36*s+22)*delF[4]);

}

void NF::askN()
{
    cout << "Enter the number of values: ";
    cin >> n;
}


int main()
{

    NF d1;
    d1.askN();
    d1.askX();
    d1.askF();
    d1.askXX();
    d1.forwardTable();
    d1.solve();
}

/*
Enter the number of values: 6

X[0] : 1
X[1] : 2
X[2] : 3
X[3] : 4
X[4] : 5
X[5] : 6

F[0] : 1
F[1] : 8
F[2] : 27
F[3] : 64
F[4] : 125
F[5] : 216

Solution:  The value of f1 : 3
                  The value of f2 : 6
*/
