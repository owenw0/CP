#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Get input
    int n;
    cin >> n; // 3

    double heights[n + 1];
    for (int i = 0; i < n + 1; i++) {
        cin >> heights[i]; // 2 3 6 2
    }

    double widths[n];
    for (int i = 0; i < n; i++) {
        cin >> widths[i]; // 4 1 1
    }

    // solve
    double area;
    for (int i = 0; i < n; i++) {
        double square = min(heights[i], heights[i + 1]) * widths[i];
        double triangle = (abs(heights[i] - heights[i + 1]) * widths[i]) / 2;
        area += square + triangle;
    }
    printf("%.2f\n", area);
}
