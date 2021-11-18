#include <iostream>
#pragma once
#include "Storyboard.h"
#include <string>
#include <list>
#include<algorithm>
#include "Node.h"

using namespace std;

Storyboard::Storyboard()
{
}
Storyboard ::Storyboard(string storyboardName)
{
    storyName = storyboardName;
    cout << "Created my Storyboard with the name " << storyName << endl;
}

void Storyboard::addNote(Node n)
{

    nodesList.push_back(n);
}
void Storyboard::showStoryboard()
{
    for (int i = 0; i < nodesList.size(); i++)
    {
        cout << "Note " << i << ": " << nodesList[i].getTitle() << " , " << nodesList[i].getText() << ", with following tags :[";
        nodesList[i].outputList(nodesList[i].getTags());
        cout << "] " << endl;
    }
}

void Storyboard::addNewNote()
{
    Node n;
    string newText;string newTitle; list<string>newTagsList;
    cout<<"Introduce the title"<<endl;
    getline(cin>>ws, newTitle );

    for (int i =0;i<nodesList.size();i++)
{
     while(nodesList[i].getTitle()==newTitle){
         cout<<"A similar note title already exists. Intrdouce a new note"<<endl;
         getline(cin, newTitle);
     }
}
    cout<<"Introduce the text"<<endl;
    getline(cin, newText);

    int nrTags;
    cout<<"Introduce the number of tags to be added"<<endl;
    cin>>nrTags;

    for ( int i =0;i<nrTags;i++){
             

            string temp;
             cout<<"Introduce tag number "<<i<<" ";
         
         
         //  getline(cin, dummy);
        
            getline(cin >>ws, temp);
          //cin.ignore(100,'\n');
           // cin.get();
            newTagsList.emplace_back(temp);
    }
    n.setTitle(newTitle);n.setText(newText);n.setTags(newTagsList);
    nodesList.push_back(n);
    cout<<"Updated"<<endl;



    
    
}
void Storyboard ::deleteNote()
{

    cout << "Let us delete a note . Please introduce the title of the note" << endl;
    string noteToDelete;
    getline(cin>>ws, noteToDelete);
    int noteSize = nodesList.size();

    for (int i = 0; i <nodesList.size(); i++)
    {
        if (noteToDelete ==nodesList[i].getTitle())
        {
            cout<<"Note has been deleted"<<endl;
            cout<<"Details of deleted note: Title: "<< nodesList[i].getTitle()<<" Text: "<<nodesList[i].getText()<<" tags: ";

            nodesList[i].outputList(nodesList[i].getTags());
            nodesList.erase(nodesList.begin()+i);
            cout<<""<<endl;
            break;
        }
      
        }
        if(nodesList.size() == noteSize)
          cout<<"No such note in the Storyboard"<<endl;
    }

void Storyboard::searchByTitle(){
    cout<<"What tag are you looking for. Introduce the title"<<endl;
    string title;
    getline(cin>>ws, title);
    bool foundNote = false;

    for(int i =0;i<nodesList.size();i++){
        if(nodesList[i].getTitle() == title){ 
                cout<<"Note found "<<i<<" with the following details "<<endl;
               nodesList[i].speakObject(nodesList[i].getTitle(), nodesList[i].getText(), nodesList[i].getTags());
               foundNote = true;
        }
    }
    if(foundNote ==false){
        cout<<"Note has not been found"<<endl;
    }
}

    void Storyboard::searchByText(){
    cout<<"What text are you looking for. Introduce the text"<<endl;
    string text;
    getline(cin>>ws, text);
    bool foundNote = false;

  for(int i =0;i<nodesList.size();i++){
        if(nodesList[i].getText() == text){ 
                cout<<"Note nr found "<<i<<":  with the following details "<<endl;
               nodesList[i].speakObject(nodesList[i].getTitle(), nodesList[i].getText(), nodesList[i].getTags());
               foundNote = true;
        }
    }
    if(foundNote ==false){
        cout<<"Note has not been found"<<endl;
    }
}
    void Storyboard :: searchByTag(){

             string tagName;
           
             cout<<"What tag are you looking for. Introduce the tag"<<endl;
         
         //  getline(cin, dummy);
        
            getline(cin >>ws, tagName);
    
            bool foundNote = false;
            for(int i = 0;i<nodesList.size();i++){
                   //for( int j = 0;j<nodesList[i].getTags().size();j++){
                       list<string> tempList = nodesList[i].getTags();
                       list<string>:: iterator itFind = find(tempList.begin(), tempList.end(), tagName);
                       // for (auto it = tempList.begin();it!=tempList.end();it++){
                                if(itFind!= tempList.end()){
                                     cout<<"Note nr "<<i<<": found with the following details "<<endl;
                                    nodesList[i].speakObject(nodesList[i].getTitle(), nodesList[i].getText(), nodesList[i].getTags());
                                    foundNote = true;
                                }
                        
                          tempList.clear();
                   }
                   if(foundNote == false){
                       cout<<"No such note has been found"<<endl;
                   }
    }
             
      

    





