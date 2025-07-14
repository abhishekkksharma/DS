#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {-3, 5, -4, 2, 1, 9, 16, -33, 8, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = INT_MIN;
    int ts=0;
    for (int i = 0; i < n; i++) {
        ts+=arr[i];
        if (ts<0)
        {
            ts=0;
        }
        if (ts>ans)
        {
            ans=ts;
        }
    }
    printf("%d",ans);
    return 0;
}
