#include <iostream>
#include <vector>
using namespace std;
int main(){
    int size;
    int choice;
    vector<string> tasks;
    do{
        cout<<"\nWelcome to the To-Do List Application!"<<endl;
        cout<<" 1) Add tasks to your to-do list"<<endl;
        cout<<" 2) View your to-do list"<<endl;
        cout<<" 3) Remove a task from your to-do list"<<endl;
        cout<<" 4) Exit the application"<<endl;
        cout<<"Enter your choice: ";
        if(!(cin >> choice)){
            cin.clear();               
            cin.ignore(1000, '\n');   
            cout<<"Invalid input! Enter a number.\n";
            continue;
        }

    switch(choice){
        case 1:
            cout<<" How many tasks do you want to add? ";
            cin>>size;
            cin.ignore(1000, '\n');

            for(int i=0; i<size; i++){
            string task;
            cout<<"Enter task "<<i+1<<": ";
            getline(cin, task);
            tasks.push_back(task);
            }
            cout<<"Tasks added successfully!"<<endl;
        break;
            
        case 2:
            if(tasks.empty()){
                cout<<"Your to-do list is empty. Please add some tasks first."<<endl;
            }else{
                cout<<"\nYour To-Do List: "<<endl;
                for(int i=0; i<tasks.size(); i++){
                    cout<<i+1<<") "<<tasks[i]<<endl;
                }
            }
            break;

       case 3:
            if(tasks.empty()){
                cout<<"Your to-do list is empty. Please add some tasks first."<<endl;
            }else{
                cout<<"\nYour To-Do List: "<<endl;
                for(int i=0; i<tasks.size(); i++){
                cout<<i+1<<") "<<tasks[i]<<endl;
            }

            int taskNumber;
            cout<<"Enter the number of the task you want to remove: ";
            cin>>taskNumber;

            if(taskNumber > 0 && taskNumber <= tasks.size()){
                tasks.erase(tasks.begin() + taskNumber - 1);
                cout<<"Task removed successfully!"<<endl;
            }else{
                cout<<"Invalid task number. Please try again."<<endl;
            }
            }
        break;

        case 4:
            cout<<"Exiting the application. Goodbye!"<<endl;
            break;
        default:
            cout<<"Invalid choice. Please try again."<<endl;
    }

    }while(choice != 4);

   return 0;
}