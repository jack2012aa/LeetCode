package p1255;

import java.util.ArrayList;

public class Solution {

	private ArrayList<Word> words = new ArrayList<Word>();
	
    public int maxScoreWords(String[] words, char[] letters, int[] score) {
        
    	for (int i = 0; i < words.length; i++) {
    		this.words.add(new Word(words[i], score));
    	}
    	
    	int[] lettersCount = new int[26];
    	for (int i = 0; i < letters.length; i++) {
    		lettersCount[((int) letters[i]) - 97]++;
    	}
    	
    	return maxScore(0, lettersCount, 0);
    }
    
    private int maxScore(int index, int[] lettersCount, int score) {
    	
    	//如果已經到底，就回傳score
    	if (index == words.size()) {
    		return score;
    	}
    	
    	//測試word[index]是否能被加入
    	if (!isOk(words.get(index), lettersCount)) {
    		return maxScore(index + 1, lettersCount, score);
    	} else {
    		int leftScore = maxScore(index + 1, lettersCount, score);  //沒有加的
    		int[] newLettersCount = new int[26];
    		for (int i = 0; i < 26; i++) {
    			newLettersCount[i] = lettersCount[i] - words.get(index).getLetters()[i];
    		}
    		int rightScore = maxScore(index + 1, newLettersCount, score + words.get(index).getScore());  //有加的
    		return Math.max(leftScore, rightScore);
    	}
    	
    }
    
    private boolean isOk(Word word, int[] lettersCount) {
    	
    	for (int i = 0; i < 26; i++) {
    		if (word.getLetters()[i] > lettersCount[i]) {
    			return false;
    		}
    	}
    	
    	return true;
    }
	
}
