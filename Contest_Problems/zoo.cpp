#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<queue>
using namespace std;
using ll = long long;
using pii = pair<ll, vector<int>>;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<ll> C(N);
    for (int i = 0; i < N; ++i)
        cin >> C[i];

    vector<vector<int>> zoo_animals(N); 
    vector<vector<int>> animal_zoos(M); 

    for (int i = 0; i < M; ++i)
    {
        int k;
        cin >> k;
        for (int j = 0; j < k; ++j)
        {
            int a;
            cin >> a;
            a--; 
            animal_zoos[i].push_back(a);
            zoo_animals[a].push_back(i);
        }
    }

    
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    map<vector<int>, ll> dist;

    vector<int> init(M, 0);
    pq.emplace(0LL, init);
    dist[init] = 0;

    while (!pq.empty())
    {
        auto [cost, state] = pq.top();
        pq.pop();

        if (all_of(state.begin(), state.end(), [](int x)
                   { return x >= 2; }))
        {
            cout << cost << '\n';
            return 0;
        }

        for (int i = 0; i < N; ++i)
        {
            vector<int> new_state = state;
            for (int animal : zoo_animals[i])
            {
                if (new_state[animal] < 2)
                    new_state[animal]++;
            }

            ll new_cost = cost + C[i];

            if (!dist.count(new_state) || new_cost < dist[new_state])
            {
                dist[new_state] = new_cost;
                pq.emplace(new_cost, new_state);
            }
        }
    }

    return 0;
}
