#include<iostream>
using namespace std;

class Solution {
public:

    bool find(string vowels, int n ,char ch){
        for(int i = 0; i<n; ++i){
            if(vowels[i] == ch){
                return false;
            }
        }
        return true;
    }

    string reverseVowels(string s) {
        int size = s.length(); // found the size of the string
        int start = 0; // setting start to the first character of the string
        int end = size-1; // setting end to last character of the string

        // copying the original string to the new one
        string word = s;
        // initializing the string of Vowels
        string vowels = "aeiouAEIOU";

        // Iterate until the start is no longer less than or equal to the end
        while(start <= end){
            // while((start < end) && vowels.find(word[start]) == string :: npos){
            //     start++;
            // }
            // while((start < end) && vowels.find(word[end]) == string :: npos){
            //     end--;
            // }
            while((start < end) && find(vowels, 10, word[start])){
                start++;
            }
            while((start < end) && find(vowels, 10, word[end])){
                end--;
            }
            // Swap vowels found at start andd end
            swap(word[start], word[end]);
            // Moving the pointers towards each other
            start++;
            end--;
        }
        // returning the modified string
        return word;
    }
};

int main(){
    
    string s = "MobAshIr";
    // className objectName; // creating objects of class: className 
    Solution myObject;
    // objectName.functionName(); // accessing functions of a given class
    cout << myObject.reverseVowels(s) <<endl;

    return 0;
}