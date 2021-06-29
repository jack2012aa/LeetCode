package p1255;

import java.util.Comparator;

public class Compare implements Comparator<Word> {

	@Override
	public int compare(Word o1, Word o2) {
		
		if (o1.getScore() > o2.getScore()) {
			return 1;
		} else if(o1.getScore() < o2.getScore()) {
			return -1;
		} else {
			return 0;
		}
	}

}
