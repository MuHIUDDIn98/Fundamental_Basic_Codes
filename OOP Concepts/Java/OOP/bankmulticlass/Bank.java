public class Bank {
    String name;
    int accountbalance;
    Members mem;
    public int interestgained(int increment){
        accountbalance = accountbalance + increment;
        return accountbalance;

    }
}
