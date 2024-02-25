class Solution {
public:
    bool checkIfPangram(string sentence) {
      vector<bool> alpha(26, false); // Initialize alpha with size 26 and all elements set to false
      for(int i=0;i<sentence.size();i++){
          alpha[sentence[i]-'a']=true; // Set the corresponding alphabet to true if encountered in the sentence
      }
      for(int i=0;i<26;i++){
          if(alpha[i]==false)
              return false; // If any alphabet is not present, return false
      }
      return true; // If all alphabets are present, return true
    }
};
