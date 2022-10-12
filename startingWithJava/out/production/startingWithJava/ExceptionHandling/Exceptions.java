// Creating the Custom Exception
class AgeInvalidException extends Exception //Now due to making this relation with Exception we are able to create the Exception
{
	AgeInvalidException()
	{
	 super("Age is Invalid!");
	}
	
	AgeInvalidException(String message)
	{
	  super(message);
	}	
}


class Exceptions
{
   public static void main(String[] args)
   {
	System.out.println("Programme Started");
	try
	{
         int n1 = Integer.parseInt(args[0]);
	 int n2 = Integer.parseInt(args[1]);
	
	 System.out.println("Got two Numbers");
	 int result = n1/n2;
	
	 if(n2<10)
	{ 
		throw new AgeInvalidException("My Age is invalid");
	}

         System.out.println("Result =>"+result);
	}
	catch(ArithmeticException e)
	{
	  System.out.println("n2 can not be 0!"); // 5 0 --> Handle
	}
	catch (NumberFormatException e)
	{
	 System.out.println("Invalid Number"); // abs abc --> Handle
	}
	//If we don't know about the Error then catch the parent directly
	catch (Exception e)
	{
	   System.out.println("Error !!");
	   //lets find the Error Also
	   System.out.println(e.getMessage());
	}
	finally
	{
 	   System.out.println("Closing all the Resources ..");
	}
	System.out.println("End");
   }
}	