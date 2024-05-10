

#include <iostream>
#include    <windows.h>
#include "Playlist.h"
#include "Dance.h"
#include "Ballad.h"
#include "Classic.h"
#include "IU.h"
#include "Rock.h"
#include "TaeYeon.h"
#include "YounHa.h"
#include "SevenTeen.h"
#include "Buzz.h"
#include "Nell.h"
#include "StrayKids.h"
#include "QWER.h"
#include "JangBeomJun.h"
#include "NewJeans.h"
#include "Psy.h"




void endline() {
    cout << "ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n" << endl;
}

void MainMenu() {

    cout << "**************************************************\n";
    cout << "**************************************************\n";
    cout << "**********                              **********\n";
    cout << "**********          PLAY LIST           **********\n";
    cout << "**********                              **********\n";
    cout << "**************************************************\n";
    cout << "**************************************************\n";



}

void PlaySong()
{
    string basePath;

    basePath = "./sing/";

    string filename;
    string fileExtension = ".dll";
    string filenameFull;

    cout << "재생할 노래를 입력하세요.{띄어쓰기 부분은 _(언더바) 로 입력해주세요.}";
    cin >> filename;


    filenameFull = basePath + filename + fileExtension;

    ifstream inFile(filenameFull);
    if (inFile.is_open()) {
        string line;



        while (getline(inFile, line)) {
            cout << line << endl;

        }
        inFile.close();
        Sleep(5000);
    }
    else {
        cerr << "현재 뮤직플레이어에 없는 노래입니다. 메인화면으로 돌아갑니다." << endl;
        Sleep(1000);
        system("cls");
    }


}


int main()
{
   

    while (true)
    {
        SingType singtype;
        Dance dance;
        Ballad ballad;
        string option;
        string singer1;
        string singname;
        IU iu;
        Classic classic;
        TaeYeon taeyeon;
        YounHa younha;
        SevenTeen seventeen;
        Buzz buzz;
        Nell nell;
        StrayKids straykids;
        QWER qwer;
        JangBeomJun jangbeomjun;
        NewJeans newjeans;
        Psy psy;
        Rock rock;

        MainMenu();

        cout << "원하는 장르 또는 가수이름을 입력하세요. \n 1.댄스 2. 발라드 3. 락 4. 전체노래목록 \n\n"
                " 가수 목록 \n\n아이유 , 태연 , 넬 , QWER\n"
            "버즈 , 세븐틴 , 윤하 , 스트레이키즈 \n"
            "뉴진스 , 싸이 , 장범준(버스커버스커) \n"
            ;
            cin >> option;
            if (option == "1" || option == "댄스" ||
                option == "Dance" || option == "dance")
            {
                cout << "Dance Play List" << endl;
                dance.sing();

            
                PlaySong();


             
            }
            else if (option == "2" || option == "발라드"
                || option == "Ballad" || option == "ballad")
            {
                cout << "Ballad Play List" << endl;
                ballad.sing();

                PlaySong();
                
            }
            else if (option == "3" || option == "락"
                || option == "Rock" || option == "rock")
            {
                cout << "Rock Play List" << endl;
                rock.sing();

                PlaySong();

            }
            else if (option == "4" || option == "전체노래목록"
                || option == "Playlist" || option == "playlist")
            {
                cout << "All Play List" << endl;
                dance.sing();
                ballad.sing();
                classic.sing();
                rock.sing();


                PlaySong();

            }
            else if (option == "아이유" || option == "iu")
            {
                cout << "아이유 노래 모음" << endl;
                iu.sing();

                PlaySong();
            }
            else if (option == "태연" || option == "taeyeon")
            {
                cout << "태연 노래 모음" << endl;
                
                taeyeon.sing();

                PlaySong();

              
              
                
                
            }
            else if (option == "세븐틴" || option == "seventeen")
            {
                cout << "세븐틴 노래 모음\n" << endl;
                seventeen.sing();

                PlaySong();
            }
            else if (option == "버즈" || option == "buzz")
            {
                cout << "버즈 노래 모음\n" << endl;
                buzz.sing();

                PlaySong();
            }
            else if (option == "넬" || option == "nell")
            {
                cout << "넬 노래 모음\n" << endl;
                nell.sing();

                PlaySong();
            }
            else if (option == "스트레이키즈" || option == "straykIds")
            {
                cout << "스트레이키즈 노래모음\n" << endl;
                straykids.sing();

                PlaySong();
            }
            else if (option == "qwer" || option == "QWER")
            {
               
                cout << "QWER 노래 모음\n" << endl;
                
                qwer.sing();

                PlaySong();
            }
            else if (option == "장범준" || option == "버스커버스커")
            {
                cout << "장범준 노래 모음\n" << endl;
                jangbeomjun.sing();

                PlaySong();
            }
            else if (option == "뉴진스" || option == "newjeans" )
            {
                cout << "뉴진스 노래 모음\n" << endl;
                newjeans.sing();

                PlaySong();
            }
            else if (option == "윤하" || option == "younha")
            {
                cout << "윤하 노래 모음\n" << endl;
                younha.sing();

                PlaySong();
                }
            else if (option == "싸이" || option == "psy")
            {
                cout << "싸이 노래 모음\n" << endl;
                psy.sing();

                PlaySong();
                }
            else if (option == "cls")
            {
                cout << "\n잘못된 입력 입니다. 다시한번 확인 해주세요.\n";
                Sleep(1000);
                system("cls");
               
                }
            else {
                cout << "\n잘못된 입력 입니다. 다시한번 확인 해주세요.\n";
                Sleep(1000);
                system("cls");
            }
             
            
      
       


           
    }
   
}

