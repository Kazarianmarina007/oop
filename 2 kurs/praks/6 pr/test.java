package prak_6;

public class test {
	public static void main(String[] args) {
		int n=10;
		Student[] mas=new Student[10];
		mas[0]=new Student(2,43);
		mas[1]=new Student(3,12);
		mas[2]=new Student(1,63);
		mas[3]=new Student(5,54);
		mas[4]=new Student(4,21);
		mas[5]=new Student(10,43);
		mas[6]=new Student(9,12);
		mas[7]=new Student(8,63);
		mas[8]=new Student(7,54);
		mas[9]=new Student(6,21);
		
		for (int i = 0; i<n; i++){
            System.out.println(mas[i].IDnumber);
        }
		
		for (int id = 1; id < n; id++){
			Student m=mas[id];
			int min = mas[id].IDnumber;
			for (int j=0;j<id;j++) {
				if(min<mas[j].IDnumber) {
					for(int l=id;l>j;l--) {
						mas[l]=mas[l-1];
					}
					mas[j]=m;
					break;
				}
			}
		}
		
		
		 System.out.println(" ");
		for (int i = 0; i<n; i++){
            System.out.println(mas[i].IDnumber);
        }
	}
}
