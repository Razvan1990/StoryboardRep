#ifndef STORYBOARD_H
#define STORYBOARD_H

class Storyboard:public Node{
       
        string storyName;
        vector<Node> nodesList;
   
   
    public:
        //string storyName;
        Storyboard();
        Storyboard(string storyboardName);
        void addNote(Node n);
        void deleteNote();
        void searchByTitle();
        void searchByText();
        void searchByTag();
        void showStoryboard();
        void addNewNote();

};
#endif