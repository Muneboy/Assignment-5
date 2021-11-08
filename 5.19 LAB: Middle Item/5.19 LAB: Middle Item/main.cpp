#include <iostream>
#include <vector>
using namespace std;

int main() {
    int startMax = 15;
    vector<int> userVals(startMax);
    unsigned int i;
    double mid;
    
    
    for(i = 0; i < userVals.size(); ++i) {
        cin >> userVals.at(i);
        
        if(userVals.at(i) < 0) {
            break;
        }
    }
    
    userVals.resize(i);
    
    if(userVals.size() > 9) {
        cout << "Too many inputs" << endl;
    }
    else {
        mid = userVals.size() / 2;
        cout << "Middle item" << userVals.at(mid) << endl;
    }
    
   return 0;
}
