#include <iostream>
#include <vector>

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int VISITED=1;
int UNVISITED=0;

vi dfs_num(50);

vector<vii> AdjList(500);

void dfs(int u){

    printf("%d ", u);
    dfs_num[u] = VISITED;

    for ( int j = 0 ; j < (int)AdjList[u].size(); j++){
        ii v = AdjList[u][j];
        if ( dfs_num[v.first] == UNVISITED ){
            dfs(v.first);
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

    dfs(0);

}

