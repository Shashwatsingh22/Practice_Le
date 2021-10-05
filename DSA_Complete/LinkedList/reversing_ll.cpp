--> Q3
vector<string> tableOfContents(vector<string> text) {
    vector<string> v;
    int count=0;
    int Scount=0;
    string c;
    
    for(int i=0;i<text.size();i++)
    {
        if(text[i] == "#")
        {
            count++;
            Scount=0;
            c = to_string(count);
            string newStr = c + ". "+ text[i];
            v.push_back(newStr);
        }
        else if(text[i] == "##")
        {
           Scount++;
           string sc = to_string(Scount);
           string newStr = c+"."+sc+". "+text[i];
           v.push_back(newStr);
        } 
    }
    return v;

}
10
# Games
## Board
## Computer
## Zero sum
## Multiplayer
# Strategies
## Greedy
## Tree pruning
## Others
# Summary



->