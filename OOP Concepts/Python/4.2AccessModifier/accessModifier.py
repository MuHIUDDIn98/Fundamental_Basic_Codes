class Example:
    #accessable from any where
    public_var="I am public" #public
    #Meant to be accessed within class and subclasses
    _protected_var = "I am protected" #friends only
    #Name mangled, intended for internal class use only
    __private_var = "I am private"  #only me