class Solution {
  public:
    bool search(vector<vector<char> >& board, const string& word, int index, int x,
            int y) {

    // If position of the cell is out of boundary of board or
    // letter in current cell does not match letter of word
    if (x < 0 || x == board[0].size() || y < 0 || y == board.size() ||
        word[index] != board[y][x])
        return false;

    // Base case : each character of the word has been matched
    if (index == word.length() - 1) return true;

    // mark the current cell as visited
    char cur = board[y][x];
    board[y][x] = '#';
    bool found = search(board, word, index + 1, x + 1, y)        // bottom
                 || search(board, word, index + 1, x - 1, y)     // top
                 || search(board, word, index + 1, x, y + 1)     // right
                 || search(board, word, index + 1, x, y - 1)     // left
                 || search(board, word, index + 1, x + 1, y + 1) // bottom right
                 || search(board, word, index + 1, x - 1, y + 1) // top right
                 || search(board, word, index + 1, x + 1, y - 1) // bottom left
                 || search(board, word, index + 1, x - 1, y - 1); // top left

    // revert the current cell back to its original state
    board[y][x] = cur;
    return found;
}

bool exist(vector<vector<char> >& board, string word) {
    if (board.size() == 0) return false;

    // Consider every character cell and look for all words
    // starting with this character
    for (int i = 0; i < board[0].size(); i++)
        for (int j = 0; j < board.size(); j++)
            if (search(board, word, 0, i, j)) return true;

    return false;
}

vector<string> wordBoggle(vector<vector<char> >& board,
                      vector<string>& dictionary) {
    vector<string> result;

    // Iterate through every word in the dictionary
    for (int i = 0; i < dictionary.size(); ++i) {
        string word = dictionary[i];
        if (exist(board, word)) result.push_back(word);
    }
    return result;
}
};

2nd __code_model_32__
    trie search void
    insert(struct TrieNode *root, string key)
{
    int level;
    int length = key.size();
    int index;

    struct TrieNode *pCrawl = root;

    for (level = 0; level < length; level++)
    {
        index = CHAR_TO_INDEX(key[level]);
        if (!pCrawl->children[index])
            pCrawl->children[index] = getNode();

        pCrawl = pCrawl->children[index];
    }

    // mark last node as leaf
    pCrawl->isLeaf = true;
}

// Returns true if key presents in trie, else false
bool search(struct TrieNode *root, string key)
{
    int level;
    int length = key.size();
    int index;
    struct TrieNode *pCrawl = root;

    for (level = 0; level < length; level++)
    {
        index = CHAR_TO_INDEX(key[level]);
        if (!pCrawl->children[index])
            return false;

        pCrawl = pCrawl->children[index];
    }

    return (pCrawl != NULL && pCrawl->isLeaf);
}

trie delete

    class Solution
{
public:
    int leafNode(trie_node_t *pNode)
    {
        return (pNode->value != 0);
    }

    int isItFreeNode(trie_node_t *pNode)
    {
        int i;
        for (i = 0; i < ALPHABET_SIZE; i++)
        {
            if (pNode->children[i])
                return 0;
        }

        return 1;
    }

    void remove(trie_node_t *root, char key[], int level, int len)
    {
        // If tree is empty
        if (!root)
            return;

        // If last character of key is being processed
        if (level == len)
        {

            // This node is no more end of word after
            // removal of given key
            if (root->value)
                root->value = 0;

            // If given is not prefix of any other word
            if (isItFreeNode(root))
            {

                root = NULL;
            }
            return;
        }

        // If not last character, recur for the child
        // obtained using ASCII value
        int index = INDEX(key[level + 1]);
        remove(root->children[index], key, level + 1, len);

        // If root does not have any child (its only child got
        // deleted), and it is not end of another word.
        if (isItFreeNode(root) && root->value == false)
        {

            root = NULL;
        }
    }

    void deleteKey(trie_node_t *root, char key[])
    {
        int len = strlen(key);

        if (len > 0)
        {
            remove(root->children[INDEX(key[0])], key, 0, len - 1);
        }
    }
};

hamilton class Solution
{
public:
    vector<vector<int>> V;
    bool dfs(int v, int label[15], int count, int N)
    {
        label[v] = 1;
        if (count == N)
            return true;

        for (int j = 0; j < V[v].size(); j++)
        {
            if (label[V[v][j]] == 0)
            {
                if (dfs(V[v][j], label, count + 1, N))
                    return true;
                label[V[v][j]] = 0;
            }
        }
        return false;
    }

    bool check(int N, int M, vector<vector<int>> Edges)
    {
        V = vector<vector<int>>(N + 1);

        for (auto i : Edges)
        {
            V[i[0]].push_back(i[1]);
            V[i[1]].push_back(i[0]);
        }

        int label[15];

        for (int i = 0; i <= N; i++)
            label[i] = 0;

        for (int i = 0; i < N; i++)
        {
            if (dfs(i, label, 1, N))
                return true;
            label[i] = 0;
        }
        return false;
    }
};

transaction_safe_dynamic
class Solution{
    public :
        int numsGame(int N){

            // Tom wins if N is even
            if (N % 2 == 0) return 1;
// else Jerry wins
else return 0;
}
}
;

