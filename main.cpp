#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <numeric>
using namespace std;

bool leave = false;
int choice;
string newSong;
string songLink;

int main() {
    vector<string> songs = {"734", "Almost Easy", "Bat Country", "Blackened", "Carry On", 
                            "Cut the Bridge", "Empty Out Your Pockets", "Faint", "God Hates Us", 
                            "Hail to the King", "House of the Rising Sun", "Injection", 
                            "Motorbreath", "Nightmare", "One", "Pyschosocial", 
                            "Survive", "Welcome to the Family"};
    
    vector<string> links = {"https://www.youtube.com/watch?v=WqKWP9j3w8E", "https://www.youtube.com/watch?v=lz3OrB9i2Y0", 
                            "https://www.youtube.com/watch?v=NJ2regeDoJw", "https://www.youtube.com/watch?v=nUZVXtDVrc0", 
                            "https://www.youtube.com/watch?v=rXNlFiMaPMA", "https://www.youtube.com/watch?v=_f9b0NB5o4E", 
                            "https://www.youtube.com/watch?v=hgYhws0AHcg", "https://www.youtube.com/watch?v=LYU-8IFcDPw", 
                            "https://www.youtube.com/watch?v=DbphTSHzDlw", "https://www.youtube.com/watch?v=DelhLppPSxY", 
                            "https://www.youtube.com/watch?v=6nZoaDBPSMc", "https://www.youtube.com/watch?v=Vo6JirKKbFE", 
                            "https://www.youtube.com/watch?v=crhU92GKnBk", "https://www.youtube.com/watch?v=FRaQGG7j8Xw", 
                            "https://www.youtube.com/watch?v=apK2jCrfnsk", "https://www.youtube.com/watch?v=aVUJFS0s6jo", 
                            "https://www.youtube.com/watch?v=OVzYbh3xwIE", "https://www.youtube.com/watch?v=iJ-WsnaYDCg"};

    do {
        cout << "Playlist" << endl;
        cout << "1. View playlist" << endl;
        cout << "2. Add a song" << endl;
        cout << "3. Play playlist" << endl;
        cout << "4. Play playlist (Shuffle)" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter a choice" << endl;
        cin >> choice;
        cin.ignore();
        
        switch(choice) {
            case 1:
                cout << "Song list" << endl;
                for (size_t i = 0; i < songs.size(); ++i) {
                    cout << i + 1 << ". " << songs[i] << endl;
                }
                break;
            case 2:
                cout << "Enter the song name" << endl;
                getline(cin, newSong);
                songs.push_back(newSong);
                cout << "Enter a youtube link for the song" << endl;
                getline(cin, songLink);
                links.push_back(songLink);
                cout << newSong << " has been added to the playlist with the link " << songLink << endl;
                break;
            case 3:
                cout << "Playing playlist..." << endl;
                break;
            case 4:
                {
                    vector<size_t> indices(songs.size());
                    iota(indices.begin(), indices.end(), 0);
                    random_device rd;
                    mt19937 g(rd());
                    shuffle(indices.begin(), indices.end(), g);

                    vector<string> shuffledSongs(songs.size());
                    vector<string> shuffledLinks(links.size());

                    for (size_t i = 0; i < indices.size(); ++i) {
                        shuffledSongs[i] = songs[indices[i]];
                        shuffledLinks[i] = links[indices[i]];
                    }
                }
                break;
            case 5:
                leave = true;
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }
    } while (!leave);

    return 0;
}
