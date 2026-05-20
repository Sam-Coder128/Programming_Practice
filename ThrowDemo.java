////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Class Name(s) : AgeInvalid, UserDefined
// Input         : Age (int)
// Output        : Throws and catches user-defined exception if age < 18
// Methods       : run(), main()
// Description   : Demonstrates user-defined exception handling in Java.
// Author        : Samruddh Shivkumar Birajdar
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class AgeInvalid extends Exception{
    public AgeInvalid(String str){
        super(str);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Application : Throws AgeInvalid exception for underage input.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class ThrowDemo{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your age: ");
        int Age = sobj.nextInt();

        try{ 
            if(Age < 18){
                throw new AgeInvalid("Underage");
            }
            else{
                System.out.println("You are eligible.");
            }
        }
        catch(AgeInvalid aobj){
            System.out.println("Inside catch. " + aobj);
        }
    }
}
