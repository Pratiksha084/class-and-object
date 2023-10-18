Exp_11
Find the volume of cube*/
#include<iostream>
using namespace std;
class cuboid
{
public:
double height=2.0;
double width=3.0;
double length=5.0;
};
int main()
{
    cuboid c1;
    double vol=c1.height*c1.width*c1.length;
    cout<<"Volume:"<<vol<<endl;

    
}
/*OUTPUT
Volume:30
*/

/*Name-Purvansha Gehlod
PRN-22070123088
Exp_11
Write a function to display output*/
#include<iostream>
using namespace std;
class cuboid{
    public:
    float l =3.0,w=5.0,h=7.0;

    float display (float a){
        cout<<"volume of cuboid ="<<a;
    }
};
int main()
{
    cuboid c1;
    float vol=c1.l*c1.w*c1.h;
    c1.display(vol);
}
/*Output
volume of cuboid =105
*/

/*Name-Purvansha Gehlod
PRN-22070123088
Exp_11
Take input from user
*/
#include<iostream>
using namespace std;
class cuboid
{
public:
float calculate(float a,float b,float c){
    float vol=a*b*c;
    return vol;
}
float display(float a){
    cout<<"Volume of cuboid="<<a;
    }
};
int main(){
    cuboid c1;
    float h,b,l;
    cout<<"enter the length,breath and height:";
    cin>>l>>b>>h;
    float vol=c1.calculate(l,b,h);
    c1.display(vol);

}
/*OUTPUT
enter the length,breath and height:5 5 5 
Volume of cuboid=125
*/

/*Name-Purvansha Gehlod
PRN-22070123088
Exp_11
shapes_vol_class*/
#include<iostream>
using namespace std;
class shapes
{
    public:
    double h;
    double wid;
    double len;
    double r;
    double s;
    cuboid()
    {
       cout<<"Enter the dimensions of cuboid :";
       cin>>h;
       cin>>wid;
       cin>>len;
    
    }

    cube()
    {
        cout<<"Enter the dimensions of cube :";
        cin>>s;
    }

    sphere()
    {
        cout<<"Enter the dimensions of sphere :";
        cin>>r;
    }

    double cuboid_volume()
    {
        double vol=h*wid*len;
        cout<<"volume of the cuboid is = "<<vol<<endl;
        return vol;
    }

    double cube_volume()
    {
        double cube_vol = s*s*s;
        cout<<"Volume of the cube is = "<<cube_vol<<endl;
    }

     double sphere_volume()
    {
        double sphere_vol = 1.33 * 3.14 * r * r * r ;
        cout<<"Volume of the sphere is = "<<sphere_vol<<endl;
    }

     double cone_volume()
    {
        double cone_vol = s*s*s;
        cout<<"Volume of the cone is = "<<cone_vol<<endl;
    }

};
 int main()
{
    shapes cuboid1;
    shapes cube1;
    shapes sphere1;

    cuboid1.cuboid();
    cube1.cube();
    sphere1.sphere();

    double vCu;
    double vC;
    double vS;

    vCu=cuboid1.cuboid_volume();
    vC=cube1.cube_volume();
    vS=sphere1.sphere_volume();

}
/*OUTPUT
Enter the dimensions of cuboid :2 2 2
Enter the dimensions of cube :2
Enter the dimensions of sphere :2
volume of the cuboid is = 8
Volume of the cube is = 8
Volume of the sphere is = 33.4096
*/


/*Name-Purvansha Gehlod
PRN-22070123088
Exp-11
Write the program using class which will display the given Date,Month,Year*/
#include<iostream>
using namespace std;

class Date
{
    private :
    const char* mon_name[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    public :
    int date;
    int month;
    int year;

    input(int d,int m,int y)
    {
        date = d;
        month = m;
        year = y;
    }

    display()
    {
        cout<< "The date is :" << date << "th " << mon_name[month-1] << " 20" << year;
    }

    bool isleap()
    {

    }

};

int main()
{
    Date d1;
    int d,m,y;
    cout << "Enter the date :";
    cin >> d;
    cout << "Enter the month :";
    cin >> m;
    cout << "Enter the year :";
    cin >> y;
    d1.input(d,m,y);
    d1.display();

    return 0;
}
/*Output
Enter the date :2
Enter the month :8
Enter the year :23
The date is :2th August 2023
*/

/*Name-Purvansha Gehlod
PRN-22070123088
EXP-11*/
#include<iostream>
using namespace std;
class Date {


private:
    string month_names[12] = {"Jan", "Feb", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    // int days_in_month[12];
    
    void day_in_month(int days_in_month[12]){
        // month_index = month
        int month_needed;
        if (is_leap() == 1)
        {
            days_in_month[1] = 29;
        }
    }
    
    string week_day_names[7] = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
public:
    int date;
    int month;
    int year;
    string first_day;
    bool is_leap(){
       
        if (year % 400 == 0) {
            return true;
        }

        else if (year % 100 == 0) {
            return false;
        }
        else if (year % 4 == 0) {
            return true;
        }
        else {
            return false;
        }
    }

    void disp_month()
    {
        cout << "The current month is: " << month_names[month - 2] << endl;
    }

    void weekday(){
        int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        day_in_month(days_in_month);
        int week_index = 0;
        for (int i = 0; i < 7; i++)
        {
            if (first_day == week_day_names[i])
            {
                week_index = i;
            }
            
        }
        int no_days = 0;
        for (int i = 0; i < month-1; i++)
        {
            no_days = no_days +days_in_month[i];
        }
        no_days = no_days + date;
        int week = no_days%7;
        week = week + week_index;
        if (week >= 7)
        {
            week = week - 7;
        }
        string weekday_name = week_day_names[week-2];
        cout <<"The current week is: "<< weekday_name;


    }

};
int main()
{
    Date d1;
    cout << "Enter Date: ";
    cin >> d1.date;
    cout << "Enter Month: ";
    cin >> d1.month;
    cout << "Enter Year: ";
    cin >> d1.year;
    cout << "Enter First Day of The Year: "<< endl;
    cin >> d1.first_day;
    d1.disp_month();
    // cout << d1.is_leap();
    d1.weekday();
    return 0;

}
/*OUTPUT
Enter Date: 31
Enter Month: 8  
Enter Year: 23
Enter First Day of The Year: 
Sunday
The current month is: July
The current week is: thursday
*/