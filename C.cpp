#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> house[5];

int main(){
    int x;
    while(scanf("%d", &x) && x != 0){
        if(x >= 0)
            house[0].push_back(x);
        else
            house[1].push_back(-x);
    }
    sort(house[0].begin(), house[0].end());
    sort(house[1].begin(), house[1].end());
    int idx[5], ans = 0, cnt = 0, last = -1;
    idx[0] = idx[1] = 0;
    while(idx[0] < house[0].size() && idx[1] < house[1].size()){
        int now;
        //printf("Compare %d(%d) and %d(%d)\n", house[0][idx[0]], idx[0], house[1][idx[1]], idx[1]);
        if(house[0][idx[0]] < house[1][idx[1]])
            now = 0;
        else if(house[0][idx[0]] > house[1][idx[1]])
            now = 1;
        else if(house[0][idx[0]] == house[1][idx[1]]){
            cnt = 0;
            last = -1;
            ans++;
            idx[0]++;
            idx[1]++;
            continue;
        }
        if(cnt == 0){
            last = now;
            cnt++;
        }
        else{
            if(now == last)
                cnt++;
            else if(now != last){
                //printf("%d %d\n", idx[0], idx[1]);
                cnt = 0;
                ans++;
            }
        }
        idx[now]++;
    }
    if(last != -1 && idx[1-last] < house[1-last].size())
        ans++;
    printf("%d", ans);
    return 0;
}
