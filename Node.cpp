
#include <iostream>
#include "Node.h"
#pragma once
#include<vector>
using namespace std;

Node::Node(){
 
}
Node::Node(string atitle, string atext,list<string>atags){
       title = atitle;
       text = atext;
       tags = atags;
}

string Node:: getTitle(){
    return this ->title;
}
string Node::getText(){
    return this-> text;
}
   list<string> Node::getTags(){
   return this-> tags;
 }
   


void Node:: setTitle(string atitle){
    title  = atitle;
}
void Node:: setText(string atext){
    text= atext;
}
void Node::setTags(list<string>atags){
   tags = atags;
    }



void Node::outputList(list<string>tags){

    for (auto it =tags. begin();it!=tags.end();it++){
       if(it!=tags.end() && next(it)==tags.end()){
           cout<<*it<<" ";
       }else{
           cout<<*it<<" , ";
       }
      
    }
}
//don't use cout in cout
void Node:: speakObject(string title, string text, list<string>tags){
        cout<<" We have a Node with the title "<<title<< " and with a text of "<<text<< " and having the following notes :";
        outputList(tags);
      //cout<<"bla bla bla"<<endl;
}
