#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> userVals;
    int vectorMax, lowestVal, secLowVal;
    unsigned int i;
    
    // inputting vector size and bounds
    cin >> vectorMax;
    
    userVals.resize(vectorMax); // allocate numVals to be vector size
    
    // loop the vector
    for (i = 0; i < userVals.size(); ++i) {
        cin >> userVals.at(i);
    }
    
    lowestVal = userVals.at(0);
    // scan for lowest value
    for (i = 0; i < userVals.size(); ++i) {
        if (userVals.at(i) < lowestVal) {
            lowestVal = userVals.at(i);
        }
    }
    
    if (lowestVal == userVals.at(0)) {
        secLowVal = userVals.at(1);
    }
    else {
        secLowVal = userVals.at(0);
    }

    for (i = 0; i < userVals.size(); ++i) {
        if (userVals.at(i) < secLowVal && userVals.at(i) > lowestVal) {
            secLowVal = userVals.at(i);
        }
    }
    
    // scan for second lowest value
    /* secLowVal = userVals.at(0);
    for (i = 0; i < userVals.size(); ++i) {
        if (userVals.at(i) < secLowVal && userVals.at(i) > lowestVal) {
            secLowVal = userVals.at(i);
        }
    } */
    
   cout << lowestVal << " and " << secLowVal << endl;

   return 0;
}
