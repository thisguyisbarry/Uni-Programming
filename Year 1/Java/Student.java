

class Person{

	String first_name;
	String surname;
	int age;
	
	void Details(String first, String sur, int a) {
		first_name = first;
		surname = sur;
		age = a;
		System.out.println("First name is " + first_name + " Surname is " + surname + " Age is " + age);
	} // end Details

}//end class




public class Student extends Person {
	
	int year_status;
	String programme_code;
	
	void Stats(int year, String code){
		year_status = year;
		programme_code = code;
		System.out.println("Registered in year " + year_status + " in " + programme_code);
	} // end Stats
	
	public static void main(String args[]) {
		
		Student Bob = new Student();
		Student James = new Student(); 
		
		Bob.Details("Bob", "Bobbington", 19);
		Bob.Stats(2019,"DT201");
		
		James.Details("James", "Jameson", 20);
		James.Stats(2019, "DT401");
	}//end main
	

}//end class
