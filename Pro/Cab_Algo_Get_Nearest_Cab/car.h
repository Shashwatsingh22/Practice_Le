class car{
    char name_driver;
    int posX,posY;

    public:
    car(char name,int x,int y)
    {
       name_driver=name;
       posX=x;
       posY=y;
    }
    
    int getPosX() const
    {
        return posX;
    }
    
    int getPosY() const
    {
        return posY;
    }

    char getDriverName() const
    {
        return name_driver;
    }

    int distance(int userX,int userY)
    {
       return (posX-userX)*(posX-userX)+(posY-userY)*(posY-userY);
    }
};