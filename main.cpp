#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
using namespace std;
int choice;
int main() {
    vector<string> songs = {"734", "Almost Easy", "Bat Country", "Blackened", "Carry On", "Cut the Bridge", "Empty Out Your Pockets", "Faint", "God Hates Us" "Hail to the King", "House of the Rising Sun", "Injection", "Kill My Vibe", "Lace It", "Motorbreath", "Nightmare", "One", "Paranoid", "Question!", "Red Moonlight", "Survive", "This Means War", "Unholy Confessions", "War", "Welcome to the Family", };
    vector<string> links = {"https://www.youtube.com/watch?v=WqKWP9j3w8E", "https://www.youtube.com/watch?v=lz3OrB9i2Y0", "https://www.youtube.com/watch?v=NJ2regeDoJw", "https://www.youtube.com/watch?v=nUZVXtDVrc0", "https://www.youtube.com/watch?v=rXNlFiMaPMA", "https://www.youtube.com/watch?v=_f9b0NB5o4E", "https://www.youtube.com/watch?v=hgYhws0AHcg", "https://www.youtube.com/watch?v=LYU-8IFcDPw", "https://www.youtube.com/watch?v=DbphTSHzDlw", "https://www.youtube.com/watch?v=DelhLppPSxY", "https://www.youtube.com/watch?v=6nZoaDBPSMc"}
    //const char* url = "";
    //ShellExecute(NULL, "open", url, NULL, NULL, SW_SHOWNORMAL);
    do{
        cout << "Playlist" << endl;
        cout << "1. View playlist" << endl;
        cout << "2. Add a song" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter a choice" << endl;
        cin >> choice;
        cin.ignore();
        
        switch(choice){
            case 1:
                cout << "Song list" << endl;
                for (size_t i = 0; i < songs.size; ++i){
                    cout << i+1 << ". " << songs[i] << endl;
                }
                break;
            case 2:
                string newSong;
                cout << "Enter the song name" << endl;
                getline(cin, newSong);
                songs.push_back(newSong);
                cout << newSong << " has been added to the playlist" << endl;
                break;
            case 3:
                return 0;
            default:
                cout << "error trap" << endl;
        }
    }
    return 0;
}
