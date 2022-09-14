#include "akhil.h"
using namespace std;

void cyclic_rearrange_arr_i_i(vector<int>& arr){
    for (int i = 0; i < arr.size();) {
        if(arr[i] != -1 && arr[i] != arr[arr[i]]){
            swap(arr[i],arr[arr[i]]);
        }else{
            i++;
        }
    }
}

void reverse_integer_array(vector<int>& arr, int start, int end){
    while (start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void odd_is_less_than_even(vector<int>& arr){
    vector<int> temp(arr.size());
    copy(arr.begin(), arr.end(), temp.begin());
    sort(temp.begin(), temp.end());
    int evenLength = arr.size()/2;
    int oddLength = arr.size() - evenLength;
    int j=oddLength-1;
    for (int i = 0; i < arr.size(); i+=2) {
        arr[i] = temp[j--];
    }
    j=oddLength;
    for (int i = 1; i < arr.size(); i+=2) {
        arr[i] = temp[j++];
    }
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
//    cyclic_rearrange_arr_i_i(arr);
//    reverse_integer_array(arr, 6, 7);
    odd_is_less_than_even(arr);
    copy(arr.begin(),arr.end(),ostream_iterator<int>(cout, " "));
}
// -1 -1 6 1 9 3 2 -1 4 -1