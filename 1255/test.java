package p1255;

public class test {

	public static void main(String[] args) {

		Solution solution = new Solution();
		
		String[] words = {"dog", "cat", "dad", "good"};
		char[] letters = {'a', 'a', 'c', 'd', 'd', 'd', 'g', 'o', 'o'};
		int[] score = {1,0,9,5,0,0,3,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0};
		System.out.print(solution.maxScoreWords(words, letters, score));;
	}

}
