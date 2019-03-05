#include <allegro.h>
#include <cstdlib>
#include <conio.h>
#include <ctime>
#include <cmath>
using namespace std;
void init();
void deinit();

int main() {
            int w8=0;
            int par=0;
            int par1=0;
            int str=0;
            int prz;
            int prz1=0;
            double y;
            double x;
            int x1=0;
            int l1=0;
            int l2=0;
            int l3=0;
            int ch=0;
            int speedu=0;
            int speedd=0;
            int w88=25;
            int taby[20]={233,258,283,308,333,358,383,408,433,458,483,508,533,558,583,608,633,658,683,708};
	init();
//Oskar Cedro 2015
	while (!key[KEY_ESC]) {
		/* put your code here */
        srand(time(NULL));
        SAMPLE * gameplay = NULL;
        gameplay = load_sample( "audio\\gameplay.wav" );
        SAMPLE * gameplay1 = NULL;
        gameplay1 = load_sample( "audio\\gameplay1.wav" );
        SAMPLE * impact = NULL;
        impact = load_sample( "audio\\impact.wav" );
        SAMPLE * mlg = NULL;
        mlg = load_sample( "audio\\mlg.wav" );
        SAMPLE * sad = NULL;
        sad = load_sample( "audio\\sad.wav" );
        SAMPLE * lose = NULL;
        lose = load_sample( "audio\\lose.wav" );
        BITMAP * bufor = NULL;
        bufor=create_bitmap(1200,900);
        BITMAP * chmurki = NULL;
        chmurki=load_bmp("graphics\\chmurki.bmp",default_palette);
        BITMAP * tlo1 = NULL;
        tlo1=load_bmp("graphics\\tlo1.bmp",default_palette);
        BITMAP * licznik = NULL;
        licznik=load_bmp("graphics\\licznik.bmp",default_palette);
        BITMAP * licznik1 = NULL;
        licznik1=load_bmp("graphics\\licznik1.bmp",default_palette);
        BITMAP * przeszkoda1 = NULL;
        przeszkoda1=load_bmp("graphics\\przeszkoda1.bmp",default_palette);
        BITMAP * przeszkoda = NULL;
        przeszkoda=load_bmp("graphics\\przeszkoda.bmp",default_palette);
        BITMAP * startowy1 = NULL;
        startowy1=load_bmp("graphics\\startowy1.bmp",default_palette);
        BITMAP * startowy2 = NULL;
        startowy2=load_bmp("graphics\\startowy2.bmp",default_palette);
        BITMAP * bohater1 = NULL;
        bohater1=load_bmp("graphics\\bohater1.bmp",default_palette);
        BITMAP * bohater2 = NULL;
        bohater2=load_bmp("graphics\\bohater2.bmp",default_palette);
        BITMAP * censored = NULL;
        censored=load_bmp("graphics\\censored.bmp",default_palette);
        BITMAP * censored1 = NULL;
        censored1=load_bmp("graphics\\censored1.bmp",default_palette);
        BITMAP * censored2 = NULL;
        censored2=load_bmp("graphics\\censored2.bmp",default_palette);
        BITMAP * a = NULL;
        a=load_bmp("graphics\\1.bmp",default_palette);
        BITMAP * b = NULL;
        b=load_bmp("graphics\\2.bmp",default_palette);
        BITMAP * c = NULL;
        c=load_bmp("graphics\\3.bmp",default_palette);
        if(w8==0){
        w8=1;
        masked_blit(startowy1,bufor,0,0,0,0, startowy1->w, startowy1->h);
        stretch_blit(bufor, screen, 0, 0, bufor->w, bufor->h, 0, 0, SCREEN_W, SCREEN_H);
        textout_ex(screen, font, "Oskar Cedro 2015", SCREEN_W-150, SCREEN_H-20, makecol(0, 0, 0), -1);
        play_sample( gameplay, 255, 127, 1000, 1 );
        rest(2000);
        clear_keybuf();
        masked_blit(startowy2,bufor,0,0,0,0, startowy2->w, startowy2->h);
        stretch_blit(bufor, screen, 0, 0, bufor->w, bufor->h, 0, 0, SCREEN_W, SCREEN_H);
        textout_ex(screen, font, "Oskar Cedro 2015", SCREEN_W-150, SCREEN_H-20, makecol(0, 0, 0), -1);
        readkey();
        stop_sample(gameplay);
        }
        masked_blit(c,bufor,0,0,0,0, c->w, c->h);
        stretch_blit(bufor, screen, 0, 0, bufor->w, bufor->h, 0, 0, SCREEN_W, SCREEN_H);
        play_sample( impact, 255, 127, 1000, 0 );
		rest(1000);
		masked_blit(b,bufor,0,0,0,0, b->w, b->h);
        stretch_blit(bufor, screen, 0, 0, bufor->w, bufor->h, 0, 0, SCREEN_W, SCREEN_H);
		play_sample( impact, 255, 127, 1000, 0 );
		rest(1000);
		masked_blit(a,bufor,0,0,0,0, a->w, a->h);
        stretch_blit(bufor, screen, 0, 0, bufor->w, bufor->h, 0, 0, SCREEN_W, SCREEN_H);
		play_sample( impact, 255, 127, 1000, 0 );
		rest(1000);
		prz1=0;
		x1=0;
		l1=0;
		l2=0;
		l3=0;
		ch=0;
		speedu=0;
		speedd=0;
		w88=25;
		par1=0;
		play_sample( gameplay1, 255, 127, 1000, 1 );
		while(!key[KEY_ESC]&&x1==0){
           rest(w88);
           if(par1>2)
           {
           	  par1=0;
           	  par++;
           }
           else
           {
           	  par1++;
           }
           ch--;
           if(ch==-1200)
           {
              ch=0;
           }
           y=taby[prz1];
		   masked_blit(tlo1,bufor,0,0,0,0, tlo1->w, tlo1->h);
           masked_blit(chmurki,bufor,0,0,ch,0, chmurki->w, chmurki->h);
           masked_blit(chmurki,bufor,0,0,ch+1200,0, chmurki->w, chmurki->h);
		   masked_blit(licznik,bufor,(l1*100),0,5,5, licznik1->w, licznik1->h);
	       masked_blit(licznik,bufor,(l2*100),0,55,5, licznik1->w, licznik1->h);
	       masked_blit(licznik,bufor,(l3*100),0,105,5, licznik1->w, licznik1->h);   	       
           if(l3>9)
           {
              l3=0;
              l2++;
           }
           if(l2>9)
           {
              play_sample( mlg, 255, 127, 1000, 0 );
              l2=0;
              l1++;
           }
           if(prz==0)
           {
              x=(624-y)*3;
              masked_blit(przeszkoda,bufor,prz1*95,0,x,y, przeszkoda1->w, przeszkoda->h);
           }
           else
           {
              x=(1350-y)*1,4;
              masked_blit(przeszkoda,bufor,prz1*95,0,x,y, przeszkoda1->w, przeszkoda->h);
           }
           prz1++;
           if(prz1>19)
           {
              l3++;
              prz1=0;
              prz=rand()%2;
           }
           if(str==1)
           {
		      if(par%2==0)
                {
                      masked_blit(bohater1,bufor,0,0,580,550, bohater1->w, bohater1->h);
                }
                else
                {
                      masked_blit(bohater2,bufor,0,0,580,550, bohater2->w, bohater2->h);
                }
       	   }
       	   else
       	   {
               if(par%2==0)
                {
                      masked_blit(bohater1,bufor,0,0,187,542, bohater1->w, bohater1->h);
                }
                else
                {
                      masked_blit(bohater2,bufor,0,0,187,542, bohater2->w, bohater2->h);
                }
           }
           if(key[KEY_RIGHT])
           {
              str=1;
           }
           if(key[KEY_LEFT])
           {
              str=0;
           }
           if(key[KEY_ESC])
           {
              exit(0);
           }
           if(key[KEY_Q])
           {
           	  if(speedu==0)
           	  {
                 if(w88>5)
           	     {
           	        w88=w88-5;
                 }
                 speedu=1;
           	  }
           }
           else
           {
           	  speedu=0;
           }
           if(key[KEY_A])
           {
           	  if(speedd==0)
           	  {
                 if(w88<45)
           	     {
           	        w88=w88+5;
                 }
                 speedd=1;
           	  }
           }
           else
           {
           	  speedd=0;
           }
           adjust_sample( gameplay1, 255, 127, 1250-(w88*10), 1 );
           //blit(bufor,screen,0,0,0,0, bufor->w, bufor->h);
           stretch_blit(bufor, screen, 0, 0, bufor->w, bufor->h, 0, 0, SCREEN_W, SCREEN_H);
           if(str==prz&&prz1>14)
           {
              stop_sample(gameplay1);
      		  play_sample( lose, 255, 127, 1000, 0 );
	  		  play_sample( sad, 255, 127, 1000, 1 );
              masked_blit(censored,bufor,0,0,0,139, censored->w, censored->h);
              stretch_blit(bufor, screen, 0, 0, bufor->w, bufor->h, 0, 0, SCREEN_W, SCREEN_H);
              rest(500);
              masked_blit(censored1,bufor,0,0,0,139, censored1->w, censored1->h);
              stretch_blit(bufor, screen, 0, 0, bufor->w, bufor->h, 0, 0, SCREEN_W, SCREEN_H);
              rest(500);
              masked_blit(censored2,bufor,0,0,0,139, censored2->w, censored2->h);
              stretch_blit(bufor, screen, 0, 0, bufor->w, bufor->h, 0, 0, SCREEN_W, SCREEN_H);
              x1=1;
              while(!key[KEY_SPACE])
              {
                 if(key[KEY_ESC])
                 {
                    exit(0);
                 } 
              }
              stop_sample(sad);
           }
	    }
	    vsync();
}

	deinit();
	return 0;
}
END_OF_MAIN()

void init() {
	int depth, res;
	allegro_init();
	depth = desktop_color_depth();
	if (depth == 0) depth = 32;
	set_color_depth(depth);
	res = set_gfx_mode(GFX_AUTODETECT_WINDOWED, 1000, 750, 0, 0);
	if (res != 0) {
		allegro_message(allegro_error);
		exit(-1);
	}
	install_timer();
	install_keyboard();
	install_mouse();
	/* add other initializations here */
    install_sound( DIGI_AUTODETECT, MIDI_AUTODETECT, "" );
    set_volume( 255, 255 );
}

void deinit() {
	clear_keybuf();
	/* add other deinitializations here */
}
