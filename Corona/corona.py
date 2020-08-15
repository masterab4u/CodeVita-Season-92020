#include<iostream>

#include<string>

#include<bits/stdc++.h>

using namespace std;



int main()

{     

string fever,cough,fatigue,sneezing,aches,nose,throat,diarea,headache,breath; //declaring the variables

cout << "\nCheck for whether you have coronavirus,cold or flu or none of them.: ";

       //asking the user to input the symptoms

cout << "\nDo you have fever:(common/rare/no): ";

cin >> fever;



cout << "Do you have fatigue:(common/sometimes/NO): ";

cin >> fatigue;

cout << "Do you have cough:(common/mild/NO): ";

cin >> cough;

cout << "Do you have sneezing:(common/NO): ";

cin >> sneezing;

cout << "Do you have aches:(common/sometimes/NO): ";

cin >> aches;

cout << "Do you have Runny or stuffy nose:(common/rare/sometimes/NO): ";

cin >> nose;

cout << "Do you have Sore throat:(common/sometimes/NO): ";

cin >> throat;

cout << "Do you have diarrhea:(rare/sometimes/NO): ";

cin >> diarea;

cout << "Do you have headaches:(common/rare/sometimes/NO): ";

cin >> headache;

cout << "Do you have Shortness of breath:(sometimes/NO): ";

cin >> breath;

   if(fever== "COMMON" && fatigue=="SOMETIMES" && cough== "COMMON" && sneezing == "NO" && aches== "SOMETIMES" && nose=="RARE" && throat=="SOMETIMES" && diarea=="RARE" && headache=="SOMETIMES" && breath=="SOMETIMES")

{

cout << "You have coronavirus!!!";

}

else if(fever== "RARE" && fatigue=="SOMETIMES" && cough== "MILD" && sneezing == "COMMON" && aches== "COMMON" && nose=="COMMON" && throat=="COMMON" && diarea=="NO" && headache=="RARE" && breath=="NO")

{

cout << "You have cold";

}

   else if(fever== "COMMON" && fatigue=="COMMON" && cough== "COMMON" && sneezing == "NO" && aches== "COMMON" && nose=="SOMETIMES" && throat=="SOMETIMES" && diarea=="SOMETIMES" && headache=="COMMON" && breath=="NO")

{

cout << "You have Flu";

}

else{

            cout << "You dont have any of 3 viruses";

}



}