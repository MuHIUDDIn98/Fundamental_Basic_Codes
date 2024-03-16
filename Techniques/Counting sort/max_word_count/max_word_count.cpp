#include <bits/stdc++.h>
#include <sstream>
#include <unordered_map>

using namespace std;

pair<string, int> mostFrequentWord(const string& sentence) {
    map<string, int> wordCount;
    stringstream ss(sentence);
    string word;

    while (ss >> word) {
    
        wordCount[word]++;
    }

    pair<string, int> maxWord("", 0);


    for (const auto& p : wordCount) {
        if (p.second > maxWord.second) {
            maxWord.first = p.first;
            maxWord.second = p.second;
        }
    }

    return maxWord;
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); 

    for (int t = 0; t < T; ++t) {
        string sentence;
        getline(cin, sentence);

        auto result = mostFrequentWord(sentence);
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}
