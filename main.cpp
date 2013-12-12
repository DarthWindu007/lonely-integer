#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/* Head ends here */
int lonelyinteger(vector < int > a) {
	bool unique = true;
	int value = 0;
	for(int i=0; i<a.size(); i++){
		value = a[i];
		unique = true;
		for(int j=0; j<a.size() & unique; j++){
			if(a[j]==value & i!=j)
				unique = false;

		}
		if (unique)
		{
			return value;
		}
	}
return 0;
}
/* Tail starts here */
int main() {
    int res;
    
    int _a_size;
    cin >> _a_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    vector<int> _a;
    int _a_item;
    for(int _a_i=0; _a_i<_a_size; _a_i++) {
        cin >> _a_item;
        _a.push_back(_a_item);
    }
    
    res = lonelyinteger(_a);
    cout << res;
    cout << endl;
    
    return 0;
}