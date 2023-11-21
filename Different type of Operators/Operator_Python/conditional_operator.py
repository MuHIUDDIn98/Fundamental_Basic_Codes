price_of_polau = int(input("Enter your polau price:"))

if price_of_polau<=100 :
    print("ami raji polau khabo.")
    if price_of_polau>60 and price_of_polau<100 :
     print("i want kabab extra ")
else:
    print("ami raji na\n")

Ethical_hacker = input("If you are a ethical Hacker write 'True'")
programmer = input("If you are a programmer write 'True'")

if Ethical_hacker or programmer:
    print("You will earn a lot of money")
else:
    print("you failed in your life")