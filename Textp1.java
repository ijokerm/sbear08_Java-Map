public class Textp1{
	private static int i=1;
	public int getNext(){
		return i++;
	}
	public static void main(String[] args){
		Textp1 test=new Textp1();
		Textp1 testObject=new Textp1();
		test.getNext();
		testObject.getNext();
		System.out.println(testObject.getNext());
		char c='a';
		System.out.println(c+1);
		double x=2.0;
		int y=4;
		x/=++y;
		System.out.println(x);
	}
}