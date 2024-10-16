#include<iostream>
using namespace std;

typedef struct cuboid {
    int length;
    int width;
    int height;
} Cuboid;

int volume(Cuboid *cuboid) {
    return cuboid->length * cuboid->width * cuboid->height;
}

void changeDimensions(Cuboid *cuboid, int length, int width, int height) {
    cuboid->length = length;
    cuboid->width = width;
    cuboid->height = height;
}

int main() {
    Cuboid c = {4, 5, 6};
    cout << "Length: " << c.length << endl;
    cout << "Width: " << c.width << endl;
    cout << "Height: " << c.height << endl;
    cout << "Volume: " << volume(&c) << endl;
    changeDimensions(&c, 10, 12, 8);
    cout << "New Length: " << c.length << endl;
    cout << "New Width: " << c.width << endl;
    cout << "New Height: " << c.height << endl;
    cout << "New Volume: " << volume(&c) << endl;
}
