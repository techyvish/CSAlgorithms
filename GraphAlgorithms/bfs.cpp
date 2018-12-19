//
// Created by Vishal Patel on 2018-12-19.
//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int VISITED=1;
int UNVISITED=0;

vi dfs_num(50);

vector<vii> AdjList(500);
queue<int> q;

using namespace std;

void bfs(int u) {
    cout << u << " ";
    q.push(u);

    while ( !q.empty() ) {
        int a = q.front();
        q.pop();

        for (int j = 0; j < (int) AdjList[a].size(); j++) {
            ii v = AdjList[u][j];
            if (dfs_num[v.first] == UNVISITED ) {
                cout << v.first << " ";
                dfs_num[v.first] = VISITED;
                q.push(v.first);
            }
        }

    }

}

int main() {

    pair<int,int> p0(0,0);
    pair<int,int> p1(1,0);
    pair<int,int> p2(2,0);
    pair<int,int> p3(3,0);

    vector<vii> vv;
    vii v(5);

    AdjList[0].push_back(p1);
    AdjList[0].push_back(p2);
    AdjList[0].push_back(p3);

    AdjList[1].push_back(p0);
    AdjList[1].push_back(p2);
    AdjList[1].push_back(p3);

    bfs(0);

    return 0;
}