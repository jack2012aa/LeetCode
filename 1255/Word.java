package p1255;

public class Word{
    
    private int score = 0;
    private int[] letters = new int[26];
    private String word;
    
    public Word(String word, int[] score){
        countScoreAndLetters(word, score);
        this.word = word;
    }
    
    private void countScoreAndLetters(String word, int[] score){
        
    	for (int i = 0; i < word.length(); i++) {
    		int unicode = ((int) word.charAt(i)) - 97;
    		this.letters[unicode]++;
    		this.score += score[unicode];
    	}
    	
    }
    
    public int getScore() {
    	return this.score;
    }
    
    public int[] getLetters() {
    	return this.letters;
    }
    
    public String getWord() {
    	return this.word;
    }
    
    public String toString() {
    	return word + " " + " score ";	
    }
    
}
