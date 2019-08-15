public class Textp13{
	String str=new String("good");
	char[]ch={'a','b','c'};
	public static void main(String[] args){
		Textp13 ex=new Textp13();
		ex.change(ex.str,ex.ch);
		System.out.println(ex.str+"and");
		System.out.print(ex.ch);
	}
	public void change(String str,char[]ch){
		str="test ok";
		ch[0]='g';
	}
}