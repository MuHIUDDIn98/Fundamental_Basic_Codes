#include <bits/stdc++.h>
using namespace std;

struct WordInfo {
    string word;
    int count;
    int firstIndex; // order of first appearance
};

// Comparator for max heap based on count, tie-break by firstIndex
struct Compare {
    bool operator()(const WordInfo &a, const WordInfo &b) const {
        if (a.count != b.count)
            return a.count < b.count; // higher count first
        return a.firstIndex > b.firstIndex; // smaller index first
    }
};

int main() {
    int T;
    cin >> T;
    cin.ignore();

    while (T--) {
        string sentence;
        getline(cin, sentence);

        unordered_map<string, int> freq;
        unordered_map<string, int> firstPos;
        int index = 0;

        string word;
        stringstream ss(sentence);
        while (ss >> word) {
            if (freq.find(word) == freq.end()) {
                firstPos[word] = index++; // store first appearance order
            }
            freq[word]++;
        }

        priority_queue<WordInfo, vector<WordInfo>, Compare> pq;

        for (auto &p : freq) {
            pq.push({p.first, p.second, firstPos[p.first]});
        }

        if (!pq.empty()) {
            WordInfo top = pq.top();
            cout << top.word << " " << top.count << "\n";
        }
    }

    return 0;
}
