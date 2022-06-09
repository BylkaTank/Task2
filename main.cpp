#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <float> prices {2.5, 4.25, 3.0, 10.0};
    vector <int> items {1,1,0,3};
    float sum = 0;
    bool error = false;

    for (int i = 0; i < 4; i++) {
        int j = items[i];
        if (j > prices.size() - 1){
            error = true;
            break;
        } else sum += prices[j];
    }

    if (error) cout << "Error!";
    else cout << "The total cost will be equal to " << sum;
}
