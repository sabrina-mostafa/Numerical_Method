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



double determinant(vector<vector<double>>& matrix)
{
    return matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[2][1] * matrix[1][2])
           - matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[2][0] * matrix[1][2])
           + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[2][0] * matrix[1][1]);
}

int main()
{
    int n, i, j, k ;
    cout << "Enter the size of the square matrix (3 for 3x3): ";
    cin >> n;

    if (n != 3)
    {
        cout << "This code only supports 3x3 matrices. Exiting." << endl;
        return 1;
    }

    vector<vector<double>> A(n, vector<double>(n));
    vector<vector<double>> B(n, vector<double>(1));

    cout << "Enter the elements of the matrix A:" << endl;
    for ( i = 0; i < n; i++)
        for ( j = 0; j < n; j++)
            cin >> A[i][j];

    cout << "Enter the elements of the matrix B:" << endl;
    for ( i = 0; i < n; i++)
        cin >> B[i][0];

    double detA = determinant(A);
        cout<<"\ndeterminant"<<" "<<detA<<endl ;

    if (detA == 0)
    {
        cout << "The matrix A is singular, and its inverse does not exist." << endl;
        return 1;
    }

    vector<vector<double>> A_inverse(n, vector<double>(n));
    double adj;

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            adj=((A[(j + 1) % 3][(i + 1) % 3] * A[(j + 2) % 3][(i + 2) % 3]) - (A[(j + 1) % 3][(i + 2) % 3] * A[(j + 2) % 3][(i + 1) % 3]));
            A_inverse[i][j] = adj / detA;
        }
    }

    vector<vector<double>> X(n, vector<double>(1));

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < 1; j++)
        {
            for ( k = 0; k < n; k++)
            {
                X[i][j] += A_inverse[i][k] * B[k][j];
            }
        }
    }

    cout << "The solution vector X is:" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 1; j++)
        {
            cout << X[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}


/*
A=
3 1 2
2 -3 -1
1 2 1

B = 3 -3 4

Solution is:
1
2
-1
*/
