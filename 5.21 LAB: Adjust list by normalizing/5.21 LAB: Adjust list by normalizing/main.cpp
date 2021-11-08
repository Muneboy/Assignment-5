#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    vector<double> userVals;
    int numVals;
    unsigned int i;
    int numMax;
    
    cin >> numVals;
    
    userVals.resize(numVals); // allocate numVals to be vector size
    
    // loop the vector
    for (i = 0; i < userVals.size(); ++i) {
        cin >> userVals.at(i);
    }
    
    // scanning elements for biggest value
    numMax = 0;
    for (i = 0; i < userVals.size(); ++i) {
        if (numMax < userVals.at(i)) {
            numMax = userVals.at(i);
        }
    }
    
    for (i = 0; i < userVals.size(); ++i) {
        cout << fixed << setprecision(2) << userVals.at(i) / numMax << " ";
    }
    
    cout << endl;
    

   return 0;
}
