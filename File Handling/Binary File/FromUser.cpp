/*Write a program to:

1. Take 5 integers from the user.
2. Store all of them in a binary file named numbers.dat.
3. Close the file.
4. Reopen the file in binary read mode.
5. Read every number from the file.
6. Print:
   • All numbers
   • Sum of all numbers
   • Average of all numbers*/

   #include<iostream>
   #include<fstream>
   
   using namespace std;
   
   int main(){
    
    int arr[5];
    cout<<"Enter 5 numbers: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    
    fstream my_files("numbers.dat",ios::out | ios::binary);
    for (int i = 0; i < 5; i++)
    {
        my_files.write((char*)&arr[i],sizeof(arr[i]));
    }
    my_files.close();


    cout<<"Numbers stored in files: "<<endl;
    int num;

    my_files.open("numbers.dat",ios::in | ios::binary);
    while (my_files.read((char*)&num,sizeof(num)))
    {
        cout<<num<<" ";
    }
    cout<<endl;
    my_files.close();

    int sum = 0;
    int count = 0;
    
    while(my_files.read((char*)&num, sizeof(num)))
    {
        cout << num << " ";

        sum += num;
        count++;
    }

    float average = (float)sum / count;
    cout<<"Sum = "<<sum<<endl;
    cout<<"Average = "<<average<<endl;
    
    
    
    return 0;
   }