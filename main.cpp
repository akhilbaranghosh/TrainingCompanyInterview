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
int negative_positive(vector<int>& arr){
    int j = -1;
    for (int i = 0; i < arr.size(); ++i) {
        if(arr[i] < 0){
            j++;
            swap(arr[i], arr[j]);
        }
    }
    int pos = j + 1;
    int neg = 0;
    while(pos < arr.size() && neg < arr.size() && arr[neg] < 0){
        swap(arr[pos], arr[neg]);
        pos ++;
        neg+=2;
    }
}
int move_all_zeros_at_the_end_of_array(vector<int>& arr){
    int end = arr.size() - 1;
    int i = 0;
    while (i < end){
        if (arr[i] == 0){
            if(arr[end] != 0){
                swap(arr[i], arr[end]);
                end --;
                i ++;
            } else{
                end --;
            }
        }else{
            i++;
        }
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
//    odd_is_less_than_even(arr);
//    negative_positive(arr);
    move_all_zeros_at_the_end_of_array(arr);
    copy(arr.begin(),arr.end(),ostream_iterator<int>(cout, " "));
}
// -1 -1 6 1 9 3 2 -1 4 -1
//-1 2 -3 4 5 6 -7 8 9
//1 2 0 4 3 0 5 0
//1 2 0 0 0 3 6
//1 9 8 4 0 0 2 7 0 6 0 9