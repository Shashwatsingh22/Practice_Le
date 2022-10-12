package Inheritance.singleInheritance;

public class Animal{
    String color = "";
    String type = "";
    int NumOfLegs =0;
    boolean hasTail = false;

    public Animal() {} // Default Constructor
    public Animal(int NumOfLegs,String type, boolean hasTail)
    {
        this.NumOfLegs=NumOfLegs;
        this.type=type;
        this.hasTail=hasTail;
    }
    public  void eating()
    {
        System.out.println("Animal is Eating");
    }
}