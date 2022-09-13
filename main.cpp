#include "akhil.h"
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n;) {
        if(arr[i] != -1 && arr[i] != arr[arr[i]]){
            swap(arr[i],arr[arr[i]]);
        }else{
            i++;
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
