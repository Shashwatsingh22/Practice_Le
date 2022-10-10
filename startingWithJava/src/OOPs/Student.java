package  OOPs;

class Student
{
    //Data Members
    int stdID;
    String stdName;
    String stdCity;

    //Methods Behaviours
    public Student()
    {
        stdID = 0;
        stdName = "";
        stdCity = "";
    }

    public Student(int stdID)
    {
        this.stdID=stdID;
    }

    public  Student(int stdID, String stdName, String stdCity)
    {
        this.stdID=stdID;
        this.stdName=stdName;
        this.stdCity=stdCity;
    }

    public void setName(String stdName)
    {
        this.stdName = stdName;
    }

    public void setStdID(int stdID)
    {
        this.stdID = stdID;
    }

    public void setStdCity(String stdCity)
    {
        this.stdCity = stdCity;
    }

    public String getName()
    {
        return stdName;
    }

    public int getRegNum()
    {
        return stdID;
    }

    public  String getStdCity()
    {
        return stdCity;
    }

    public  void show()
    {
        System.out.println("Student Name : "+stdName+" || Registration Number : "+stdID+" || City : "+stdCity);
    }
}