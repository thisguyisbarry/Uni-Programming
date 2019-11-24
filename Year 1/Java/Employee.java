/* 
 * 
 * Author: Barry Pender Date: 04/04/2019 IDE: Eclipse
 */
import java.util.Scanner;

public class Employee {
	
	String FirstName;
	String Surname;
	Boolean Permanent;
	char Gender;
	
	//Great scanner object to read user input
	Scanner input = new Scanner(System.in);
	
	
	//Create the objects and call functions required
	public static void main(String[] args) {
		
		//Create Employee objects
		Employee newEmployee1 = new Employee();
		Employee newEmployee2 = new Employee();
		
		//Call methods for user inputs and then display
		newEmployee1.EnterFirstName();
		newEmployee1.EnterSurname();
		newEmployee1.EnterPermanent();
		newEmployee1.EnterGender();
		newEmployee1.DisplayDetails();
		
		newEmployee2.EnterFirstName();
		newEmployee2.EnterSurname();
		newEmployee2.EnterPermanent();
		newEmployee2.EnterGender();
		newEmployee2.DisplayDetails();
		
		
	}//end main()
	
	
	//Get user to input their first name
	public void EnterFirstName() {
		
		System.out.println("Please enter your first name:");
		
		this.FirstName = input.nextLine();
		
	}//end EnterFirstName()
	
	
	//Get user to input their surname
	public void EnterSurname() {
		
		System.out.println("Please enter your surname:");
		
		this.Surname=input.nextLine();
	}//end EnterSurname()
	
	//Get user to input if they are a permanent employee or not
	public void EnterPermanent() {
		
		int permChecker = -1;
		
		
		//Safeguard for user entering invalid input (ie not 0 or 1)
		while(permChecker!=0&&permChecker!=1)
		{
			System.out.println("Please enter if you are a premanent employee");
			System.out.println("Enter 1 if you are permanent or 0 if you are not");
			
			permChecker = input.nextInt();
			
			//Capture enter key after int input (known java bug)
			input.nextLine();
			
		}//end while
		
		
		if(permChecker == 1){
			
			this.Permanent = true;
		}
		else{
			
			this.Permanent = false;
		}//end if else
		
		
	}//end EnterPermanent()
	
	
	//Get user to input their gender
	public void EnterGender() {
		
		int genderChecker = -1;
		
		//Safeguard for user entering invalid input (not m or f)
		while(genderChecker!=1&&genderChecker!=0) {
			
			System.out.println("Please enter your gender");
			System.out.println("Enter 1 for male or, 0 for female");
			
			genderChecker = input.nextInt();
			
			//Capture enter key after int input (known java bug)
			input.nextLine();
			
		}//end while
		
		
		//Give object the gender
		if(genderChecker == 1) {
			
			this.Gender = 'm';
			
		}
		else {
			
			this.Gender = 'f';
		}//end if else
		
		
	}//end EnterGender()
	
	//Method to allow the display of a created object
	public void DisplayDetails() {
		
		System.out.println("Name: " + this.FirstName + " " + this.Surname);
		
		//Print appropriate employment status 
		if(this.Permanent == true){
			
			System.out.println("Employment Status: Permenant");
			
		}
		else {
			
			System.out.println("Employment Status: Not Permenant");
		}//end if else
		
		
		//Print appropriate gender information
		if(this.Gender == 'm'){
			
			System.out.println("Gender: Male\n");
			
		}
		else {
			
			System.out.println("Gender: Female\n");
			
		}//end if else
		
		
	}//end DisplayDetails();
	

}//end class
