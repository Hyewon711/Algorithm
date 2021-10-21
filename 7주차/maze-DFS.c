#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <list>
using namespace std;

int map[100][100];
int max_x;
int max_y;
int minimum = 0;

void find_DFS(int x, int y, int result) {
    if((x == max_x - 1) && (y == max_y -1)) {
        if(minimum > result) minimum = result;
        return;
    }
    map[y][x] = 0;
    
    // find up
    if((y > 0) && map[y-1][x])          find_DFS(x, y-1, result + 1);
    // find down
    if((y < max_y - 1) && map[y+1][x])  find_DFS(x, y+1, result + 1);
    // find left
    if((x > 0) && map[y][x-1])          find_DFS(x-1, y, result + 1);
    // find right
    if((x < max_x -1) && map[y][x+1])   find_DFS(x+1, y, result + 1);
    
    map[y][x] = 1;
}

int main(void) {
    string input;
    cin>>max_y>>max_x;
    minimum = max_x * max_y;
    for(int i=0; i<max_y; i++) {
        cin>>input;
        for(int j=0; j<max_x; j++) {
            map[i][j] = input.at(j) - 48;
        }
    }
    find_DFS(0, 0, 1);
    cout<<minimum;
}