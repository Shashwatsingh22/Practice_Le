class DataTypes{
    //Two Types of Data Types
    // Primitive Data Types -- inbuilt DataTypes (8types)

    //Non Primitive / Reference Types/ UserDefined Types ---

    public static  void main(String arr[])
    {

        //Type Casting
        // --> Automatic TypeCasting  By JVM- Implicit Type

        int z=60;
        double d=z;
        System.out.println(z +" => " + d);
        // --> Forcefully Type Casting

        double myVal = 34.23;
        int myInt = (int)myVal; //This can't be done automatically we need to do it forcefully
        System.out.println(myVal+ " => " +myInt);

        //Trick When the Automatic TypeCasting Possible and When Forcefully we need to do it.

        // --> if we have some value and after casting we see that there is some loss in data like
        // 54.65 (double) to (integer) 54 --> here we have loss of 0.65
        // So, this conversion  is not possible automatically we need to do it forcefully
        // 50.0 --> 50 --> No Loss so here automatic conversion is possible
    }

}