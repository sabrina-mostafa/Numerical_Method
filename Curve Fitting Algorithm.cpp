#include <iostream>
#include <vector>

using namespace std;

    void linearRegression(const vector<double>& x, const vector<double>& y, double& a, double& b) {
    int n = x.size();
    double sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0;

    for (int i = 0; i < n; ++i) {
        sumX += x[i];
        sumY += y[i];
        sumXY += x[i] * y[i];
        sumX2 += x[i] * x[i];
    }


    b = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);
    a = (sumY - b* sumX ) / n;
}

int main() {
    int n;
    cout << "Enter the number of data points: ";
    cin >> n;

    vector<double> x(n);
    vector<double> y(n);

    cout << "Enter the data points in the format 'X Y':" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i];
    }

    double a, b;
    linearRegression(x, y, a, b);

    cout << "Where a = " << a << " and b = " << b << endl;

    return 0;
}

/*
Enter the number of data points: 4
Enter the data points in the format 'X Y':
0 -1
2 5
5 12
7 20
Where a = -1.13793 and b = 2.89655
*/
