package Bank;

class Account{
    private String name,password;

    Account(String name,String password)
    {
        this.name = name;
        this.password = password;
    }

    // getters and setters
    String getPass(Account acc2)
    {
        return this.password;
    }

}
public class Bank {
    public static void main(String[] args)
    {
        Account acc1 = new Account("Sarafat", 21);
    }
}
