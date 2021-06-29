package p1381;

public class CustomStack {

	int[] stack;
	int maxSize;
	int top;

	public CustomStack(int maxSize) {
		this.stack = new int[maxSize];
		this.maxSize = maxSize;
		this.top = -1;
	}

	public void push(int x) {
		if (this.top + 1 < this.maxSize) {
			stack[++top] = x;
		}
	}

	public int pop() {
		if (this.top != -1) {
			return this.stack[this.top--];
		} else {
			return -1;
		}
	}

	public void increment(int k, int val) {
		for (int i = 0; i < k && i <= this.top; i++) {
			stack[i] = stack[i] + val;
			top = Math.max(top, i);
		}
	}
}
