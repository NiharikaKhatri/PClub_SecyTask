#include<bits/stdc++.h>
typedef long long int ll;
#define ld long double
#define pb push_back
#define mp make_pair

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n>>k;
        int arr[n];
        int ctr = 0;
        ll sum = 0,ans[3]={0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int i = 0, j = 0;
        while(j<n){
            if(arr[j]%2){
                ctr++;
            }
            sum += arr[j];
            if(ctr>k){
                while(ctr>k){
                    if(arr[i]%2){
                        ctr--;
                    }
                    sum -= arr[i];
                    i++;
                }
            }
            if (sum > ans[0])
            {
                ans[0] = sum;
                ans[1] = i;
                ans[2] = j;
            }
            j++;
        }
        cout << ans[0] << " " << ans[1] + 1 << " " << ans[2] + 1 << "\n";
    }
    return 0;
}