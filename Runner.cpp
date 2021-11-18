#include<iostream>
#include"Node.h"
#include"Node.cpp"
#include<vector>
#include"Storyboard.h"
#include"Storyboard.cpp"
#include "Runner.h"


using namespace std;

Runner::Runner(){}

void Runner::runApplication(){
     list<string>list1 ;
    list1.push_back("Must learn oop");list1.push_back("Must learn constructors"); list1.push_back("Must learn maps");
    list<string> list2;
    list2.push_back("ara::com is used for communication");list2.push_back("ara::core has the std::core::Result and std::core::Error Handling"); list2.push_back("ara::diag has UDP and DOIP as protocls");
    list<string> list3;
    list3.push_back("Go to market");list3.push_back("Go to pay bills");list3.push_back("Repair the car");
    Node n1; Node n2; Node n3;

    n1.setTitle("C++"); n1.setText("Learn c++");n1.setTags(list1);
    n2.setTitle("Autosar"); n2.setText("Learn Autosar"); n2.setTags(list2);
    n3.setTitle("Jobs");n3.setText("To do"); n3.setTags(list3);

    Storyboard *b = new Storyboard("Razvan Storyboard");
    b-> addNote(n1);b-> addNote(n2);b->addNote(n3);

    bool continueProgram = true;

    while(continueProgram){

    cout<<"What option would you like to choose. Introduce number"<<endl;
    cout<<"1. Show storyboard"<<endl;
    cout<<"2. Add  new note"<<endl;
    cout<<"3. Delete note"<<endl;
    cout<<"4. Search a note on the storyboard"<<endl;

    int numberChoose;
    cin>>numberChoose;

    while(typeid(numberChoose).name()=="i"){
        cout<<" Introduce the number"<<endl;
        cin>>numberChoose;
    }

    switch(numberChoose){
        case 1:
            b -> showStoryboard();
            break;

    case 2:
            b -> addNewNote();
            break;


        case 3:
            b->deleteNote();
            break;
        
        case 4:
                cout<<"1. Search by title"<<endl;
                cout<<"2. Search by text"<<endl;
                cout<<"3.Search by tag"<<endl;

                int secondOption;
                cin>>secondOption;
                while(typeid(secondOption).name()=="i"){
                        cout<<"Introduce the number"<<endl;
                        cin>>secondOption;
                }

                switch(secondOption){
                    case 1: 
                        b->searchByTitle();
                        break;
                    case 2:
                        b -> searchByText();
                        break;
                    case 3:
                        b -> searchByTag();
                        break;

                }
                break;

            default:
                cout<<" No such option"<<endl;break;

            
    }

    cout<<"Do you use to continue?"<<endl;
    int continueOption ;
    cin>>continueOption;

    while(typeid(continueOption).name()=="i"){
            cout<<"Introduce the number"<<endl;
            cin>>continueOption;
    }
    if(continueOption ==1){
        continue;
    }else{
        continueProgram = false;
    }


    }
}