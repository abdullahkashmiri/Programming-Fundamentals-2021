/*
//Write a program which takes marks of 5 courses as input, of 5 students and output the students who got
//the highest aggregate.Roll# C1 C2 C3 C4 C5
#include<iostream>
using namespace std;
int main()
{

    
    int R1, R2, R3, R4, R5, r1c1, r1c2, r1c3, r1c4, r1c5, r2c1, r2c2, r2c3, r2c4, r2c5, r3c1, r3c2, r3c3, r3c4, r3c5, r4c1, r4c2, r4c3, r4c4, r4c5, r5c1, r5c2, r5c3, r5c4, r5c5, T1, T2, T3, T4, T5;


           
            cout << "Enter Roll No of Student 1  : ";
            cin >> R1;
            cout << "What is the score of Roll no  : " << R1 << "\n" << endl;
            cout << "Course 1 : ";
            cin >> r1c1;
            cout << "Course 2 : ";
            cin >> r1c2;
            cout << "Course 3 : ";
            cin >>r1c3;
            cout << "Course 4 : ";
            cin >> r1c4;
            cout << "Course 5 : ";
            cin >> r1c5; 

            T1 = (r1c1 + r1c2 + r1c3 + r1c4 + r1c5);

       
            cout << "Enter Roll No of Student 2  : " ;
            cin >> R2;
            cout << "What is the score of Roll no  : " << R2 << "\n" << endl;
            cout << "Course 1 : ";
            cin >> r2c1;
            cout << "Course 2 : ";
            cin >> r2c2;
            cout << "Course 3 : ";
            cin >> r2c3;
            cout << "Course 4 : ";
            cin >> r2c4;
            cout << "Course 5 : ";
            cin >> r2c5; 

            T2 = (r2c1 + r2c2 + r2c3 + r2c4 + r2c5);
        

            cout << "Enter Roll No of Student   3 : ";
            cin >> R3;
            cout << "What is the score of Roll no  : " << R3 << "\n" << endl;
            cout << "Course 1 : ";
            cin >> r3c1;
            cout << "Course 2 : ";
            cin >> r3c2;
            cout << "Course 3 : ";
            cin >>r3c3;
            cout << "Course 4 : ";
            cin >> r3c4;
            cout << "Course 5 : ";
            cin >> r3c5; 

            T3 = (r3c1 + r3c2 + r3c3 + r3c4 + r3c5);

        
            cout << "Enter Roll No of Student  4  : " ;
            cin >> R4;

            cout << "What is the score of Roll no   : " << R4 << "\n" << endl;
            cout<< "Course 1 : ";
            cin >> r4c1;
            cout << "Course 2 : ";
            cin >> r4c2;
            cout << "Course 3 : ";
            cin >> r4c3;
            cout << "Course 4 : ";
            cin >> r4c4;
            cout << "Course 5 : ";
            cin >> r4c5; 

            T4 = (r4c1 + r4c2 + r4c3 + r4c4 + r4c5);
        

            cout << "Enter Roll No of Student  5  : " ;
            cin >> R5;
            cout << "What is the score of Roll no   : " << R5 << "\n" << endl;
            cout << "Course 1 : ";
            cin >> r5c1;
            cout << "Course 2 : ";
            cin >> r5c2;
            cout << "Course 3 : ";
            cin >> r5c3;
            cout << "Course 4 : ";
            cin >> r5c4;
            cout << "Course 5 : ";
            cin >> r5c5; 

            T5 = (r5c1 + r5c2 + r5c3 + r5c4 + r5c5);

            if
                (T1 > T2 & T1 > T3 & T1 > T4 & T1 > T5)
                cout << "Roll No  : " << R1 << " Has the highest Aggregate of : " << T1 << endl;
            else if
                (T2 > T1 & T2 > T3 & T3 > T4 & T4 > T5)
                cout << "Roll No  : " << R2 << " Has the highest Aggregate of : " << T2 << endl;
            else if
                (T3 > T1 & T3 > T2 & T3 > T4 & T3 > T5)
                cout << "Roll No  : " << R3 << " Has the highest Aggregate of : " << T3 << endl;
            else if
                (T4 > T1 & T4 > T2 & T4 > T3 & T4 > T5)
                cout << "Roll No  : " << R4 << " Has the highest Aggregate of : " << T4 << endl;
            else
                cout << "Roll No  : " << R5 << " Has the highest Aggregate of : " << T5 << endl;

        return 0;
}
*/