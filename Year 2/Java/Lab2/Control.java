import java.util.Scanner;


public class Control {

	public static void main(String[] args) {
		
		boolean inputDomesticated = false;
		
		Animal a1 = new Animal("Fido", "Dog", 1, true, "Black");
		
		System.out.println(a1);
		
		a1.makeNoise();
		
		a1.makeNoise(false);
		
		//Quick user input
		
		Scanner input = new Scanner(System.in);
		
		System.out.println("Enter name: ");
		String inputName = input.nextLine();
		System.out.println("Enter breed: ");
		String inputBreed = input.nextLine();
		System.out.println("What age is the animal in years?");
		int inputAge = input.nextInt();
		input.nextLine();  //Captures whitespace character (enter) after int
		
		System.out.println("Is the animal domesticated? (yes/no)");
		String checkDomesticated = input.nextLine();
		
		
		if(checkDomesticated.equalsIgnoreCase("yes")){
			inputDomesticated = true;
		}
		else if(checkDomesticated.equalsIgnoreCase("no")) {
			inputDomesticated = false;
		}
		else {
			System.out.println("Invalid domesticated status");
		}
		
		System.out.println("What colour is the animal");
		String inputColour = input.nextLine();
		
		Animal userAnimal = new Animal(inputName, inputBreed, inputAge, inputDomesticated, inputColour);
		System.out.println(userAnimal);
	}

}
