package OOPs;

public class Main {
    public static void main(String[] args) {
        //Object Creatation
        //Student std1 = new Student(01,"Shashwat","Varanasi");

        Student std1 = new Student();
        //New Keyword is used to dynamically allocate the memory to an variable
//        std1.setStdID(01);  // or std1.stdID = 01;
//        std1.setName("Shashwat");
//        std1.setStdCity("Varanasi");

        std1.show();
    }
}
