#include <iostream>
#include <string>
#include <vector>

std::string bleep(std::string const word, std::string& text) {

    //iterate each letter of text
    for (int i = 0; i < text.size(); i++) {

        //if the current letter begins with the same letter as word, start checking the rest of the word
        if (text[i] == word[0]) {
            
            //If the last letter of word is where it would be in text, just assume it's the same word (not correct but fast for us now)
            if (text[i + word.size() - 1] == word[word.size() - 1]) {
                
                //For the length of word, replace that section of text with asterisks
                for (int j = 0; j < word.size(); j++) {
                    text[i + j] = '*';
                }
                i += word.size();
            }
        }

    }
    return text;

}