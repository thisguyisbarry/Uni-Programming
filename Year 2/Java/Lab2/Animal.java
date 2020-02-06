
public class Animal {
	private String name;
	private String breed;
	private int age;
	private boolean domesticAnimal;
	private String colour;
	
	
	
	public Animal(String name) {
		setName(name);
	}
	
	
	
	
	public Animal(String name, String breed, int age, boolean domesticAnimal, String colour) {
		
		setName(name);
		setBreed(breed);
		setAge(age);
		setDomesticAnimal(domesticAnimal);
		setColour(colour);
		
	}
	
	
	public String toString() {
		
		return "The animal is called " + this.name + " they are a " + this.breed + ", " + this.colour + " in colour, they are aged " + this.age +
				" years old, and they are " + checkDomesic(domesticAnimal);
				
	}
	
	
	//Returns a string whether an animal is domestic or not.
	public String checkDomesic(Boolean domestic){
		
		if(domestic) {
			
			return "domestic";
			
		}
		
		return "not domestic";
	}
	
	
	//Checks the object and makes the breeds noise. 
	public void makeNoise() {
		
		switch(breed.toLowerCase()) {
		
		case "dog":
			System.out.println("woof!");
			break;
		
		case "cat":
			System.out.println("meow!");
			break;

		default:
			System.out.println("broken!");
		}
		
	}
	
	//Checks if animal is old, if so prints it's a quiet animal, 
	//if not then it's a loud animal
	public void makeNoise(boolean old) {
		
		if(old) {
		
			System.out.println("Quiet animal!");
			
		}
		else {
			System.out.println("Loud animal!");
			
		}
		
	}
	
	
	public void setName(String name) {
		
		this.name = name;
		
	}
	
	
	public String getName() {
		
		return name;
		
	}
	
	
	public void setBreed(String breed) {
		
		this.breed = breed;
		
	}
	
	
	public String getBreed() {
		
		return breed;
		
	}
	
	
	public void setAge(int age) {
		
		this.age = age;
		
	}
	
	
	public int getAge() {
		
		return age;
		
	}
	
	
	public void setDomesticAnimal(boolean domesticAnimal){
		
		this.domesticAnimal = domesticAnimal;
		
	}
	
	
	public boolean getDomesticAnimal() {
		
		return domesticAnimal;
		
	}
	
	
	public void setColour(String colour) {
		
		this.colour = colour;
		
	}
	
	
	public String getColour() {
		
		return colour;
		
	}
	
	
}