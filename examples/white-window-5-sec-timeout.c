// 参照: https://tomitomix.hatenablog.com/entry/2017/08/29/161245

#include <X11/Xlib.h>
#include <unistd.h>

int X = 100;
int Y = 50;
unsigned int WIDTH = 800;
unsigned int HEIGHT = 500;
int DEPTH = 1;

int main()
{
        Display *d; //Xサーバーへの接続を表す
        Window wr;  //ウィンドウを表す
        unsigned long black, white;

        d = XOpenDisplay(NULL);

        black = BlackPixel(d, DefaultScreen(d));
        white = WhitePixel(d, DefaultScreen(d));

        wr = XCreateSimpleWindow(d, RootWindow(d, DefaultScreen(d)), X, Y, WIDTH, HEIGHT, DEPTH, black, white); //ウィンドウの生成

        XMapWindow(d, wr); //ウィンドウのマップ

        XFlush(d); //Xサーバーにイベントを送信する

        sleep(5);

        XCloseDisplay(d); //Xサーバーとの通信を切る

        return (0);
}
