class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() < 2)
        {
            return s.length();
        }
        char freq[255] = {0};
        int start = 0, end=0;
        int maxLen = 1;
        freq[s[0]] = 1;
        for(int i=1;i<s.length();i++)
        {
            //cout<<freq[s[i]]<<" ";
            if(freq[s[i]] != 0)
            {

                for(int j = start;j<=end;j++)
                {
                    if(s[j] == s[i])
                    {
                        start = j +1;
                        end = i;
                        break;
                    }
                    else
                    {
                        freq[s[j]] = 0;
                    }

                }

            }
            else
            {
                end++;
                freq[s[i]] = 1;
            }
            //cout<<start<<" "<<end<<endl;
            if(end-start+1 > maxLen)
            {
                maxLen = end - start+1;
            }
        }

        return maxLen;
    }
};