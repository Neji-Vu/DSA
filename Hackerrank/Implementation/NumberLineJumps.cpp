#include <iostream>
#include <vector>

using namespace std;
int x1, v1, x2, v2;

int main(int argc, char** argv){
    cin >> x1 >> v1 >> x2 >> v2;

    if((x2 < x1 && v2 > v1) || (x2 > x1 && v2 < v1)){
        if((x2 - x1)%(v1 - v2) == 0){
            cout << "YES";
            return 0;
        }

    }

    cout << "NO";

    return 0;
}
