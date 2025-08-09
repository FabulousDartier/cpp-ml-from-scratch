#include <iostream>

using namespace std;

class LinearRegression {
private:
    double m; // slope (weight)
    double b; // intercept (bias)
public:
    LinearRegression(double slope, double intercept) {
        m = slope;
        b = intercept;
    }

    void fit(double x[], double y[], int n) {
        
    }
};
