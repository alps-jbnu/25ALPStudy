#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    int y_cost = 0, m_cost = 0;

    for (int i = 0; i < n; i++) {
        int time;
        cin >> time;

        y_cost += 10 * ((time / 30) + 1);
        m_cost += 15 * ((time / 60) + 1);

    }

    if (y_cost < m_cost) {
        cout << "Y " << y_cost;
    }
    else if (y_cost > m_cost) {
        cout << "M " << m_cost;
    } 
    else {
        cout << "Y M " << m_cost;
    }
    
    return 0;   
}