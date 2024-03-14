public class T_Bank {
    public static void main(String args[]){
        Bank b1 = new Bank();
        b1.name = "Brack";
        b1.accountbalance = 300000;
        b1.interestgained(500);
        System.out.println(b1.accountbalance);


        Members m = new Members();
        m.address = "Mogbazar dhaka";
        m.name = "Anik";
        b1.mem = m;

        System.out.println(b1.mem.address);
        System.out.println(b1.mem.name);


        Bank b2 = new Bank();
        b2.name = "Islami";
        b2.accountbalance = 2000000;
        b2.mem = new Members();
        b2.mem.name = "ashik";
        b2.mem.address = "Mogbazar dhaka";
        b2.mem.account_bal = 300;
        
        };

    }

