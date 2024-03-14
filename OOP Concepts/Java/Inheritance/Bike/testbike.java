//package Bike;

public class testbike {
    public static void main(String[] args){
        bikeglobal b = new bikeglobal();
        b.color = "black";
        b.startBike();

        makehonda xblade = new makehonda();
        xblade.color ="black red";
        xblade.startBike();
        xblade.tyreType();
        xblade.stopBike();
    }
}
