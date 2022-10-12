package Polymorphism.Runtime;

public  class Main {

    public static void main(String arr[])
    {
        Emp emp = new Emp();
//        emp.showDetail(); // this is from emp
//
          Person per = new Emp();
//        per.showDetail(); //==> Output - THis is from emp

        Person per1 = new Person();

        RnD Ram = new RnD();

         Ram.doWork(emp); // this is from emp
         Ram.doWork(per); //this is from emp
         Ram.doWork(per1); // from the person class
    }
}