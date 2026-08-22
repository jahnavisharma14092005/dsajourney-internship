class Solution {
public:

    string encode(vector<string>& strs) {

        string encoded = "";

        for(string s : strs) {
            encoded += to_string(s.size()) + "#" + s;
        }

        return encoded;
    }

    vector<string> decode(string s) {

        vector<string> result;

        int i = 0;

        while(i < s.size()) {

            int j = i;

            // Find the #
            while(s[j] != '#') {
                j++;
            }

            // Get the length
            int length = stoi(s.substr(i, j - i));

            // Move after #
            j++;

            // Take exactly 'length' characters
            string word = s.substr(j, length);

            result.push_back(word);

            // Move to next encoded string
            i = j + length;
        }

        return result;
    }
};