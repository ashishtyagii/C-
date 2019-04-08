#include<iostream>
#include<cmath>
 using namespace std;

 int main()
 {
     //Dimension of the cube
     float cubeSide = 5.4;
     //Dimension of sphere
     float sphereRadius = 2.33;
     //Dimensions of cone
     float coneRadius = 7.65;
     float coneHeight = 14;
     float cubevolume, spherevolume, conevolume = 0;
    
    //Cube Volume = side^3
     cubevolume = std::pow(cubeSide, 3);
     //Sphere Volume = (4/3) * pi * radius^3
     spherevolume = (4.0/3.0) * M_PI * std::pow(sphereRadius, 3);
     //Cone Volume = pi * radius^2 * (height/3)
     conevolume = M_PI * std::pow(coneRadius, 2) * (coneHeight/3);

     std::cout <<"\n volume of Cube: "<<cubevolume<<"\n";
     std::cout <<"\n volume of sphere: "<<spherevolume<<"\n";
     std::cout <<"\n volume of Cone: "<<conevolume<<"\n";
     return 0;

 }