#ifndef  NODE_H
#define  NODE_H

#include<iostream>
#include<string>
#include<vector>
#include <list>
#pragma once
#define arraySize  = 10;

using namespace std;

class Node{

    private:
        string text;
        string title;
       list<string>tags;
   
   public:
        Node();
        Node(string title, string text, list<string>tags);
        string getTitle();
        string getText();
        list<string> getTags();
        void setTitle(string title) ;
        void  setText(string text) ;
        void setTags(list<string>tags);
        void speakObject(string a, string b, list<string>c);
        void outputList(list<string>aa);
      
};
#endif
