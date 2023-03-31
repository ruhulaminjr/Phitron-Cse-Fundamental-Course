#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

// structure to represent a circle
struct Circle {
    int x, y, r;
};

// function to check if two circles overlap
bool overlap(Circle c1, Circle c2) {
    int dist = pow(c1.x - c2.x, 2) + pow(c1.y - c2.y, 2);
    int rSum = pow(c1.r + c2.r, 2);
    return dist <= rSum;
}

// function to count the number of circle groups
int countCircleGroups(vector<Circle> circles) {
    int n = circles.size();
    vector<vector<int>> adjList(n); // adjacency list to represent the graph
    vector<bool> visited(n, false); // keep track of visited vertices
    int count = 0; // keep track of the number of connected components
    
    // construct the graph by iterating over all pairs of circles
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (overlap(circles[i], circles[j])) {
                // add edge between vertices i and j in the graph
                adjList[i].push_back(j);
                adjList[j].push_back(i);
            }
        }
    }
    
    // perform BFS to find connected components
  
            count++; // increment the number of connected components
            queue<int> q;
            q.push(i);
            visited[i] = true;
            
            // BFS
            while (!q.empty()) {
                int u = q.front();
                q.pop();
                for (int v : adjList[u]) {
                    if (!visited[v]) {
                        visited[v] = true;
                        q.push(v);
                    }
                }
            }
        }
    }
    
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<Circle> circles(n);
    
    // read input
    for (int i = 0; i < n; i++) {
        cin >> circles[i].x >> circles[i].y >> circles[i].r;
    }
    
    // count the number of circle groups
    int ans = countCircleGroups(circles);
    
    cout << ans << endl;
    
    return 0;
}
