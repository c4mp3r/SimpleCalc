#include <gtk/gtk.h>
#include <stdio.h>
#include <stdlib.h>


  GtkWindow *window;

  GtkButton *bt0;
  GtkButton *bt1;
  GtkButton *bt2;
  GtkButton *bt3;
  GtkButton *bt4;
  GtkButton *bt5;
  GtkButton *bt6;
  GtkButton *bt7;
  GtkButton *bt8;
  GtkButton *bt9;
  GtkButton *Som;
  GtkButton *Sub;
  GtkButton *Div;
  GtkButton *Mul;
  GtkButton *Ponto;
  GtkButton *Igual;
  GtkButton *Inverter;
  GtkButton *Limpar;
  GtkButton *Pot;


  GtkFrame *frame;
  GtkWidget *Texto;

  float num1,num2;
  char op='i';

float pot(float n1, float n2)
{
    int nn2;
    nn2=(int)n2;

    if(nn2==0){return 1;}
    else if(nn2 < 0)
    {
        nn2=nn2*-1;
        float res=1;
        int i;
        for(i=0;i<nn2;i++)
        {
            res=res*n1;
        }
        res=(double) 1/res;
    return (res);
    }
    else
    {
        float res=1;
        int i;
        for(i=0;i<nn2;i++)
        {
            res=res*n1;
        }
        return res;
    }
}

void Pot(GtkWidget *widget, gpointer label)
{
    gchar * s = gtk_entry_get_text(GTK_ENTRY(Texto));
    num1=atof(s);
    op='^';

    gtk_entry_set_text(Texto,"");
}

void limpar(GtkWidget *widget, gpointer label)
{
    gtk_entry_set_text(Texto,"");
}



void inverter(GtkWidget *widget, gpointer label)
{
    gchar * s = gtk_entry_get_text(GTK_ENTRY(Texto));
    float a;
    a=atof(s);
    a=a*-1;
    gchar * m=NULL;
    int l=strlen(s);
    l=(gchar *)malloc(sizeof(char) * (l+5));
    sprintf(l,"%f",a);
    gtk_entry_set_text(Texto,(l));


}

void igual(GtkWidget *widget, gpointer label)
{

    gchar * s = gtk_entry_get_text(GTK_ENTRY(Texto));
    num2 = atof(s);
    char *k=NULL;
    int len=strlen(s);
    k=(gchar *)malloc(sizeof(char) * (len+2));
    double res;

    if(op=='i'){return;}
    if(op=='+'){res=num1+num2;}
    if(op=='-'){res=num1-num2;}
    if(op=='/'){res=num1/num2;}
    if(op=='*'){res=num1*num2;}
    if(op=='^'){res=pot(num1,num2);}

    sprintf(k,"%f",res);
    gtk_entry_set_text(Texto,k);
    op='i';
}


void somSinal(GtkWidget *widget, gpointer label)
{
    gchar * s = gtk_entry_get_text(GTK_ENTRY(Texto));
    num1=atof(s);
    op='+';

    gtk_entry_set_text(Texto,"");
}

void subSinal(GtkWidget *widget, gpointer label)
{
    gchar * s = gtk_entry_get_text(GTK_ENTRY(Texto));

    num1 = atof(s);
    op='-';
    gtk_entry_set_text(Texto,"");
}

void divSinal(GtkWidget *widget, gpointer label)
{
    gchar * s = gtk_entry_get_text(GTK_ENTRY(Texto));

    num1 = atof(s);
    op='/';
    gtk_entry_set_text(Texto,"");
}

void mulSinal(GtkWidget *widget, gpointer label)
{
    gchar * s = gtk_entry_get_text(GTK_ENTRY(Texto));

    num1 = atof(s);
    op='*';
    gtk_entry_set_text(Texto,"");
}


void add0(GtkWidget *widget, gpointer label)
{
    char *news = NULL;
    int len = 0;
    char* s = gtk_entry_get_text(GTK_ENTRY(Texto));

    len = strlen(s);
    news = (gchar *)malloc(sizeof(char) * (len+5));

    strcpy(news,s);

    strcat(news, "0");

    gtk_entry_set_text(Texto,news);
    free(news);
}
void add1(GtkWidget *widget, gpointer label)
{
    gchar *news = NULL;
    int len = 0;
    gchar* s = gtk_entry_get_text(GTK_ENTRY(Texto));
    len = strlen(s);
    news = (gchar *)malloc(len+5);
    strcpy(news,s);
    strcat(news, "1");
    gtk_entry_set_text(Texto,news);
    free(news);
}
void add2(GtkWidget *widget, gpointer label)
{
    gchar *news = NULL;
    int len = 0;
    gchar* s = gtk_entry_get_text(GTK_ENTRY(Texto));
    len = strlen(s);
    news = (gchar *)malloc(sizeof(gchar) * (len+5));
    strcpy(news,s);
    strcat(news, "2");
    gtk_entry_set_text(Texto,news);
    free(news);
}
void add3(GtkWidget *widget, gpointer label)
{
    gchar *news = NULL;
    int len = 0;
    gchar* s = gtk_entry_get_text(GTK_ENTRY(Texto));
    len = strlen(s);
    news = (gchar *)malloc(sizeof(gchar) * (len+5));
    strcpy(news,s);
    strcat(news, "3");
    gtk_entry_set_text(Texto,news);
    free(news);
}
void add4(GtkWidget *widget, gpointer label)
{
    gchar *news = NULL;
    int len = 0;
    gchar* s = gtk_entry_get_text(GTK_ENTRY(Texto));
    len = strlen(s);
    news = (gchar *)malloc(sizeof(gchar) * (len+5));
    strcpy(news,s);
    strcat(news, "4");
    gtk_entry_set_text(Texto,news);
    free(news);
}
void add5(GtkWidget *widget, gpointer label)
{
    gchar *news = NULL;
    int len = 0;
    gchar* s = gtk_entry_get_text(GTK_ENTRY(Texto));
    len = strlen(s);
    news = (gchar *)malloc(sizeof(gchar) * (len+5));
    strcpy(news,s);
    strcat(news, "5");
    gtk_entry_set_text(Texto,news);
    free(news);
}
void add6(GtkWidget *widget, gpointer label)
{
    gchar *news = NULL;
    int len = 0;
    gchar* s = gtk_entry_get_text(GTK_ENTRY(Texto));
    len = strlen(s);
    news = (gchar *)malloc(sizeof(gchar) * (len+5));
    strcpy(news,s);
    strcat(news, "6");
    gtk_entry_set_text(Texto,news);
    free(news);
}


void add7(GtkWidget *widget, gpointer label)
{
    gchar *news = NULL;
    int len = 0;
    gchar* s = gtk_entry_get_text(GTK_ENTRY(Texto));
    len = strlen(s);
    news = (gchar *)malloc(sizeof(gchar) * (len+5));
    strcpy(news,s);
    strcat(news, "7");
    gtk_entry_set_text(Texto,news);
    free(news);
}


void add8(GtkWidget *widget, gpointer label)
{
    gchar *news = NULL;
    int len = 0;
    gchar* s = gtk_entry_get_text(GTK_ENTRY(Texto));
    len = strlen(s);
    news = (gchar *)malloc(sizeof(gchar) * (len+5));
    strcpy(news,s);
    strcat(news, "8");
    gtk_entry_set_text(Texto,news);
    free(news);
}


void add9(GtkWidget *widget, gpointer label)
{
    gchar *news = NULL;
    int len = 0;
    gchar* s = gtk_entry_get_text(GTK_ENTRY(Texto));
    len = strlen(s);
    news = (gchar *)malloc(sizeof(gchar) * (len+5));
    strcpy(news,s);
    strcat(news, "9");
    gtk_entry_set_text(Texto,news);
    free(news);
}


void addPoint(GtkWidget *widget, gpointer label)
{
    gchar *news = NULL;
    int len = 0;
    gchar* s = gtk_entry_get_text(GTK_ENTRY(Texto));
    len = strlen(s);
    news = (gchar *)malloc(sizeof(gchar) * (len+5));
    strcpy(news,s);
    strcat(news, ",");
    gtk_entry_set_text(Texto,news);
    free(news);
}




int main( int argc, char *argv[])
{
  gtk_init(&argc, &argv);


  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
  gtk_window_set_default_size(GTK_WINDOW(window), 270,375);
  gtk_window_set_title(GTK_WINDOW(window), "Simple Calc");


  frame = gtk_fixed_new();
  gtk_container_add(GTK_CONTAINER(window), frame);


  bt0 = gtk_button_new_with_label("0");
  gtk_widget_set_size_request(bt0, 60, 60);
  gtk_fixed_put(GTK_FIXED(frame), bt0, 10, 325);

  Ponto=gtk_button_new_with_label(",");
  gtk_widget_set_size_request(Ponto, 60, 60);
  gtk_fixed_put(GTK_FIXED(frame), Ponto,75, 325);

  Igual=gtk_button_new_with_label("=");
  gtk_widget_set_size_request(Igual, 60, 60);
  gtk_fixed_put(GTK_FIXED(frame), Igual,140, 325);




  bt1 = gtk_button_new_with_label("1");
  gtk_widget_set_size_request(bt1,60,60);
  gtk_fixed_put(GTK_FIXED(frame), bt1,10,260);

  bt2= gtk_button_new_with_label("2");
  gtk_widget_set_size_request(bt2,60,60);
  gtk_fixed_put(GTK_FIXED(frame),bt2,75,260);

  bt3=gtk_button_new_with_label("3");
  gtk_widget_set_size_request(bt3,60,60);
  gtk_fixed_put(GTK_FIXED(frame),bt3,140,260);




  bt4 = gtk_button_new_with_label("4");
  gtk_widget_set_size_request(bt4,60,60);
  gtk_fixed_put(GTK_FIXED(frame), bt4,10,195);

  bt5= gtk_button_new_with_label("5");
  gtk_widget_set_size_request(bt5,60,60);
  gtk_fixed_put(GTK_FIXED(frame),bt5,75,195);

  bt6=gtk_button_new_with_label("6");
  gtk_widget_set_size_request(bt6,60,60);
  gtk_fixed_put(GTK_FIXED(frame),bt6,140,195);




  bt7 = gtk_button_new_with_label("7");
  gtk_widget_set_size_request(bt7,60,60);
  gtk_fixed_put(GTK_FIXED(frame), bt7,10,130);

  bt8= gtk_button_new_with_label("8");
  gtk_widget_set_size_request(bt8,60,60);
  gtk_fixed_put(GTK_FIXED(frame),bt8,75,130);

  bt9=gtk_button_new_with_label("9");
  gtk_widget_set_size_request(bt9,60,60);
  gtk_fixed_put(GTK_FIXED(frame),bt9,140,130);




  Limpar=gtk_button_new_with_label("C");
  gtk_widget_set_size_request(Limpar,125,60);
  gtk_fixed_put(GTK_FIXED(frame),Limpar,10,65);

  Inverter=gtk_button_new_with_label("+ -");
  gtk_widget_set_size_request(Inverter,60,60);
  gtk_fixed_put(GTK_FIXED(frame),Inverter,140,65);


  Som=gtk_button_new_with_label("+");
  gtk_widget_set_size_request(Som,60,60);
  gtk_fixed_put(GTK_FIXED(frame),Som,205,130);

  Sub=gtk_button_new_with_label("-");
  gtk_widget_set_size_request(Sub,60,60);
  gtk_fixed_put(GTK_FIXED(frame),Sub,205,195);

  Div=gtk_button_new_with_label("/");
  gtk_widget_set_size_request(Div,60,60);
  gtk_fixed_put(GTK_FIXED(frame),Div,205,260);

  Mul=gtk_button_new_with_label("*");
  gtk_widget_set_size_request(Mul,60,60);
  gtk_fixed_put(GTK_FIXED(frame),Mul,205,325);

  Pot=gtk_button_new_with_label("^");
  gtk_widget_set_size_request(Pot,60,60);
  gtk_fixed_put(GTK_FIXED(frame),Pot,205,65);


  Texto = gtk_entry_new();
  gtk_widget_set_size_request(Texto,250,30);
  gtk_fixed_put(GTK_FIXED(frame),Texto,10,20);



  g_signal_connect(window, "destroy",G_CALLBACK (gtk_main_quit), NULL);

   g_signal_connect (G_OBJECT (bt0), "clicked",
   G_CALLBACK (add0), (gpointer) NULL);

   g_signal_connect (G_OBJECT (bt1), "clicked",
   G_CALLBACK (add1), (gpointer) NULL);

   g_signal_connect (G_OBJECT (bt2), "clicked",
   G_CALLBACK (add2), (gpointer) NULL);

   g_signal_connect (G_OBJECT (bt3), "clicked",
   G_CALLBACK (add3), (gpointer) NULL);


   g_signal_connect (G_OBJECT (bt4), "clicked",
   G_CALLBACK (add4), (gpointer) NULL);

   g_signal_connect (G_OBJECT (bt5), "clicked",
   G_CALLBACK (add5), (gpointer) NULL);

   g_signal_connect (G_OBJECT (bt6), "clicked",
   G_CALLBACK (add6), (gpointer) NULL);


   g_signal_connect (G_OBJECT (bt7), "clicked",
   G_CALLBACK (add7), (gpointer) NULL);

   g_signal_connect (G_OBJECT (bt8), "clicked",
   G_CALLBACK (add8), (gpointer) NULL);

   g_signal_connect (G_OBJECT (bt9), "clicked",
   G_CALLBACK (add9), (gpointer) NULL);



      g_signal_connect (G_OBJECT (Som), "clicked",
   G_CALLBACK (somSinal), (gpointer) NULL);

      g_signal_connect (G_OBJECT (Sub), "clicked",
   G_CALLBACK (subSinal), (gpointer) NULL);

      g_signal_connect (G_OBJECT (Div), "clicked",
   G_CALLBACK (divSinal), (gpointer) NULL);

      g_signal_connect (G_OBJECT (Mul), "clicked",
   G_CALLBACK (mulSinal), (gpointer) NULL);



   g_signal_connect (G_OBJECT (Ponto), "clicked",
   G_CALLBACK (addPoint), (gpointer) "button pont");


      g_signal_connect (G_OBJECT (Inverter), "clicked",
   G_CALLBACK (inverter), (gpointer) NULL);

      g_signal_connect (G_OBJECT (Igual), "clicked",
   G_CALLBACK (igual), (gpointer) NULL);

   g_signal_connect (G_OBJECT (Limpar), "clicked",
   G_CALLBACK (limpar), (gpointer) NULL);

   g_signal_connect (G_OBJECT (Pot), "clicked",
   G_CALLBACK (Potencia), (gpointer) NULL);


  gtk_widget_show_all(window);
  gtk_main();

  return 0;
}
