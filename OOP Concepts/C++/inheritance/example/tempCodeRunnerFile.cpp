int main()
{

    rec r1;

    r1.setLength(120);
    r1.setBreath(55);

    cout << "r1 Objects "
         << "Lenght :" << r1.getLength() << " Breath :" << r1.getBreath() << " area: " << r1.area() << endl;
    cout << "r1 Objects Perimeter: " << r1.perimeter() << endl;

    rec r2(34, 66);
    cout << "r2 Objects "
         << " Lenght :" << r2.getLength() << " Breath :" << r2.getBreath() << " area: " << r2.area() << endl;
    cout << "r2 Objects Perimeter: " << r2.perimeter() << endl;

    cuboide Q(11, 22, 33); // cuboide object class object Q
    cout << "Length of Cuboide :" << Q.getLength()<< endl;
    cout << "breath of Cuboide :" << Q.getBreath()<< endl;
    cout << "Height of Cuboide :" << Q.getHeight()<< endl;
    cout << "Volume of Cuboide :" << Q.volume()<< endl;
}