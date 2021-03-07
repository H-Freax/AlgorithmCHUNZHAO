class Solution {
public:
    string reverseWords(string s) {
        istringstream in(s);
        ostringstream out;
        string tmp;
        while( in >> tmp){
            reverse(tmp.begin(),tmp.end());
            out << tmp;
            if( !in.eof()){
                out<<" ";
            }
        }
        return out.str();

    }
};