


// TRAIN TICKET MANAGMENT SYSTEM PROJECT
// MODIFIED CODE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>














Add_info_bonolota_dr()
{

    FILE *fptrs;
    int tnumber;
    char stime[5],dtime[5];

    char start[50], tname[50],tname1[50],dstation [50],offday[20];
    char ROUTE[20],ROUTE1[20],ROUTE2[20],ROUTE3[20],ROUTE4[20],ROUTE5[20],ROUTE6[20];
    char ROUTE7[20],ROUTE8[20],ROUTE9[20];

    fptrs = fopen("bonolota_dr.txt", "w+");/*  open for writing */
    if (fptrs == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

    printf("\n\n\n\t\t\t                                                       [  ADD INFO  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                           ENTER TRAIN NO. : ");
    scanf("%d", &tnumber);
    fprintf(fptrs, "\n\n\tTRAIN_NO._:_%d", tnumber);

    printf("\n                            >>                                           ENTER THE TRAIN NAME: ");
    scanf("%s",tname);
    scanf("%s",tname1);
    fprintf(fptrs, "\n\tTRAIN_NAME_:_%s_%s", tname,tname1);


    printf("\n                            >>                                           ENTER THE START STATION : ");
    scanf("%s",start);
    fprintf(fptrs, "\n\n\tSTART_STATION_:_%s",start);

    printf("\n                            >>                                           ENTER THE START TIME: ");
    scanf("%s",stime);
    fprintf(fptrs, "\n\tSTART_TIME_:_%s",stime);

    printf("\n                            >>                                           ENTER THE DESTINATION STATION : ");
    scanf("%s",dstation );
    fprintf(fptrs, "\n\tDESTINATION_SATTION_:_%s ",dstation);

    printf("\n                            >>                                           ENTER THE DESTINATION TIME : ");
    scanf("%s",dtime );
    fprintf(fptrs, "\n\tDESTINATION_TIME_:_%s\n",dtime);

     printf("\n                            >>                                           OFFDAY : ");
    scanf("%s",offday);
    fprintf(fptrs, "\n\t OFFDAY_:_%s ", offday);
    printf("\n                            >>                                                                                                   ");

    printf("\n\n                            >>                                           TRAIN ROUTE : 1. ");
    scanf("%s",ROUTE );
    printf("\n                            >>                                                         2. ");
    scanf("%s",ROUTE1 );
    printf("\n                            >>                                                         3. ");
    scanf("%s",ROUTE2 );
    printf("\n                            >>                                                         4. ");
    scanf("%s",ROUTE3 );
    printf("\n                            >>                                                         5. ");
    scanf("%s",ROUTE4 );
    printf("\n                            >>                                                         6. ");
    scanf("%s",ROUTE5 );
    printf("\n                            >>                                                         7. ");
    scanf("%s",ROUTE6 );
    printf("\n                            >>                                                         8. ");
    scanf("%s",ROUTE7 );
    printf("\n                            >>                                                         9. ");
    scanf("%s",ROUTE8 );
    printf("\n                            >>                                                         10. ");
    scanf("%s",ROUTE9 );

    fprintf(fptrs, "\n\n\n\tTRAIN_ROUTE_: 1.%s\n\t2.%s\n\t3.%s\n\t4.%s\n\t5.%s\n\t6.%s\n\t7.%s\n\t8.%s\n\t9.%s\n\t10.%s\n",
            ROUTE,ROUTE1,ROUTE2,ROUTE3,ROUTE4,ROUTE5,ROUTE6,ROUTE7,ROUTE8,ROUTE9);
            system("cls");


    fclose(fptrs);

    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("bonolota_dr.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   ADDED DATA OF BANALATA EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

    fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");

   //addtrain();


  //  fclose(fp2);
}


int show_list_bonolota_dr() //schedule show list
{
    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("bonolota_dr.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   THE SCHEDULE OF BANALATA EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

     fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");
    //showtrain();

}




Add_info_bonolota_rd()
{

    FILE *fptrs;
    int tnumber;
    char stime[5],dtime[5];

    char start[50], tname[50],tname1[50],dstation [50],offday[20];
    char ROUTE[20],ROUTE1[20],ROUTE2[20],ROUTE3[20],ROUTE4[20],ROUTE5[20],ROUTE6[20];
    char ROUTE7[20],ROUTE8[20],ROUTE9[20];

    fptrs = fopen("bonolota_rd.txt", "w+");/*  open for writing */
    if (fptrs == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

    printf("\n\n\n\t\t\t                                                       [  ADD INFO  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                           ENTER TRAIN NO. : ");
    scanf("%d", &tnumber);
    fprintf(fptrs, "\n\n\tTRAIN_NO._:_%d", tnumber);

    printf("\n                            >>                                           ENTER THE TRAIN NAME: ");
    scanf("%s",tname);
    scanf("%s",tname1);
    fprintf(fptrs, "\n\tTRAIN_NAME_:_%s_%s", tname,tname1);


    printf("\n                            >>                                           ENTER THE START STATION : ");
    scanf("%s",start);
    fprintf(fptrs, "\n\n\tSTART_STATION_:_%s",start);

    printf("\n                            >>                                           ENTER THE START TIME: ");
    scanf("%s",stime);
    fprintf(fptrs, "\n\tSTART_TIME_:_%s",stime);

    printf("\n                            >>                                           ENTER THE DESTINATION STATION : ");
    scanf("%s",dstation );
    fprintf(fptrs, "\n\tDESTINATION_SATTION_:_%s ",dstation);

    printf("\n                            >>                                           ENTER THE DESTINATION TIME : ");
    scanf("%s",dtime );
    fprintf(fptrs, "\n\tDESTINATION_TIME_:_%s\n",dtime);

     printf("\n                            >>                                           OFFDAY : ");
    scanf("%s",offday);
    fprintf(fptrs, "\n\t OFFDAY_:_%s ", offday);
    printf("\n                            >>                                                                                                   ");

    printf("\n\n                            >>                                           TRAIN ROUTE : 1. ");
    scanf("%s",ROUTE );
    printf("\n                            >>                                                         2. ");
    scanf("%s",ROUTE1 );
    printf("\n                            >>                                                         3. ");
    scanf("%s",ROUTE2 );
    printf("\n                            >>                                                         4. ");
    scanf("%s",ROUTE3 );
    printf("\n                            >>                                                         5. ");
    scanf("%s",ROUTE4 );
    printf("\n                            >>                                                         6. ");
    scanf("%s",ROUTE5 );
    printf("\n                            >>                                                         7. ");
    scanf("%s",ROUTE6 );
    printf("\n                            >>                                                         8. ");
    scanf("%s",ROUTE7 );
    printf("\n                            >>                                                         9. ");
    scanf("%s",ROUTE8 );
    printf("\n                            >>                                                         10. ");
    scanf("%s",ROUTE9 );

    fprintf(fptrs, "\n\n\n\tTRAIN_ROUTE_: 1.%s\n\t2.%s\n\t3.%s\n\t4.%s\n\t5.%s\n\t6.%s\n\t7.%s\n\t8.%s\n\t9.%s\n\t10.%s\n",
            ROUTE,ROUTE1,ROUTE2,ROUTE3,ROUTE4,ROUTE5,ROUTE6,ROUTE7,ROUTE8,ROUTE9);
            system("cls");


    fclose(fptrs);

    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("bonolota_rd.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   ADDED DATA OF BANALATA EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

    fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");

   //addtrain();


  //  fclose(fp2);
}


int show_list_bonolota_rd() //schedule show list
{
    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("bonolota_rd.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   THE SCHEDULE OF BANALATA EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

     fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");
    //showtrain();

}











Add_info_dhumketu_dr()
{

    FILE *fptrs;
    int tnumber;
    char stime[5],dtime[5];

    char start[50], tname[50],tname1[50],dstation [50],offday[20];
    char ROUTE[20],ROUTE1[20],ROUTE2[20],ROUTE3[20],ROUTE4[20],ROUTE5[20],ROUTE6[20];
    char ROUTE7[20],ROUTE8[20],ROUTE9[20];

    fptrs = fopen("dhumketu_dr.txt", "w+");/*  open for writing */
    if (fptrs == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

    printf("\n\n\n\t\t\t                                                       [  ADD INFO  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                           ENTER TRAIN NO. : ");
    scanf("%d", &tnumber);
    fprintf(fptrs, "\n\n\tTRAIN_NO._:_%d", tnumber);

    printf("\n                            >>                                           ENTER THE TRAIN NAME: ");
    scanf("%s",tname);
    scanf("%s",tname1);
    fprintf(fptrs, "\n\tTRAIN_NAME_:_%s_%s", tname,tname1);


    printf("\n                            >>                                           ENTER THE START STATION : ");
    scanf("%s",start);
    fprintf(fptrs, "\n\n\tSTART_STATION_:_%s",start);

    printf("\n                            >>                                           ENTER THE START TIME: ");
    scanf("%s",stime);
    fprintf(fptrs, "\n\tSTART_TIME_:_%s",stime);

    printf("\n                            >>                                           ENTER THE DESTINATION STATION : ");
    scanf("%s",dstation );
    fprintf(fptrs, "\n\tDESTINATION_SATTION_:_%s ",dstation);

    printf("\n                            >>                                           ENTER THE DESTINATION TIME : ");
    scanf("%s",dtime );
    fprintf(fptrs, "\n\tDESTINATION_TIME_:_%s\n",dtime);

     printf("\n                            >>                                           OFFDAY : ");
    scanf("%s",offday);
    fprintf(fptrs, "\n\t OFFDAY_:_%s ", offday);
    printf("\n                            >>                                                                                                   ");

    printf("\n\n                            >>                                           TRAIN ROUTE : 1. ");
    scanf("%s",ROUTE );
    printf("\n                            >>                                                         2. ");
    scanf("%s",ROUTE1 );
    printf("\n                            >>                                                         3. ");
    scanf("%s",ROUTE2 );
    printf("\n                            >>                                                         4. ");
    scanf("%s",ROUTE3 );
    printf("\n                            >>                                                         5. ");
    scanf("%s",ROUTE4 );
    printf("\n                            >>                                                         6. ");
    scanf("%s",ROUTE5 );
    printf("\n                            >>                                                         7. ");
    scanf("%s",ROUTE6 );
    printf("\n                            >>                                                         8. ");
    scanf("%s",ROUTE7 );
    printf("\n                            >>                                                         9. ");
    scanf("%s",ROUTE8 );
    printf("\n                            >>                                                         10. ");
    scanf("%s",ROUTE9 );

    fprintf(fptrs, "\n\n\n\tTRAIN_ROUTE_: 1.%s\n\t2.%s\n\t3.%s\n\t4.%s\n\t5.%s\n\t6.%s\n\t7.%s\n\t8.%s\n\t9.%s\n\t10.%s\n",
            ROUTE,ROUTE1,ROUTE2,ROUTE3,ROUTE4,ROUTE5,ROUTE6,ROUTE7,ROUTE8,ROUTE9);
            system("cls");


    fclose(fptrs);

    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("dhumketu_dr.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   ADDED DATA OF DUMKATU EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

    fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");

   //addtrain();


  //  fclose(fp2);
}


int show_list_dhumketu_dr() //schedule show list
{
    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("dhumketu_dr.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   THE SCHEDULE OF DUMKATU EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

     fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");
    //showtrain();

}




Add_info_dhumketu_rd()
{

    FILE *fptrs;
    int tnumber;
    char stime[5],dtime[5];

    char start[50], tname[50],tname1[50],dstation [50],offday[20];
    char ROUTE[20],ROUTE1[20],ROUTE2[20],ROUTE3[20],ROUTE4[20],ROUTE5[20],ROUTE6[20];
    char ROUTE7[20],ROUTE8[20],ROUTE9[20];

    fptrs = fopen("dhumketu_rd.txt", "w+");/*  open for writing */
    if (fptrs == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

    printf("\n\n\n\t\t\t                                                       [  ADD INFO  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                           ENTER TRAIN NO. : ");
    scanf("%d", &tnumber);
    fprintf(fptrs, "\n\n\tTRAIN_NO._:_%d", tnumber);

    printf("\n                            >>                                           ENTER THE TRAIN NAME: ");
    scanf("%s",tname);
    scanf("%s",tname1);
    fprintf(fptrs, "\n\tTRAIN_NAME_:_%s_%s", tname,tname1);


    printf("\n                            >>                                           ENTER THE START STATION : ");
    scanf("%s",start);
    fprintf(fptrs, "\n\n\tSTART_STATION_:_%s",start);

    printf("\n                            >>                                           ENTER THE START TIME: ");
    scanf("%s",stime);
    fprintf(fptrs, "\n\tSTART_TIME_:_%s",stime);

    printf("\n                            >>                                           ENTER THE DESTINATION STATION : ");
    scanf("%s",dstation );
    fprintf(fptrs, "\n\tDESTINATION_SATTION_:_%s ",dstation);

    printf("\n                            >>                                           ENTER THE DESTINATION TIME : ");
    scanf("%s",dtime );
    fprintf(fptrs, "\n\tDESTINATION_TIME_:_%s\n",dtime);

     printf("\n                            >>                                           OFFDAY : ");
    scanf("%s",offday);
    fprintf(fptrs, "\n\t OFFDAY_:_%s ", offday);
    printf("\n                            >>                                                                                                   ");

    printf("\n\n                            >>                                           TRAIN ROUTE : 1. ");
    scanf("%s",ROUTE );
    printf("\n                            >>                                                         2. ");
    scanf("%s",ROUTE1 );
    printf("\n                            >>                                                         3. ");
    scanf("%s",ROUTE2 );
    printf("\n                            >>                                                         4. ");
    scanf("%s",ROUTE3 );
    printf("\n                            >>                                                         5. ");
    scanf("%s",ROUTE4 );
    printf("\n                            >>                                                         6. ");
    scanf("%s",ROUTE5 );
    printf("\n                            >>                                                         7. ");
    scanf("%s",ROUTE6 );
    printf("\n                            >>                                                         8. ");
    scanf("%s",ROUTE7 );
    printf("\n                            >>                                                         9. ");
    scanf("%s",ROUTE8 );
    printf("\n                            >>                                                         10. ");
    scanf("%s",ROUTE9 );

    fprintf(fptrs, "\n\n\n\tTRAIN_ROUTE_: 1.%s\n\t2.%s\n\t3.%s\n\t4.%s\n\t5.%s\n\t6.%s\n\t7.%s\n\t8.%s\n\t9.%s\n\t10.%s\n",
            ROUTE,ROUTE1,ROUTE2,ROUTE3,ROUTE4,ROUTE5,ROUTE6,ROUTE7,ROUTE8,ROUTE9);
            system("cls");


    fclose(fptrs);

    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("dhumketu_rd.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   ADDED DATA OF DUMKATU EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

    fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");

   //addtrain();


  //  fclose(fp2);
}


int show_list_dhumketu_rd() //schedule show list
{
    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("dhumketu_rd.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   THE SCHEDULE OF DUMKATU EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

     fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");
    //showtrain();

}




Add_info_padmadr()
{

    FILE *fptrs;
    int tnumber;
    char stime[5],dtime[5];

    char start[50], tname[50],tname1[50],dstation [50],offday[20];
    char ROUTE[20],ROUTE1[20],ROUTE2[20],ROUTE3[20],ROUTE4[20],ROUTE5[20],ROUTE6[20];
    char ROUTE7[20],ROUTE8[20],ROUTE9[20];

    fptrs = fopen("padmadr.txt", "w+");/*  open for writing */
    if (fptrs == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

    printf("\n\n\n\t\t\t                                                       [  ADD INFO  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                           ENTER TRAIN NO. : ");
    scanf("%d", &tnumber);
    fprintf(fptrs, "\n\n\tTRAIN_NO._:_%d", tnumber);

    printf("\n                            >>                                           ENTER THE TRAIN NAME: ");
    scanf("%s",tname);
    scanf("%s",tname1);
    fprintf(fptrs, "\n\tTRAIN_NAME_:_%s_%s", tname,tname1);


    printf("\n                            >>                                           ENTER THE START STATION : ");
    scanf("%s",start);
    fprintf(fptrs, "\n\n\tSTART_STATION_:_%s",start);

    printf("\n                            >>                                           ENTER THE START TIME: ");
    scanf("%s",stime);
    fprintf(fptrs, "\n\tSTART_TIME_:_%s",stime);

    printf("\n                            >>                                           ENTER THE DESTINATION STATION : ");
    scanf("%s",dstation );
    fprintf(fptrs, "\n\tDESTINATION_SATTION_:_%s ",dstation);

    printf("\n                            >>                                           ENTER THE DESTINATION TIME : ");
    scanf("%s",dtime );
    fprintf(fptrs, "\n\tDESTINATION_TIME_:_%s\n",dtime);

     printf("\n                            >>                                           OFFDAY : ");
    scanf("%s",offday);
    fprintf(fptrs, "\n\t OFFDAY_:_%s ", offday);
    printf("\n                            >>                                                                                                   ");

    printf("\n\n                            >>                                           TRAIN ROUTE : 1. ");
    scanf("%s",ROUTE );
    printf("\n                            >>                                                         2. ");
    scanf("%s",ROUTE1 );
    printf("\n                            >>                                                         3. ");
    scanf("%s",ROUTE2 );
    printf("\n                            >>                                                         4. ");
    scanf("%s",ROUTE3 );
    printf("\n                            >>                                                         5. ");
    scanf("%s",ROUTE4 );
    printf("\n                            >>                                                         6. ");
    scanf("%s",ROUTE5 );
    printf("\n                            >>                                                         7. ");
    scanf("%s",ROUTE6 );
    printf("\n                            >>                                                         8. ");
    scanf("%s",ROUTE7 );
    printf("\n                            >>                                                         9. ");
    scanf("%s",ROUTE8 );
    printf("\n                            >>                                                         10. ");
    scanf("%s",ROUTE9 );

    fprintf(fptrs, "\n\n\n\tTRAIN_ROUTE_: 1.%s\n\t2.%s\n\t3.%s\n\t4.%s\n\t5.%s\n\t6.%s\n\t7.%s\n\t8.%s\n\t9.%s\n\t10.%s\n",
            ROUTE,ROUTE1,ROUTE2,ROUTE3,ROUTE4,ROUTE5,ROUTE6,ROUTE7,ROUTE8,ROUTE9);
            system("cls");


    fclose(fptrs);

    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("padmadr.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   ADDED DATA OF PADMA EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

    fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");

   //addtrain();


  //  fclose(fp2);
}


int show_list_padmadr() //schedule show list
{
    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("padmadr.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   THE SCHEDULE OF PADMA EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

     fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");
    //showtrain();

}




Add_info_padmard()
{

    FILE *fptrs;
    int tnumber;
    char stime[5],dtime[5];

    char start[50], tname[50],tname1[50],dstation [50],offday[20];
    char ROUTE[20],ROUTE1[20],ROUTE2[20],ROUTE3[20],ROUTE4[20],ROUTE5[20],ROUTE6[20];
    char ROUTE7[20],ROUTE8[20],ROUTE9[20];

    fptrs = fopen("padmard.txt", "w+");/*  open for writing */
    if (fptrs == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

    printf("\n\n\n\t\t\t                                                       [  ADD INFO  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                           ENTER TRAIN NO. : ");
    scanf("%d", &tnumber);
    fprintf(fptrs, "\n\n\tTRAIN_NO._:_%d", tnumber);

    printf("\n                            >>                                           ENTER THE TRAIN NAME: ");
    scanf("%s",tname);
    scanf("%s",tname1);
    fprintf(fptrs, "\n\tTRAIN_NAME_:_%s_%s", tname,tname1);


    printf("\n                            >>                                           ENTER THE START STATION : ");
    scanf("%s",start);
    fprintf(fptrs, "\n\n\tSTART_STATION_:_%s",start);

    printf("\n                            >>                                           ENTER THE START TIME: ");
    scanf("%s",stime);
    fprintf(fptrs, "\n\tSTART_TIME_:_%s",stime);

    printf("\n                            >>                                           ENTER THE DESTINATION STATION : ");
    scanf("%s",dstation );
    fprintf(fptrs, "\n\tDESTINATION_SATTION_:_%s ",dstation);

    printf("\n                            >>                                           ENTER THE DESTINATION TIME : ");
    scanf("%s",dtime );
    fprintf(fptrs, "\n\tDESTINATION_TIME_:_%s\n",dtime);

     printf("\n                            >>                                           OFFDAY : ");
    scanf("%s",offday);
    fprintf(fptrs, "\n\t OFFDAY_:_%s ", offday);
    printf("\n                            >>                                                                                                   ");

    printf("\n\n                            >>                                           TRAIN ROUTE : 1. ");
    scanf("%s",ROUTE );
    printf("\n                            >>                                                         2. ");
    scanf("%s",ROUTE1 );
    printf("\n                            >>                                                         3. ");
    scanf("%s",ROUTE2 );
    printf("\n                            >>                                                         4. ");
    scanf("%s",ROUTE3 );
    printf("\n                            >>                                                         5. ");
    scanf("%s",ROUTE4 );
    printf("\n                            >>                                                         6. ");
    scanf("%s",ROUTE5 );
    printf("\n                            >>                                                         7. ");
    scanf("%s",ROUTE6 );
    printf("\n                            >>                                                         8. ");
    scanf("%s",ROUTE7 );
    printf("\n                            >>                                                         9. ");
    scanf("%s",ROUTE8 );
    printf("\n                            >>                                                         10. ");
    scanf("%s",ROUTE9 );

    fprintf(fptrs, "\n\n\n\tTRAIN_ROUTE_: 1.%s\n\t2.%s\n\t3.%s\n\t4.%s\n\t5.%s\n\t6.%s\n\t7.%s\n\t8.%s\n\t9.%s\n\t10.%s\n",
            ROUTE,ROUTE1,ROUTE2,ROUTE3,ROUTE4,ROUTE5,ROUTE6,ROUTE7,ROUTE8,ROUTE9);
            system("cls");


    fclose(fptrs);

    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("padmard.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   ADDED DATA OF PADMA EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

    fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");

   //addtrain();


  //  fclose(fp2);
}


int show_list_padmard() //schedule show list
{
    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("padmard.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   THE SCHEDULE OF PADMA EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

     fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");
    //showtrain();

}




Add_info_silk2()
{

    FILE *fptrs;
    int tnumber;
    char stime[5],dtime[5];

    char start[50], tname[50],tname1[50],dstation [50],offday[20];
    char ROUTE[20],ROUTE1[20],ROUTE2[20],ROUTE3[20],ROUTE4[20],ROUTE5[20],ROUTE6[20];
    char ROUTE7[20],ROUTE8[20],ROUTE9[20];

    fptrs = fopen("silk2.txt", "w+");/*  open for writing */
    if (fptrs == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

    printf("\n\n\n\t\t\t                                                       [  ADD INFO  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                           ENTER TRAIN NO. : ");
    scanf("%d", &tnumber);
    fprintf(fptrs, "\n\n\tTRAIN_NO._:_%d", tnumber);

    printf("\n                            >>                                           ENTER THE TRAIN NAME: ");
    scanf("%s",tname);
    scanf("%s",tname1);
    fprintf(fptrs, "\n\tTRAIN_NAME_:_%s_%s", tname,tname1);


    printf("\n                            >>                                           ENTER THE START STATION : ");
    scanf("%s",start);
    fprintf(fptrs, "\n\n\tSTART_STATION_:_%s",start);

    printf("\n                            >>                                           ENTER THE START TIME: ");
    scanf("%s",stime);
    fprintf(fptrs, "\n\tSTART_TIME_:_%s",stime);

    printf("\n                            >>                                           ENTER THE DESTINATION STATION : ");
    scanf("%s",dstation );
    fprintf(fptrs, "\n\tDESTINATION_SATTION_:_%s ",dstation);

    printf("\n                            >>                                           ENTER THE DESTINATION TIME : ");
    scanf("%s",dtime );
    fprintf(fptrs, "\n\tDESTINATION_TIME_:_%s\n",dtime);

     printf("\n                            >>                                           OFFDAY : ");
    scanf("%s",offday);
    fprintf(fptrs, "\n\t OFFDAY_:_%s ", offday);
    printf("\n                            >>                                                                                                   ");

    printf("\n\n                            >>                                           TRAIN ROUTE : 1. ");
    scanf("%s",ROUTE );
    printf("\n                            >>                                                         2. ");
    scanf("%s",ROUTE1 );
    printf("\n                            >>                                                         3. ");
    scanf("%s",ROUTE2 );
    printf("\n                            >>                                                         4. ");
    scanf("%s",ROUTE3 );
    printf("\n                            >>                                                         5. ");
    scanf("%s",ROUTE4 );
    printf("\n                            >>                                                         6. ");
    scanf("%s",ROUTE5 );
    printf("\n                            >>                                                         7. ");
    scanf("%s",ROUTE6 );
    printf("\n                            >>                                                         8. ");
    scanf("%s",ROUTE7 );
    printf("\n                            >>                                                         9. ");
    scanf("%s",ROUTE8 );
    printf("\n                            >>                                                         10. ");
    scanf("%s",ROUTE9 );

    fprintf(fptrs, "\n\n\n\tTRAIN_ROUTE_: 1.%s\n\t2.%s\n\t3.%s\n\t4.%s\n\t5.%s\n\t6.%s\n\t7.%s\n\t8.%s\n\t9.%s\n\t10.%s\n",
            ROUTE,ROUTE1,ROUTE2,ROUTE3,ROUTE4,ROUTE5,ROUTE6,ROUTE7,ROUTE8,ROUTE9);
            system("cls");


    fclose(fptrs);

    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("silk2.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   ADDED DATA OF SILKCITY EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

    fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");

   //addtrain();


  //  fclose(fp2);
}


int show_list_silk2() //schedule show list
{
    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("silk2.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   THE SCHEDULE OF SILKCITY EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

     fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");
    //showtrain();

}





Add_info_silk()
{

    FILE *fptrs;
    int tnumber;
    char stime[5],dtime[5];

    char start[50], tname[50],tname1[50],dstation [50],offday[20];
    char ROUTE[20],ROUTE1[20],ROUTE2[20],ROUTE3[20],ROUTE4[20],ROUTE5[20],ROUTE6[20];
    char ROUTE7[20],ROUTE8[20],ROUTE9[20];

    fptrs = fopen("silk.txt", "w+");/*  open for writing */
    if (fptrs == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

    printf("\n\n\n\t\t\t                                                       [  ADD INFO  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                           ENTER TRAIN NO. : ");
    scanf("%d", &tnumber);
    fprintf(fptrs, "\n\n\tTRAIN_NO._:_%d", tnumber);

    printf("\n                            >>                                           ENTER THE TRAIN NAME: ");
    scanf("%s",tname);
    scanf("%s",tname1);
    fprintf(fptrs, "\n\tTRAIN_NAME_:_%s_%s", tname,tname1);


    printf("\n                            >>                                           ENTER THE START STATION : ");
    scanf("%s",start);
    fprintf(fptrs, "\n\n\tSTART_STATION_:_%s",start);

    printf("\n                            >>                                           ENTER THE START TIME: ");
    scanf("%s",stime);
    fprintf(fptrs, "\n\tSTART_TIME_:_%s",stime);

    printf("\n                            >>                                           ENTER THE DESTINATION STATION : ");
    scanf("%s",dstation );
    fprintf(fptrs, "\n\tDESTINATION_SATTION_:_%s ",dstation);

    printf("\n                            >>                                           ENTER THE DESTINATION TIME : ");
    scanf("%s",dtime );
    fprintf(fptrs, "\n\tDESTINATION_TIME_:_%s\n",dtime);

     printf("\n                            >>                                           OFFDAY : ");
    scanf("%s",offday);
    fprintf(fptrs, "\n\t OFFDAY_:_%s ", offday);
    printf("\n                            >>                                                                                                   ");

    printf("\n\n                            >>                                           TRAIN ROUTE : 1. ");
    scanf("%s",ROUTE );
    printf("\n                            >>                                                         2. ");
    scanf("%s",ROUTE1 );
    printf("\n                            >>                                                         3. ");
    scanf("%s",ROUTE2 );
    printf("\n                            >>                                                         4. ");
    scanf("%s",ROUTE3 );
    printf("\n                            >>                                                         5. ");
    scanf("%s",ROUTE4 );
    printf("\n                            >>                                                         6. ");
    scanf("%s",ROUTE5 );
    printf("\n                            >>                                                         7. ");
    scanf("%s",ROUTE6 );
    printf("\n                            >>                                                         8. ");
    scanf("%s",ROUTE7 );
    printf("\n                            >>                                                         9. ");
    scanf("%s",ROUTE8 );
    printf("\n                            >>                                                         10. ");
    scanf("%s",ROUTE9 );

    fprintf(fptrs, "\n\n\n\tTRAIN_ROUTE_: 1.%s\n\t2.%s\n\t3.%s\n\t4.%s\n\t5.%s\n\t6.%s\n\t7.%s\n\t8.%s\n\t9.%s\n\t10.%s\n",
            ROUTE,ROUTE1,ROUTE2,ROUTE3,ROUTE4,ROUTE5,ROUTE6,ROUTE7,ROUTE8,ROUTE9);
            system("cls");


    fclose(fptrs);

    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("silk.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   ADDED DATA OF SILKCITY EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

    fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");

   //addtrain();


  //  fclose(fp2);
}


int show_list_silk() //schedule show list
{
    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("silk.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   THE SCHEDULE OF SILKCITY EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

     fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");
    //showtrain();

}




Add_info_shimanto2()
{

    FILE *fptrs;
    int tnumber;
    char stime[5],dtime[5];

    char start[50], tname[50],tname1[50],dstation [50],offday[20];
    char ROUTE[20],ROUTE1[20],ROUTE2[20],ROUTE3[20],ROUTE4[20],ROUTE5[20],ROUTE6[20];
    char ROUTE7[20],ROUTE8[20],ROUTE9[20];

    fptrs = fopen("shimanto2.txt", "w+");/*  open for writing */
    if (fptrs == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

    printf("\n\n\n\t\t\t                                                       [  ADD INFO  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                           ENTER TRAIN NO. : ");
    scanf("%d", &tnumber);
    fprintf(fptrs, "\n\n\tTRAIN_NO._:_%d", tnumber);

    printf("\n                            >>                                           ENTER THE TRAIN NAME: ");
    scanf("%s",tname);
    scanf("%s",tname1);
    fprintf(fptrs, "\n\tTRAIN_NAME_:_%s_%s", tname,tname1);


    printf("\n                            >>                                           ENTER THE START STATION : ");
    scanf("%s",start);
    fprintf(fptrs, "\n\n\tSTART_STATION_:_%s",start);

    printf("\n                            >>                                           ENTER THE START TIME: ");
    scanf("%s",stime);
    fprintf(fptrs, "\n\tSTART_TIME_:_%s",stime);

    printf("\n                            >>                                           ENTER THE DESTINATION STATION : ");
    scanf("%s",dstation );
    fprintf(fptrs, "\n\tDESTINATION_SATTION_:_%s ",dstation);

    printf("\n                            >>                                           ENTER THE DESTINATION TIME : ");
    scanf("%s",dtime );
    fprintf(fptrs, "\n\tDESTINATION_TIME_:_%s\n",dtime);

     printf("\n                            >>                                           OFFDAY : ");
    scanf("%s",offday);
    fprintf(fptrs, "\n\t OFFDAY_:_%s ", offday);
    printf("\n                            >>                                                                                                   ");

    printf("\n\n                            >>                                           TRAIN ROUTE : 1. ");
    scanf("%s",ROUTE );
    printf("\n                            >>                                                         2. ");
    scanf("%s",ROUTE1 );
    printf("\n                            >>                                                         3. ");
    scanf("%s",ROUTE2 );
    printf("\n                            >>                                                         4. ");
    scanf("%s",ROUTE3 );
    printf("\n                            >>                                                         5. ");
    scanf("%s",ROUTE4 );
    printf("\n                            >>                                                         6. ");
    scanf("%s",ROUTE5 );
    printf("\n                            >>                                                         7. ");
    scanf("%s",ROUTE6 );
    printf("\n                            >>                                                         8. ");
    scanf("%s",ROUTE7 );
    printf("\n                            >>                                                         9. ");
    scanf("%s",ROUTE8 );
    printf("\n                            >>                                                         10. ");
    scanf("%s",ROUTE9 );

    fprintf(fptrs, "\n\n\n\tTRAIN_ROUTE_: 1.%s\n\t2.%s\n\t3.%s\n\t4.%s\n\t5.%s\n\t6.%s\n\t7.%s\n\t8.%s\n\t9.%s\n\t10.%s\n",
            ROUTE,ROUTE1,ROUTE2,ROUTE3,ROUTE4,ROUTE5,ROUTE6,ROUTE7,ROUTE8,ROUTE9);
            system("cls");


    fclose(fptrs);

    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("shimanto2.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   ADDED DATA OF SHIMANTA EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

    fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");

   //addtrain();


  //  fclose(fp2);
}


int show_list_shimanto2() //schedule show list
{
    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("shimanto2.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   THE SCHEDULE OF SHIMANTA EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

     fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");
    //showtrain();

}



Add_info_shimanto()
{

    FILE *fptrs;
    int tnumber;
    char stime[5],dtime[5];

    char start[50], tname[50],tname1[50],dstation [50],offday[20];
    char ROUTE[20],ROUTE1[20],ROUTE2[20],ROUTE3[20],ROUTE4[20],ROUTE5[20],ROUTE6[20];
    char ROUTE7[20],ROUTE8[20],ROUTE9[20];

    fptrs = fopen("shimanto.txt", "w+");/*  open for writing */
    if (fptrs == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

    printf("\n\n\n\t\t\t                                                       [  ADD INFO  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                           ENTER TRAIN NO. : ");
    scanf("%d", &tnumber);
    fprintf(fptrs, "\n\n\tTRAIN_NO._:_%d", tnumber);

    printf("\n                            >>                                           ENTER THE TRAIN NAME: ");
    scanf("%s",tname);
    scanf("%s",tname1);
    fprintf(fptrs, "\n\tTRAIN_NAME_:_%s_%s", tname,tname1);


    printf("\n                            >>                                           ENTER THE START STATION : ");
    scanf("%s",start);
    fprintf(fptrs, "\n\n\tSTART_STATION_:_%s",start);

    printf("\n                            >>                                           ENTER THE START TIME: ");
    scanf("%s",stime);
    fprintf(fptrs, "\n\tSTART_TIME_:_%s",stime);

    printf("\n                            >>                                           ENTER THE DESTINATION STATION : ");
    scanf("%s",dstation );
    fprintf(fptrs, "\n\tDESTINATION_SATTION_:_%s ",dstation);

    printf("\n                            >>                                           ENTER THE DESTINATION TIME : ");
    scanf("%s",dtime );
    fprintf(fptrs, "\n\tDESTINATION_TIME_:_%s\n",dtime);

     printf("\n                            >>                                           OFFDAY : ");
    scanf("%s",offday);
    fprintf(fptrs, "\n\t OFFDAY_:_%s ", offday);
    printf("\n                            >>                                                                                                   ");

    printf("\n\n                            >>                                           TRAIN ROUTE : 1. ");
    scanf("%s",ROUTE );
    printf("\n                            >>                                                         2. ");
    scanf("%s",ROUTE1 );
    printf("\n                            >>                                                         3. ");
    scanf("%s",ROUTE2 );
    printf("\n                            >>                                                         4. ");
    scanf("%s",ROUTE3 );
    printf("\n                            >>                                                         5. ");
    scanf("%s",ROUTE4 );
    printf("\n                            >>                                                         6. ");
    scanf("%s",ROUTE5 );
    printf("\n                            >>                                                         7. ");
    scanf("%s",ROUTE6 );
    printf("\n                            >>                                                         8. ");
    scanf("%s",ROUTE7 );
    printf("\n                            >>                                                         9. ");
    scanf("%s",ROUTE8 );
    printf("\n                            >>                                                         10. ");
    scanf("%s",ROUTE9 );

    fprintf(fptrs, "\n\n\n\tTRAIN_ROUTE_: 1.%s\n\t2.%s\n\t3.%s\n\t4.%s\n\t5.%s\n\t6.%s\n\t7.%s\n\t8.%s\n\t9.%s\n\t10.%s\n",
            ROUTE,ROUTE1,ROUTE2,ROUTE3,ROUTE4,ROUTE5,ROUTE6,ROUTE7,ROUTE8,ROUTE9);
            system("cls");


    fclose(fptrs);

    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("shimanto.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   ADDED DATA OF SHIMANTA EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

    fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");

   //addtrain();


  //  fclose(fp2);
}


int show_list_shimanto() //schedule show list
{
    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("shimanto.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   THE SCHEDULE OF SHIMANTA EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

     fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");
    //showtrain();

}





Add_info_rupsha2()
{

    FILE *fptrs;
    int tnumber;
    char stime[5],dtime[5];

    char start[50], tname[50],tname1[50],dstation [50],offday[20];
    char ROUTE[20],ROUTE1[20],ROUTE2[20],ROUTE3[20],ROUTE4[20],ROUTE5[20],ROUTE6[20];
    char ROUTE7[20],ROUTE8[20],ROUTE9[20];

    fptrs = fopen("rupsha2.txt", "w+");/*  open for writing */
    if (fptrs == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

    printf("\n\n\n\t\t\t                                                       [  ADD INFO  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                           ENTER TRAIN NO. : ");
    scanf("%d", &tnumber);
    fprintf(fptrs, "\n\n\tTRAIN_NO._:_%d", tnumber);

    printf("\n                            >>                                           ENTER THE TRAIN NAME: ");
    scanf("%s",tname);
    scanf("%s",tname1);
    fprintf(fptrs, "\n\tTRAIN_NAME_:_%s_%s", tname,tname1);


    printf("\n                            >>                                           ENTER THE START STATION : ");
    scanf("%s",start);
    fprintf(fptrs, "\n\n\tSTART_STATION_:_%s",start);

    printf("\n                            >>                                           ENTER THE START TIME: ");
    scanf("%s",stime);
    fprintf(fptrs, "\n\tSTART_TIME_:_%s",stime);

    printf("\n                            >>                                           ENTER THE DESTINATION STATION : ");
    scanf("%s",dstation );
    fprintf(fptrs, "\n\tDESTINATION_SATTION_:_%s ",dstation);

    printf("\n                            >>                                           ENTER THE DESTINATION TIME : ");
    scanf("%s",dtime );
    fprintf(fptrs, "\n\tDESTINATION_TIME_:_%s\n",dtime);

     printf("\n                            >>                                           OFFDAY : ");
    scanf("%s",offday);
    fprintf(fptrs, "\n\t OFFDAY_:_%s ", offday);
    printf("\n                            >>                                                                                                   ");

    printf("\n\n                            >>                                           TRAIN ROUTE : 1. ");
    scanf("%s",ROUTE );
    printf("\n                            >>                                                         2. ");
    scanf("%s",ROUTE1 );
    printf("\n                            >>                                                         3. ");
    scanf("%s",ROUTE2 );
    printf("\n                            >>                                                         4. ");
    scanf("%s",ROUTE3 );
    printf("\n                            >>                                                         5. ");
    scanf("%s",ROUTE4 );
    printf("\n                            >>                                                         6. ");
    scanf("%s",ROUTE5 );
    printf("\n                            >>                                                         7. ");
    scanf("%s",ROUTE6 );
    printf("\n                            >>                                                         8. ");
    scanf("%s",ROUTE7 );
    printf("\n                            >>                                                         9. ");
    scanf("%s",ROUTE8 );
    printf("\n                            >>                                                         10. ");
    scanf("%s",ROUTE9 );

    fprintf(fptrs, "\n\n\n\tTRAIN_ROUTE_: 1.%s\n\t2.%s\n\t3.%s\n\t4.%s\n\t5.%s\n\t6.%s\n\t7.%s\n\t8.%s\n\t9.%s\n\t10.%s\n",
            ROUTE,ROUTE1,ROUTE2,ROUTE3,ROUTE4,ROUTE5,ROUTE6,ROUTE7,ROUTE8,ROUTE9);
            system("cls");


    fclose(fptrs);

    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("rupsha2.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   ADDED DATA OF RUPSHA EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

    fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");

   //addtrain();


  //  fclose(fp2);
}


int show_list_rupsha2() //schedule show list
{
    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("rupsha2.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   THE SCHEDULE OF RUPSHA EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

     fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");
    //showtrain();

}



Add_info_rupsha()
{

    FILE *fptrs;
    int tnumber;
    char stime[5],dtime[5];

    char start[50], tname[50],tname1[50],dstation [50],offday[20];
    char ROUTE[20],ROUTE1[20],ROUTE2[20],ROUTE3[20],ROUTE4[20],ROUTE5[20],ROUTE6[20];
    char ROUTE7[20],ROUTE8[20],ROUTE9[20];

    fptrs = fopen("rupsha.txt", "w+");/*  open for writing */
    if (fptrs == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

    printf("\n\n\n\t\t\t                                                       [  ADD INFO  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                           ENTER TRAIN NO. : ");
    scanf("%d", &tnumber);
    fprintf(fptrs, "\n\n\tTRAIN_NO._:_%d", tnumber);

    printf("\n                            >>                                           ENTER THE TRAIN NAME: ");
    scanf("%s",tname);
    scanf("%s",tname1);
    fprintf(fptrs, "\n\tTRAIN_NAME_:_%s_%s", tname,tname1);


    printf("\n                            >>                                           ENTER THE START STATION : ");
    scanf("%s",start);
    fprintf(fptrs, "\n\n\tSTART_STATION_:_%s",start);

    printf("\n                            >>                                           ENTER THE START TIME: ");
    scanf("%s",stime);
    fprintf(fptrs, "\n\tSTART_TIME_:_%s",stime);

    printf("\n                            >>                                           ENTER THE DESTINATION STATION : ");
    scanf("%s",dstation );
    fprintf(fptrs, "\n\tDESTINATION_SATTION_:_%s ",dstation);

    printf("\n                            >>                                           ENTER THE DESTINATION TIME : ");
    scanf("%s",dtime );
    fprintf(fptrs, "\n\tDESTINATION_TIME_:_%s\n",dtime);

     printf("\n                            >>                                           OFFDAY : ");
    scanf("%s",offday);
    fprintf(fptrs, "\n\t OFFDAY_:_%s ", offday);
    printf("\n                            >>                                                                                                   ");

    printf("\n\n                            >>                                           TRAIN ROUTE : 1. ");
    scanf("%s",ROUTE );
    printf("\n                            >>                                                         2. ");
    scanf("%s",ROUTE1 );
    printf("\n                            >>                                                         3. ");
    scanf("%s",ROUTE2 );
    printf("\n                            >>                                                         4. ");
    scanf("%s",ROUTE3 );
    printf("\n                            >>                                                         5. ");
    scanf("%s",ROUTE4 );
    printf("\n                            >>                                                         6. ");
    scanf("%s",ROUTE5 );
    printf("\n                            >>                                                         7. ");
    scanf("%s",ROUTE6 );
    printf("\n                            >>                                                         8. ");
    scanf("%s",ROUTE7 );
    printf("\n                            >>                                                         9. ");
    scanf("%s",ROUTE8 );
    printf("\n                            >>                                                         10. ");
    scanf("%s",ROUTE9 );

    fprintf(fptrs, "\n\n\n\tTRAIN_ROUTE_: 1.%s\n\t2.%s\n\t3.%s\n\t4.%s\n\t5.%s\n\t6.%s\n\t7.%s\n\t8.%s\n\t9.%s\n\t10.%s\n",
            ROUTE,ROUTE1,ROUTE2,ROUTE3,ROUTE4,ROUTE5,ROUTE6,ROUTE7,ROUTE8,ROUTE9);
            system("cls");


    fclose(fptrs);

    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("rupsha.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   ADDED DATA OF RUPSHA EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

    fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");

   //addtrain();


  //  fclose(fp2);
}


int show_list_rupsha() //schedule show list
{
    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("rupsha.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   THE SCHEDULE OF RUPSHA EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

     fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");
    //showtrain();

}




Add_info_shagor2()
{

    FILE *fptrs;
    int tnumber;
    char stime[5],dtime[5];

    char start[50], tname[50],tname1[50],dstation [50],offday[20];
    char ROUTE[20],ROUTE1[20],ROUTE2[20],ROUTE3[20],ROUTE4[20],ROUTE5[20],ROUTE6[20];
    char ROUTE7[20],ROUTE8[20],ROUTE9[20];

    fptrs = fopen("shagor2.txt", "w+");/*  open for writing */
    if (fptrs == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

    printf("\n\n\n\t\t\t                                                       [  ADD INFO  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                           ENTER TRAIN NO. : ");
    scanf("%d", &tnumber);
    fprintf(fptrs, "\n\n\tTRAIN_NO._:_%d", tnumber);

    printf("\n                            >>                                           ENTER THE TRAIN NAME: ");
    scanf("%s",tname);
    scanf("%s",tname1);
    fprintf(fptrs, "\n\tTRAIN_NAME_:_%s_%s", tname,tname1);


    printf("\n                            >>                                           ENTER THE START STATION : ");
    scanf("%s",start);
    fprintf(fptrs, "\n\n\tSTART_STATION_:_%s",start);

    printf("\n                            >>                                           ENTER THE START TIME: ");
    scanf("%s",stime);
    fprintf(fptrs, "\n\tSTART_TIME_:_%s",stime);

    printf("\n                            >>                                           ENTER THE DESTINATION STATION : ");
    scanf("%s",dstation );
    fprintf(fptrs, "\n\tDESTINATION_SATTION_:_%s ",dstation);

    printf("\n                            >>                                           ENTER THE DESTINATION TIME : ");
    scanf("%s",dtime );
    fprintf(fptrs, "\n\tDESTINATION_TIME_:_%s\n",dtime);

     printf("\n                            >>                                           OFFDAY : ");
    scanf("%s",offday);
    fprintf(fptrs, "\n\t OFFDAY_:_%s ", offday);
    printf("\n                            >>                                                                                                   ");

    printf("\n\n                            >>                                           TRAIN ROUTE : 1. ");
    scanf("%s",ROUTE );
    printf("\n                            >>                                                         2. ");
    scanf("%s",ROUTE1 );
    printf("\n                            >>                                                         3. ");
    scanf("%s",ROUTE2 );
    printf("\n                            >>                                                         4. ");
    scanf("%s",ROUTE3 );
    printf("\n                            >>                                                         5. ");
    scanf("%s",ROUTE4 );
    printf("\n                            >>                                                         6. ");
    scanf("%s",ROUTE5 );
    printf("\n                            >>                                                         7. ");
    scanf("%s",ROUTE6 );
    printf("\n                            >>                                                         8. ");
    scanf("%s",ROUTE7 );
    printf("\n                            >>                                                         9. ");
    scanf("%s",ROUTE8 );
    printf("\n                            >>                                                         10. ");
    scanf("%s",ROUTE9 );

    fprintf(fptrs, "\n\n\n\tTRAIN_ROUTE_: 1.%s\n\t2.%s\n\t3.%s\n\t4.%s\n\t5.%s\n\t6.%s\n\t7.%s\n\t8.%s\n\t9.%s\n\t10.%s\n",
            ROUTE,ROUTE1,ROUTE2,ROUTE3,ROUTE4,ROUTE5,ROUTE6,ROUTE7,ROUTE8,ROUTE9);
            system("cls");


    fclose(fptrs);

    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("shagor2.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   ADDED DATA OF SAGORDARI EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

    fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");

   //addtrain();


  //  fclose(fp2);
}


int show_list_shagor2() //schedule show list
{
    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("shagor2.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   THE SCHEDULE OF SAGORDARI EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

     fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");
    //showtrain();

}


Add_info_shagor()
{

    FILE *fptrs;
    int tnumber;
    char stime[5],dtime[5];

    char start[50], tname[50],tname1[50],dstation [50],offday[20];
    char ROUTE[20],ROUTE1[20],ROUTE2[20],ROUTE3[20],ROUTE4[20],ROUTE5[20],ROUTE6[20];
    char ROUTE7[20],ROUTE8[20],ROUTE9[20];

    fptrs = fopen("shagor.txt", "w+");/*  open for writing */
    if (fptrs == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

    printf("\n\n\n\t\t\t                                                       [  ADD INFO  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                           ENTER TRAIN NO. : ");
    scanf("%d", &tnumber);
    fprintf(fptrs, "\n\n\tTRAIN_NO._:_%d", tnumber);

    printf("\n                            >>                                           ENTER THE TRAIN NAME: ");
    scanf("%s",tname);
    scanf("%s",tname1);
    fprintf(fptrs, "\n\tTRAIN_NAME_:_%s_%s", tname,tname1);


    printf("\n                            >>                                           ENTER THE START STATION : ");
    scanf("%s",start);
    fprintf(fptrs, "\n\n\tSTART_STATION_:_%s",start);

    printf("\n                            >>                                           ENTER THE START TIME: ");
    scanf("%s",stime);
    fprintf(fptrs, "\n\tSTART_TIME_:_%s",stime);

    printf("\n                            >>                                           ENTER THE DESTINATION STATION : ");
    scanf("%s",dstation );
    fprintf(fptrs, "\n\tDESTINATION_SATTION_:_%s ",dstation);

    printf("\n                            >>                                           ENTER THE DESTINATION TIME : ");
    scanf("%s",dtime );
    fprintf(fptrs, "\n\tDESTINATION_TIME_:_%s\n",dtime);

     printf("\n                            >>                                           OFFDAY : ");
    scanf("%s",offday);
    fprintf(fptrs, "\n\t OFFDAY_:_%s ", offday);
    printf("\n                            >>                                                                                                   ");

    printf("\n\n                            >>                                           TRAIN ROUTE : 1. ");
    scanf("%s",ROUTE );
    printf("\n                            >>                                                         2. ");
    scanf("%s",ROUTE1 );
    printf("\n                            >>                                                         3. ");
    scanf("%s",ROUTE2 );
    printf("\n                            >>                                                         4. ");
    scanf("%s",ROUTE3 );
    printf("\n                            >>                                                         5. ");
    scanf("%s",ROUTE4 );
    printf("\n                            >>                                                         6. ");
    scanf("%s",ROUTE5 );
    printf("\n                            >>                                                         7. ");
    scanf("%s",ROUTE6 );
    printf("\n                            >>                                                         8. ");
    scanf("%s",ROUTE7 );
    printf("\n                            >>                                                         9. ");
    scanf("%s",ROUTE8 );
    printf("\n                            >>                                                         10. ");
    scanf("%s",ROUTE9 );

    fprintf(fptrs, "\n\n\n\tTRAIN_ROUTE_: 1.%s\n\t2.%s\n\t3.%s\n\t4.%s\n\t5.%s\n\t6.%s\n\t7.%s\n\t8.%s\n\t9.%s\n\t10.%s\n",
            ROUTE,ROUTE1,ROUTE2,ROUTE3,ROUTE4,ROUTE5,ROUTE6,ROUTE7,ROUTE8,ROUTE9);
            system("cls");


    fclose(fptrs);

    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("shagor.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   ADDED DATA OF SAGORDARI EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

    fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");

   //addtrain();


  //  fclose(fp2);
}


int show_list_shagor() //schedule show list
{
    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("shagor.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   THE SCHEDULE OF SAGORDARI EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

     fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");
    //showtrain();

}


Add_info_kapot2()
{

    FILE *fptrs;
    int tnumber;
    char stime[5],dtime[5];

    char start[50], tname[50],tname1[50],dstation [50],offday[20];
    char ROUTE[20],ROUTE1[20],ROUTE2[20],ROUTE3[20],ROUTE4[20],ROUTE5[20],ROUTE6[20];
    char ROUTE7[20],ROUTE8[20],ROUTE9[20];

    fptrs = fopen("kapot2.txt", "w+");/*  open for writing */
    if (fptrs == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

    printf("\n\n\n\t\t\t                                                       [  ADD INFO  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                           ENTER TRAIN NO. : ");
    scanf("%d", &tnumber);
    fprintf(fptrs, "\n\n\tTRAIN_NO._:_%d", tnumber);

    printf("\n                            >>                                           ENTER THE TRAIN NAME: ");
    scanf("%s",tname);
    scanf("%s",tname1);
    fprintf(fptrs, "\n\tTRAIN_NAME_:_%s_%s", tname,tname1);


    printf("\n                            >>                                           ENTER THE START STATION : ");
    scanf("%s",start);
    fprintf(fptrs, "\n\n\tSTART_STATION_:_%s",start);

    printf("\n                            >>                                           ENTER THE START TIME: ");
    scanf("%s",stime);
    fprintf(fptrs, "\n\tSTART_TIME_:_%s",stime);

    printf("\n                            >>                                           ENTER THE DESTINATION STATION : ");
    scanf("%s",dstation );
    fprintf(fptrs, "\n\tDESTINATION_SATTION_:_%s ",dstation);

    printf("\n                            >>                                           ENTER THE DESTINATION TIME : ");
    scanf("%s",dtime );
    fprintf(fptrs, "\n\tDESTINATION_TIME_:_%s\n",dtime);

     printf("\n                            >>                                           OFFDAY : ");
    scanf("%s",offday);
    fprintf(fptrs, "\n\t OFFDAY_:_%s ", offday);
    printf("\n                            >>                                                                                                   ");

    printf("\n\n                            >>                                           TRAIN ROUTE : 1. ");
    scanf("%s",ROUTE );
    printf("\n                            >>                                                         2. ");
    scanf("%s",ROUTE1 );
    printf("\n                            >>                                                         3. ");
    scanf("%s",ROUTE2 );
    printf("\n                            >>                                                         4. ");
    scanf("%s",ROUTE3 );
    printf("\n                            >>                                                         5. ");
    scanf("%s",ROUTE4 );
    printf("\n                            >>                                                         6. ");
    scanf("%s",ROUTE5 );
    printf("\n                            >>                                                         7. ");
    scanf("%s",ROUTE6 );
    printf("\n                            >>                                                         8. ");
    scanf("%s",ROUTE7 );
    printf("\n                            >>                                                         9. ");
    scanf("%s",ROUTE8 );
    printf("\n                            >>                                                         10. ");
    scanf("%s",ROUTE9 );

    fprintf(fptrs, "\n\n\n\tTRAIN_ROUTE_: 1.%s\n\t2.%s\n\t3.%s\n\t4.%s\n\t5.%s\n\t6.%s\n\t7.%s\n\t8.%s\n\t9.%s\n\t10.%s\n",
            ROUTE,ROUTE1,ROUTE2,ROUTE3,ROUTE4,ROUTE5,ROUTE6,ROUTE7,ROUTE8,ROUTE9);
            system("cls");


    fclose(fptrs);

    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("kapot2.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   ADDED DATA OF KAPOTAKHSHA EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

    fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");

   //addtrain();


  //  fclose(fp2);
}


int show_list_kapot2() //schedule show list
{
    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("kapot2.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   THE SCHEDULE OF KAPOTAKHSHA EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

     fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");
    //showtrain();

}


Add_info_kapot()
{

    FILE *fptrs;
    int tnumber;
    char stime[5],dtime[5];

    char start[50], tname[50],tname1[50],dstation [50],offday[20];
    char ROUTE[20],ROUTE1[20],ROUTE2[20],ROUTE3[20],ROUTE4[20],ROUTE5[20],ROUTE6[20];
    char ROUTE7[20],ROUTE8[20],ROUTE9[20];

    fptrs = fopen("kapot.txt", "w+");/*  open for writing */
    if (fptrs == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

    printf("\n\n\n\t\t\t                                                       [  ADD INFO  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                           ENTER TRAIN NO. : ");
    scanf("%d", &tnumber);
    fprintf(fptrs, "\n\n\tTRAIN_NO._:_%d", tnumber);

    printf("\n                            >>                                           ENTER THE TRAIN NAME: ");
    scanf("%s",tname);
    scanf("%s",tname1);
    fprintf(fptrs, "\n\tTRAIN_NAME_:_%s_%s", tname,tname1);


    printf("\n                            >>                                           ENTER THE START STATION : ");
    scanf("%s",start);
    fprintf(fptrs, "\n\n\tSTART_STATION_:_%s",start);

    printf("\n                            >>                                           ENTER THE START TIME: ");
    scanf("%s",stime);
    fprintf(fptrs, "\n\tSTART_TIME_:_%s",stime);

    printf("\n                            >>                                           ENTER THE DESTINATION STATION : ");
    scanf("%s",dstation );
    fprintf(fptrs, "\n\tDESTINATION_SATTION_:_%s ",dstation);

    printf("\n                            >>                                           ENTER THE DESTINATION TIME : ");
    scanf("%s",dtime );
    fprintf(fptrs, "\n\tDESTINATION_TIME_:_%s\n",dtime);

     printf("\n                            >>                                           OFFDAY : ");
    scanf("%s",offday);
    fprintf(fptrs, "\n\t OFFDAY_:_%s ", offday);
    printf("\n                            >>                                                                                                   ");

    printf("\n\n                            >>                                           TRAIN ROUTE : 1. ");
    scanf("%s",ROUTE );
    printf("\n                            >>                                                         2. ");
    scanf("%s",ROUTE1 );
    printf("\n                            >>                                                         3. ");
    scanf("%s",ROUTE2 );
    printf("\n                            >>                                                         4. ");
    scanf("%s",ROUTE3 );
    printf("\n                            >>                                                         5. ");
    scanf("%s",ROUTE4 );
    printf("\n                            >>                                                         6. ");
    scanf("%s",ROUTE5 );
    printf("\n                            >>                                                         7. ");
    scanf("%s",ROUTE6 );
    printf("\n                            >>                                                         8. ");
    scanf("%s",ROUTE7 );
    printf("\n                            >>                                                         9. ");
    scanf("%s",ROUTE8 );
    printf("\n                            >>                                                         10. ");
    scanf("%s",ROUTE9 );

    fprintf(fptrs, "\n\n\n\tTRAIN_ROUTE_: 1.%s\n\t2.%s\n\t3.%s\n\t4.%s\n\t5.%s\n\t6.%s\n\t7.%s\n\t8.%s\n\t9.%s\n\t10.%s\n",
            ROUTE,ROUTE1,ROUTE2,ROUTE3,ROUTE4,ROUTE5,ROUTE6,ROUTE7,ROUTE8,ROUTE9);
            system("cls");


    fclose(fptrs);

    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("kapot.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   ADDED DATA OF KAPOTAKHSHA EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

    fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");

   //addtrain();


  //  fclose(fp2);
}


int show_list_kapot() //schedule show list
{
    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("kapot.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   THE SCHEDULE OF KAPOTAKHSHA EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

     fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");
    //showtrain();

}



Add_info_citra2()
{

    FILE *fptrs;
    int tnumber;
    char stime[5],dtime[5];

    char start[50], tname[50],tname1[50],dstation [50],offday[20];
    char ROUTE[20],ROUTE1[20],ROUTE2[20],ROUTE3[20],ROUTE4[20],ROUTE5[20],ROUTE6[20];
    char ROUTE7[20],ROUTE8[20],ROUTE9[20];

    fptrs = fopen("citra2.txt", "w+");/*  open for writing */
    if (fptrs == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

    printf("\n\n\n\t\t\t                                                       [  ADD INFO  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                           ENTER TRAIN NO. : ");
    scanf("%d", &tnumber);
    fprintf(fptrs, "\n\n\tTRAIN_NO._:_%d", tnumber);

    printf("\n                            >>                                           ENTER THE TRAIN NAME: ");
    scanf("%s",tname);
    scanf("%s",tname1);
    fprintf(fptrs, "\n\tTRAIN_NAME_:_%s_%s", tname,tname1);


    printf("\n                            >>                                           ENTER THE START STATION : ");
    scanf("%s",start);
    fprintf(fptrs, "\n\n\tSTART_STATION_:_%s",start);

    printf("\n                            >>                                           ENTER THE START TIME: ");
    scanf("%s",stime);
    fprintf(fptrs, "\n\tSTART_TIME_:_%s",stime);

    printf("\n                            >>                                           ENTER THE DESTINATION STATION : ");
    scanf("%s",dstation );
    fprintf(fptrs, "\n\tDESTINATION_SATTION_:_%s ",dstation);

    printf("\n                            >>                                           ENTER THE DESTINATION TIME : ");
    scanf("%s",dtime );
    fprintf(fptrs, "\n\tDESTINATION_TIME_:_%s\n",dtime);

     printf("\n                            >>                                           OFFDAY : ");
    scanf("%s",offday);
    fprintf(fptrs, "\n\t OFFDAY_:_%s ", offday);
    printf("\n                            >>                                                                                                   ");

    printf("\n\n                            >>                                           TRAIN ROUTE : 1. ");
    scanf("%s",ROUTE );
    printf("\n                            >>                                                         2. ");
    scanf("%s",ROUTE1 );
    printf("\n                            >>                                                         3. ");
    scanf("%s",ROUTE2 );
    printf("\n                            >>                                                         4. ");
    scanf("%s",ROUTE3 );
    printf("\n                            >>                                                         5. ");
    scanf("%s",ROUTE4 );
    printf("\n                            >>                                                         6. ");
    scanf("%s",ROUTE5 );
    printf("\n                            >>                                                         7. ");
    scanf("%s",ROUTE6 );
    printf("\n                            >>                                                         8. ");
    scanf("%s",ROUTE7 );
    printf("\n                            >>                                                         9. ");
    scanf("%s",ROUTE8 );
    printf("\n                            >>                                                         10. ");
    scanf("%s",ROUTE9 );

    fprintf(fptrs, "\n\n\n\tTRAIN_ROUTE_: 1.%s\n\t2.%s\n\t3.%s\n\t4.%s\n\t5.%s\n\t6.%s\n\t7.%s\n\t8.%s\n\t9.%s\n\t10.%s\n",
            ROUTE,ROUTE1,ROUTE2,ROUTE3,ROUTE4,ROUTE5,ROUTE6,ROUTE7,ROUTE8,ROUTE9);
            system("cls");


    fclose(fptrs);

    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("citra2.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   ADDED DATA OF CHITRA EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

    fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");

   //addtrain();


  //  fclose(fp2);
}


int show_list_citra2() //schedule show list
{
    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("citra2.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   THE SCHEDULE OF CHITRA EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

     fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");
    //showtrain();

}

Add_info_citra()
{

    FILE *fptrs;
    int tnumber;
    char stime[5],dtime[5];

    char start[50], tname[50],tname1[50],dstation [50],offday[20];
    char ROUTE[20],ROUTE1[20],ROUTE2[20],ROUTE3[20],ROUTE4[20],ROUTE5[20],ROUTE6[20];
    char ROUTE7[20],ROUTE8[20],ROUTE9[20];

    fptrs = fopen("citra.txt", "w+");/*  open for writing */
    if (fptrs == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

    printf("\n\n\n\t\t\t                                                       [  ADD INFO  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                           ENTER TRAIN NO. : ");
    scanf("%d", &tnumber);
    fprintf(fptrs, "\n\n\tTRAIN_NO._:_%d", tnumber);

    printf("\n                            >>                                           ENTER THE TRAIN NAME: ");
    scanf("%s",tname);
    scanf("%s",tname1);
    fprintf(fptrs, "\n\tTRAIN_NAME_:_%s_%s", tname,tname1);


    printf("\n                            >>                                           ENTER THE START STATION : ");
    scanf("%s",start);
    fprintf(fptrs, "\n\n\tSTART_STATION_:_%s",start);

    printf("\n                            >>                                           ENTER THE START TIME: ");
    scanf("%s",stime);
    fprintf(fptrs, "\n\tSTART_TIME_:_%s",stime);

    printf("\n                            >>                                           ENTER THE DESTINATION STATION : ");
    scanf("%s",dstation );
    fprintf(fptrs, "\n\tDESTINATION_SATTION_:_%s ",dstation);

    printf("\n                            >>                                           ENTER THE DESTINATION TIME : ");
    scanf("%s",dtime );
    fprintf(fptrs, "\n\tDESTINATION_TIME_:_%s\n",dtime);

     printf("\n                            >>                                           OFFDAY : ");
    scanf("%s",offday);
    fprintf(fptrs, "\n\t OFFDAY_:_%s ", offday);
    printf("\n                            >>                                                                                                   ");

    printf("\n\n                            >>                                           TRAIN ROUTE : 1. ");
    scanf("%s",ROUTE );
    printf("\n                            >>                                                         2. ");
    scanf("%s",ROUTE1 );
    printf("\n                            >>                                                         3. ");
    scanf("%s",ROUTE2 );
    printf("\n                            >>                                                         4. ");
    scanf("%s",ROUTE3 );
    printf("\n                            >>                                                         5. ");
    scanf("%s",ROUTE4 );
    printf("\n                            >>                                                         6. ");
    scanf("%s",ROUTE5 );
    printf("\n                            >>                                                         7. ");
    scanf("%s",ROUTE6 );
    printf("\n                            >>                                                         8. ");
    scanf("%s",ROUTE7 );
    printf("\n                            >>                                                         9. ");
    scanf("%s",ROUTE8 );
    printf("\n                            >>                                                         10. ");
    scanf("%s",ROUTE9 );

    fprintf(fptrs, "\n\n\n\tTRAIN_ROUTE_: 1.%s\n\t2.%s\n\t3.%s\n\t4.%s\n\t5.%s\n\t6.%s\n\t7.%s\n\t8.%s\n\t9.%s\n\t10.%s\n",
            ROUTE,ROUTE1,ROUTE2,ROUTE3,ROUTE4,ROUTE5,ROUTE6,ROUTE7,ROUTE8,ROUTE9);
            system("cls");


    fclose(fptrs);

    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("citra.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   ADDED DATA OF CHITRA EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

    fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");

   //addtrain();


  //  fclose(fp2);
}


int show_list_citra() //schedule show list
{
    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("citra.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   THE SCHEDULE OF CHITRA EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

     fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");
    //showtrain();

}







addtrain()

{



     printf("\n\n\n\t\t\t                                                     [ TRAIN SCHEDULE ]                                \n\n");
    printf("HOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOME");
    printf("\n\n\n\n");


    printf("                                                       :::::::::      SELECT TRAIN NAME TO ADD INFO      :::::::::                                            \n\n\n");
    train_names();

    int ch;
     printf("\n\n\t\t  \n");
    printf("\t\t\t\t\t                        CHOOSE YOUR OPTION                                     \n");
    printf("\t\t\t\t\t                        --------------------------- ");
    scanf("%d", &ch);
    system("cls");
    switch(ch)
    {
    case 0:
        system("cls");
      train_Schedule();
      break;
    case 1:

      Add_info_shundarban();
      addtrain();

    case 2:
       Add_info_shundarban2();
      addtrain();
    case 3:
       Add_info_citra();
       addtrain();
    case 4:
        Add_info_citra2();
       addtrain();
    case 5:
       Add_info_benapol();
       addtrain();
    case 6:
       Add_info_benapol2();
       addtrain();
    case 7:
       Add_info_kapot();
       addtrain();
    case 8:
       Add_info_kapot2();
       addtrain();
    case 9:
      Add_info_shagor();
       addtrain();
    case 10:
     Add_info_shagor2();
       addtrain();


    case 11:
       Add_info_silk();
       addtrain();

    case 12:
       Add_info_silk2();
       addtrain();

    case 13:
       Add_info_padmard();
       addtrain();

    case 14:
       Add_info_padmadr();
       addtrain();

    case 15:
       Add_info_dhumketu_rd();
       addtrain();

    case 16:
       Add_info_dhumketu_dr();
       addtrain();

    case 17:
       Add_info_bonolota_rd();
       addtrain();

    case 18:
       Add_info_bonolota_dr();
       addtrain();





    default:
        printf("\t\n\aSORRY SIR , YOU HAVE PRESSED WRONG INPUT\n");
        printf("\tPLEASE TRY AGAIN ");

    }


}

   Add_info_benapol()
{

    FILE *fptrs;
    int tnumber;
    char stime[5],dtime[5];

    char start[50], tname[50],tname1[50],dstation [50],offday[20];
    char ROUTE[20],ROUTE1[20],ROUTE2[20],ROUTE3[20],ROUTE4[20],ROUTE5[20],ROUTE6[20];
    char ROUTE7[20],ROUTE8[20],ROUTE9[20];

    fptrs = fopen("benapol.txt", "w+");/*  open for writing */
    if (fptrs == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

    printf("\n\n\n\t\t\t                                                       [  ADD INFO  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                           ENTER TRAIN NO. : ");
    scanf("%d", &tnumber);
    fprintf(fptrs, "\n\n\tTRAIN_NO._:_%d", tnumber);

    printf("\n                            >>                                           ENTER THE TRAIN NAME: ");
    scanf("%s",tname);
    scanf("%s",tname1);
    fprintf(fptrs, "\n\tTRAIN_NAME_:_%s_%s", tname,tname1);


    printf("\n                            >>                                           ENTER THE START STATION : ");
    scanf("%s",start);
    fprintf(fptrs, "\n\n\tSTART_STATION_:_%s",start);

    printf("\n                            >>                                           ENTER THE START TIME: ");
    scanf("%s",stime);
    fprintf(fptrs, "\n\tSTART_TIME_:_%s",stime);

    printf("\n                            >>                                           ENTER THE DESTINATION STATION : ");
    scanf("%s",dstation );
    fprintf(fptrs, "\n\tDESTINATION_SATTION_:_%s ",dstation);

    printf("\n                            >>                                           ENTER THE DESTINATION TIME : ");
    scanf("%s",dtime );
    fprintf(fptrs, "\n\tDESTINATION_TIME_:_%s\n",dtime);

     printf("\n                            >>                                           OFFDAY : ");
    scanf("%s",offday);
    fprintf(fptrs, "\n\t OFFDAY_:_%s ", offday);
    printf("\n                            >>                                                                                                   ");

    printf("\n\n                            >>                                           TRAIN ROUTE : 1. ");
    scanf("%s",ROUTE );
    printf("\n                            >>                                                         2. ");
    scanf("%s",ROUTE1 );
    printf("\n                            >>                                                         3. ");
    scanf("%s",ROUTE2 );
    printf("\n                            >>                                                         4. ");
    scanf("%s",ROUTE3 );
    printf("\n                            >>                                                         5. ");
    scanf("%s",ROUTE4 );
    printf("\n                            >>                                                         6. ");
    scanf("%s",ROUTE5 );
    printf("\n                            >>                                                         7. ");
    scanf("%s",ROUTE6 );
    printf("\n                            >>                                                         8. ");
    scanf("%s",ROUTE7 );
    printf("\n                            >>                                                         9. ");
    scanf("%s",ROUTE8 );
    printf("\n                            >>                                                         10. ");
    scanf("%s",ROUTE9 );

    fprintf(fptrs, "\n\n\n\tTRAIN_ROUTE_: 1.%s\n\t2.%s\n\t3.%s\n\t4.%s\n\t5.%s\n\t6.%s\n\t7.%s\n\t8.%s\n\t9.%s\n\t10.%s\n",
            ROUTE,ROUTE1,ROUTE2,ROUTE3,ROUTE4,ROUTE5,ROUTE6,ROUTE7,ROUTE8,ROUTE9);
            system("cls");


    fclose(fptrs);

    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("benapol.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   ADDED DATA OF BENAPOL EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

    fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");

   //addtrain();


  //  fclose(fp2);
}


int show_list_benapol() //schedule show list
{
    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("benapol.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   THE SCHEDULE OF BENAPOL EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

     fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");
    //showtrain();

}

Add_info_benapol2()
{

    FILE *fptrs;
    int tnumber;
    char stime[5],dtime[5];

    char start[50], tname[50],tname1[50],dstation [50],offday[20];
    char ROUTE[20],ROUTE1[20],ROUTE2[20],ROUTE3[20],ROUTE4[20],ROUTE5[20],ROUTE6[20];
    char ROUTE7[20],ROUTE8[20],ROUTE9[20];

    fptrs = fopen("benapol2.txt", "w+");/*  open for writing */
    if (fptrs == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

    printf("\n\n\n\t\t\t                                                       [  ADD INFO  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                           ENTER TRAIN NO. : ");
    scanf("%d", &tnumber);
    fprintf(fptrs, "\n\n\tTRAIN_NO._:_%d", tnumber);

    printf("\n                            >>                                           ENTER THE TRAIN NAME: ");
    scanf("%s",tname);
    scanf("%s",tname1);
    fprintf(fptrs, "\n\tTRAIN_NAME_:_%s_%s", tname,tname1);


    printf("\n                            >>                                           ENTER THE START STATION : ");
    scanf("%s",start);
    fprintf(fptrs, "\n\n\tSTART_STATION_:_%s",start);

    printf("\n                            >>                                           ENTER THE START TIME: ");
    scanf("%s",stime);
    fprintf(fptrs, "\n\tSTART_TIME_:_%s",stime);

    printf("\n                            >>                                           ENTER THE DESTINATION STATION : ");
    scanf("%s",dstation );
    fprintf(fptrs, "\n\tDESTINATION_SATTION_:_%s ",dstation);

    printf("\n                            >>                                           ENTER THE DESTINATION TIME : ");
    scanf("%s",dtime );
    fprintf(fptrs, "\n\tDESTINATION_TIME_:_%s\n",dtime);

     printf("\n                            >>                                           OFFDAY : ");
    scanf("%s",offday);
    fprintf(fptrs, "\n\t OFFDAY_:_%s ", offday);
    printf("\n                            >>                                                                                                   ");

    printf("\n\n                            >>                                           TRAIN ROUTE : 1. ");
    scanf("%s",ROUTE );
    printf("\n                            >>                                                         2. ");
    scanf("%s",ROUTE1 );
    printf("\n                            >>                                                         3. ");
    scanf("%s",ROUTE2 );
    printf("\n                            >>                                                         4. ");
    scanf("%s",ROUTE3 );
    printf("\n                            >>                                                         5. ");
    scanf("%s",ROUTE4 );
    printf("\n                            >>                                                         6. ");
    scanf("%s",ROUTE5 );
    printf("\n                            >>                                                         7. ");
    scanf("%s",ROUTE6 );
    printf("\n                            >>                                                         8. ");
    scanf("%s",ROUTE7 );
    printf("\n                            >>                                                         9. ");
    scanf("%s",ROUTE8 );
    printf("\n                            >>                                                         10. ");
    scanf("%s",ROUTE9 );

    fprintf(fptrs, "\n\n\n\tTRAIN_ROUTE_: 1.%s\n\t2.%s\n\t3.%s\n\t4.%s\n\t5.%s\n\t6.%s\n\t7.%s\n\t8.%s\n\t9.%s\n\t10.%s\n",
            ROUTE,ROUTE1,ROUTE2,ROUTE3,ROUTE4,ROUTE5,ROUTE6,ROUTE7,ROUTE8,ROUTE9);
            system("cls");


    fclose(fptrs);

    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("benapol2.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   ADDED DATA OF BENAPOL EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

    fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");

   //addtrain();


  //  fclose(fp2);
}
int show_list_benapol2() //schedule show list
{
    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("benapol2.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   THE SCHEDULE OF BENAPOL EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

     fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");
    //showtrain();

}


int Add_info_shundarban2( )
{


    FILE *fptr;
    int tnumber;
    char stime[5],dtime[5];

    char start[50], tname[50],tname1[50],dstation [50],offday[20];
    char ROUTE[20],ROUTE1[20],ROUTE2[20],ROUTE3[20],ROUTE4[20],ROUTE5[20],ROUTE6[20];
    char ROUTE7[20],ROUTE8[20],ROUTE9[20];

    fptr = fopen("shundarban2.txt", "w+");/*  open for writing */
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

    printf("\n\n\n\t\t\t                                                       [  ADD INFO FOR SUNDARBAN EXPRESS  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                           ENTER TRAIN NO. : ");
    scanf("%d", &tnumber);
    fprintf(fptr, "\n\n\tTRAIN_NO._:_%d", tnumber);

    printf("\n                            >>                                           ENTER THE TRAIN NAME: ");
    scanf("%s",tname);
    scanf("%s",tname1);
    fprintf(fptr, "\n\tTRAIN_NAME_:_%s_%s", tname,tname1);


    printf("\n                            >>                                           ENTER THE START STATION : ");
    scanf("%s",start);
    fprintf(fptr, "\n\n\tSTART_STATION_:_%s",start);

    printf("\n                            >>                                           ENTER THE START TIME: ");
    scanf("%s",stime);
    fprintf(fptr, "\n\tSTART_TIME_:_%s",stime);

    printf("\n                            >>                                           ENTER THE DESTINATION STATION : ");
    scanf("%s",dstation );
    fprintf(fptr, "\n\tDESTINATION_SATTION_:_%s ",dstation);

    printf("\n                            >>                                           ENTER THE DESTINATION TIME : ");
    scanf("%s",dtime );
    fprintf(fptr, "\n\tDESTINATION_TIME_:_%s\n",dtime);

     printf("\n                            >>                                           OFFDAY : ");
    scanf("%s",offday);
    fprintf(fptr, "\n\t OFFDAY_:_%s ", offday);
    printf("\n                            >>                                                                                                   ");

    printf("\n                            >>                                           TRAIN ROUTE : 1. ");
    scanf("%s",ROUTE );
    printf("\n                            >>                                                         2. ");
    scanf("%s",ROUTE1 );
    printf("\n                            >>                                                         3. ");
    scanf("%s",ROUTE2 );
    printf("\n                            >>                                                         4. ");
    scanf("%s",ROUTE3 );
    printf("\n                            >>                                                         5. ");
    scanf("%s",ROUTE4 );
    printf("\n                            >>                                                         6. ");
    scanf("%s",ROUTE5 );
    printf("\n                            >>                                                         7. ");
    scanf("%s",ROUTE6 );
    printf("\n                            >>                                                         8. ");
    scanf("%s",ROUTE7 );
    printf("\n                            >>                                                         9. ");
    scanf("%s",ROUTE8 );
    printf("\n                            >>                                                         10. ");
    scanf("%s",ROUTE9 );

    fprintf(fptr, "\n\n\tTRAIN_ROUTE_: 1.%s\n\t2.%s\n\t3.%s\n\t4.%s\n\t5.%s\n\t6.%s\n\t7.%s\n\t8.%s\n\t9.%s\n\t10.%s\n",
            ROUTE,ROUTE1,ROUTE2,ROUTE3,ROUTE4,ROUTE5,ROUTE6,ROUTE7,ROUTE8,ROUTE9);
            system("cls");


    fclose(fptr);

     FILE *fp;
    char buff[255];    //creating char array to store data of file
    fp = fopen("shundarban2.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   THE SCHEDULE OF SUNDARBAN EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fp, "%s", buff)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buff);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

    fclose(fp);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");

  // addtrain();


   //fclose(fp);
}







int show_list_shundarban2() //schedule show list
{
    FILE *fp;
    char buff[255];    //creating char array to store data of file
    fp = fopen("shundarban2.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   THE SCHEDULE OF SUNDARBAN EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fp, "%s", buff)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buff);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

    fclose(fp);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");
}


int Add_info_shundarban( )
{


    FILE *fptr;
    int tnumber;
    char stime[5],dtime[5];

    char start[50], tname[50],tname1[50],dstation [50],offday[20];
    char ROUTE[20],ROUTE1[20],ROUTE2[20],ROUTE3[20],ROUTE4[20],ROUTE5[20],ROUTE6[20];
    char ROUTE7[20],ROUTE8[20],ROUTE9[20];

    fptr = fopen("shundarban.txt", "w+");/*  open for writing */
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

    printf("\n\n\n\t\t\t                                                       [  ADD INFO FOR SUNDARBAN EXPRESS  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                           ENTER TRAIN NO. : ");
    scanf("%d", &tnumber);
    fprintf(fptr, "\n\n\tTRAIN_NO._:_%d", tnumber);

    printf("\n                            >>                                           ENTER THE TRAIN NAME: ");
    scanf("%s",tname);
    scanf("%s",tname1);
    fprintf(fptr, "\n\tTRAIN_NAME_:_%s_%s", tname,tname1);


    printf("\n                            >>                                           ENTER THE START STATION : ");
    scanf("%s",start);
    fprintf(fptr, "\n\n\tSTART_STATION_:_%s",start);

    printf("\n                            >>                                           ENTER THE START TIME: ");
    scanf("%s",stime);
    fprintf(fptr, "\n\tSTART_TIME_:_%s",stime);

    printf("\n                            >>                                           ENTER THE DESTINATION STATION : ");
    scanf("%s",dstation );
    fprintf(fptr, "\n\tDESTINATION_SATTION_:_%s ",dstation);

    printf("\n                            >>                                           ENTER THE DESTINATION TIME : ");
    scanf("%s",dtime );
    fprintf(fptr, "\n\tDESTINATION_TIME_:_%s\n",dtime);

     printf("\n                            >>                                           OFFDAY : ");
    scanf("%s",offday);
    fprintf(fptr, "\n\t OFFDAY_:_%s ", offday);
    printf("\n                            >>                                                                                                   ");

    printf("\n                            >>                                           TRAIN ROUTE : 1. ");
    scanf("%s",ROUTE );
    printf("\n                            >>                                                         2. ");
    scanf("%s",ROUTE1 );
    printf("\n                            >>                                                         3. ");
    scanf("%s",ROUTE2 );
    printf("\n                            >>                                                         4. ");
    scanf("%s",ROUTE3 );
    printf("\n                            >>                                                         5. ");
    scanf("%s",ROUTE4 );
    printf("\n                            >>                                                         6. ");
    scanf("%s",ROUTE5 );
    printf("\n                            >>                                                         7. ");
    scanf("%s",ROUTE6 );
    printf("\n                            >>                                                         8. ");
    scanf("%s",ROUTE7 );
    printf("\n                            >>                                                         9. ");
    scanf("%s",ROUTE8 );
    printf("\n                            >>                                                         10. ");
    scanf("%s",ROUTE9 );

    fprintf(fptr, "\n\n\tTRAIN_ROUTE_: 1.%s\n\t2.%s\n\t3.%s\n\t4.%s\n\t5.%s\n\t6.%s\n\t7.%s\n\t8.%s\n\t9.%s\n\t10.%s\n",
            ROUTE,ROUTE1,ROUTE2,ROUTE3,ROUTE4,ROUTE5,ROUTE6,ROUTE7,ROUTE8,ROUTE9);
            system("cls");


    fclose(fptr);

     FILE *fp;
    char buff[255];    //creating char array to store data of file
    fp = fopen("shundarban.txt", "r");

    printf("\n\n\n                                                     :::::::::::::   THE SCHEDULE OF SUNDARBAN EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fp, "%s", buff)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buff);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

    fclose(fp);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");

  // addtrain();


   //fclose(fp);
}


int show_list_shundarban() //schedule show list
{
    FILE *fp;
    char buff[255];    //creating char array to store data of file
    fp = fopen("shundarban.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   THE SCHEDULE OF SUNDARBAN EXPRESS     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fp, "%s", buff)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buff);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

    fclose(fp);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");

 //  showtrain();


   // fclose(fp);

}
showtrain()
{

   printf("\n\n\n\t\t\t                                                     [ TRAIN SCHEDULE ]                                \n\n");
    printf("HOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOME");
    printf("\n\n\n\n");


    printf("                                                       :::::::::      SELECT TRAIN NAME FOR INFO      :::::::::                                            \n\n\n");
    train_names();

    int ch;
     printf("\n\n\t\t  \n");
    printf("\t\t\t\t\t                        CHOOSE YOUR OPTION                                     \n");
    printf("\t\t\t\t\t                        --------------------------- ");
    scanf("%d", &ch);
    system("cls");
     switch(ch)
    {
    case 0:
        system("cls");
       train_Schedule();
         break;

    case 1:
        show_list_shundarban();
       showtrain();
    case 2:
        show_list_shundarban2();
        showtrain();

    case 3:
        show_list_citra();
        showtrain();
    case 4:
       show_list_citra2();
        showtrain();
    case 5:
      show_list_benapol();
      showtrain();
    case 6:
      show_list_benapol2();
       showtrain();
    case 7:
      show_list_kapot();
        showtrain();
    case 8:
       show_list_kapot2();
        showtrain();
    case 9:
        show_list_shagor();
        showtrain();
    case 10:
      show_list_shagor2();
       showtrain();

    case 11:
         show_list_silk();
         showtrain();

    case 12:
         show_list_silk2();
         showtrain();

    case 13:
        show_list_padmard();
        showtrain();

    case 14:
        show_list_padmadr();
        showtrain();


    case 15:
        show_list_dhumketu_rd();
        showtrain();

    case 16:
        show_list_dhumketu_dr();
        showtrain();

    case 17:
      show_list_bonolota_rd();
        showtrain();

    case 18:
        show_list_bonolota_dr();
        showtrain();





    default:
        printf("\t\n\aSORRY SIR , YOU HAVE PRESSED WRONG INPUT\n");
        printf("\tPLEASE TRY AGAIN ,PRESS ANY KEY");
        getch();
        system("cls");
        showtrain();
        break;

    }



}

int delet_schedule()
{
     printf("\n\n\n\t\t\t                                                       [  DELETE SCHEDULE  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");
    train_names();

    int ch;
     printf("\n\n\t\t  \n");
    printf("\t\t\t\t\t                        CHOOSE YOUR OPTION                                     \n");
    printf("\t\t\t\t\t                        --------------------------- ");
    scanf("%d", &ch);
    system("cls");
     switch(ch)
    {
    case 0:
        system("cls");
       train_Schedule();
         break;

    case 1:

        remove("shundarban.txt");
    printf("\n\n\tFile Deleted Successfully\n");
    printf("\tPress anykey to back");
    getch();
    system("cls");
    delet_schedule();


     //  showtrain();
    case 2:


        remove("shundarban2.txt");
    printf("\n\n\tFile Deleted Successfully\n");
    printf("\tPress anykey to back");
    getch();
    system("cls");
    delet_schedule();

    case 3:


        remove("citra.txt");
    printf("\n\n\tFile Deleted Successfully\n");
    printf("\tPress anykey to back");
    getch();
    system("cls");
    delet_schedule();

    case 4:


        remove("citra2.txt");
    printf("\n\n\tFile Deleted Successfully\n");
    printf("\tPress anykey to back");
    getch();
    system("cls");
    delet_schedule();

    case 5:


        remove("benapol.txt");
    printf("\n\n\tFile Deleted Successfully\n");
    printf("\tPress anykey to back");
    getch();
    system("cls");
    delet_schedule();

    case 6:

        remove("benapol2.txt");
    printf("\n\n\tFile Deleted Successfully\n");
    printf("\tPress anykey to back");
    getch();
    system("cls");
    delet_schedule();

    case 7:


        remove("kapot.txt");
    printf("\n\n\tFile Deleted Successfully\n");
    printf("\tPress anykey to back");
    getch();
    system("cls");
    delet_schedule();

    case 8:


        remove("kapot2.txt");
    printf("\n\n\tFile Deleted Successfully\n");
    printf("\tPress anykey to back");
    getch();
    system("cls");
    delet_schedule();

    case 9:


        remove("shagor.txt");
    printf("\n\n\tFile Deleted Successfully\n");
    printf("\tPress anykey to back");
    getch();
    system("cls");
    delet_schedule();

    case 10:


        remove("shagor2.txt");
    printf("\n\n\tFile Deleted Successfully\n");
    printf("\tPress anykey to back");
    getch();
    system("cls");
    delet_schedule();


    case 11:


        remove("silk.txt");
    printf("\n\n\tFile Deleted Successfully\n");
    printf("\tPress anykey to back");
    getch();
    system("cls");
    delet_schedule();

    case 12:


        remove("silk2.txt");
    printf("\n\n\tFile Deleted Successfully\n");
    printf("\tPress anykey to back");
    getch();
    system("cls");
    delet_schedule();

    case 13:


        remove("padmard.txt");
    printf("\n\n\tFile Deleted Successfully\n");
    printf("\tPress anykey to back");
    getch();
    system("cls");
    delet_schedule();

    case 14:

        remove("padmadr.txt");
    printf("\n\n\tFile Deleted Successfully\n");
    printf("\tPress anykey to back");
    getch();
    system("cls");
    delet_schedule();


    case 15:


        remove("dhumketu_rd.txt");
    printf("\n\n\tFile Deleted Successfully\n");
    printf("\tPress anykey to back");
    getch();
    system("cls");
    delet_schedule();

    case 16:

        remove("dhumketu_dr.txt");
    printf("\n\n\tFile Deleted Successfully\n");
    printf("\tPress anykey to back");
    getch();
    system("cls");
    delet_schedule();

    case 17:


        remove("bonolota_rd.txt");
    printf("\n\n\tFile Deleted Successfully\n");
    printf("\tPress anykey to back");
    getch();
    system("cls");
    delet_schedule();

    case 18:


        remove("bonolota_dr.txt");
    printf("\n\n\tFile Deleted Successfully\n");
    printf("\tPress anykey to back");
    getch();
    system("cls");
    delet_schedule();







    default:
        printf("\t\n\aSORRY SIR , YOU HAVE PRESSED WRONG INPUT\n");
        printf("\tPLEASE TRY AGAIN ,PRESS ANY KEY");
        getch();
        system("cls");
        showtrain();
        break;

     }
}


int train_Schedule()
{
    printf("\n\n\n\t\t\t                                                       [  TRAIN SCHEDULE  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");

    printf("                                        <><><><><><><><><><><><><>><><><><><><><><><><><><><><><><><><><><><><><><><><><><>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                 1. ADD INFO                                   <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                 2. SHOW LIST                                  <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                 4. DELETE INFO                                <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                 5. BACK                                       <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>     \n");
    int ch;
     printf("\n\n\t\t  \n");
    printf("\t\t\t\t\t                        CHO0SE YOUR OPTION                                     \n");
    printf("\t\t\t\t\t                        --------------------------- ");
    scanf("%d", &ch);
    system("cls");


    switch(ch)
    {
    case 1:
        addtrain();
        train_Schedule();
    case 2:
        showtrain();
       train_Schedule();

       case 4:
        delet_schedule();
     //  train_Schedule();
     break;

    case 5:
        Admin();
        break;

    default:
        printf("\t\n\aSORRY SIR , YOU HAVE PRESSED WRONG INPUT\n");
        printf("\tPLEASE TRY AGAIN \n");

    }

}



int ticket_purchass()
{
      printf("\n\n\n\t\t\t                                                       [  TICKET PURCHASE  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");

    printf("                                        <><><><><><><><><><><><><>><><><><><><><><><><><><><><><><><><><><><><><><><><><><>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                 1. SEE TICKETS                                <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                 2. DELETE TICKETS                             <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                 3. BACK                                             <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>     \n");
    int ch;
     printf("\n\n\t\t  \n");
    printf("\t\t\t\t\t                        CHOOSE YOUR OPTION                                     \n");
    printf("\t\t\t\t\t                        --------------------------- ");
    scanf("%d", &ch);
    system("cls");

   switch(ch)
    {
    case 1:
         show_ticket();
       ticket_purchass();

       case 2:
         del_ticket();
       ticket_purchass();

    case 3:
        Admin();
        break;

    default:
        printf("\t\n\aSORRY SIR , YOU HAVE PRESSED WRONG INPUT\n");
        printf("\tPLEASE TRY AGAIN \n");

    }
}

del_ticket()
{
     remove("ticket.txt");
    printf("\n\n\tFile Deleted Successfully\n");
    printf("\tPress anykey to back");
    getch();
    system("cls");
    ticket_purchass();


}


int  Add_info_information()
{
     FILE *fptr;
    int tnumber;
    char stime[80];

    char start[80], tname[80];


    fptr = fopen("inform.txt", "w+");/*  open for writing */
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

     printf("\n\n\n\t\t\t                                                       [  ADD INFO  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");

    printf("\n                            >>                                           GOVERMENT ANOUNCEMENT : ");
    scanf("%s",tname);
  //  scanf("%s",tname1);
    fprintf(fptr, "\n\tGOVERMENT_ANOUNCEMENT _:_%s", tname);


    printf("\n                            >>                                           NOTICE FROM BANGLADESH RAILWAY : ");
    scanf("%s",start);
    fprintf(fptr, "\n\n\tNOTICE_FROM_BANGLADESH_RAILWAY_:_%s",start);

    printf("\n                            >>                                           ABOUT MEAL : ");
    scanf("%s",stime);
    fprintf(fptr, "\n\tABOUT_MEAL_:_%s",stime);
    printf("\n                            >>                                                                                                   ");


            system("cls");


    fclose(fptr);

      FILE *fp;
    char buff[255];    //creating char array to store data of file
    fp = fopen("inform.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   TRAIN INFORMATION     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fp, "%s", buff)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buff);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

    fclose(fp);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");
     train_information();

}

int show_list_information() //schedule show list
{
 FILE *fp;
    char buff[255];    //creating char array to store data of file
    fp = fopen("inform.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   TRAIN INFORMATION     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fp, "%s", buff)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buff);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

    fclose(fp);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");
    // train_information();

}


int delinform()
{
    remove("inform.txt");
    printf("\n\n\tFile Deleted Successfully\n");
    printf("\tPress anykey to back");
    getch();
    system("cls");
    train_information();

}





int train_information()
{
    printf("\n\n\n\t\t\t                                                       [  TRAIN INFORMATION  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");

    printf("                                        <><><><><><><><><><><><><>><><><><><><><><><><><><><><><><><><><><><><><><><><><><>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                 1. ADD INFO                                   <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                 2. SHOW LIST                                  <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                 3. DELETE INFO                                <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                 4. BACK                                       <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>     \n");
    int ch;
    printf("\n\n\t\t  \n");
    printf("\t\t\t\t\t                        CHOOSE YOUR OPTION                                     \n");
    printf("\t\t\t\t\t                        --------------------------- ");
    scanf("%d", &ch);
    system("cls");

    switch(ch)
    {
    case 1:
        Add_info_information();
        break;

    case 2:
        show_list_information();
        train_information();

    case 3:
        delinform();
        break;

    case 4:
        Admin();
        break;

    default:
        printf("\t\n\aSORRY SIR , YOU HAVE PRESSED WRONG INPUT\n");
        printf("\tPLEASE TRY AGAIN \n");

    }
}

 user_inform()
 {
      printf("\n\n\n\t\t\t                                                       [  TRAIN INFORMATION  ]                                \n\n");
    printf("INFORMATIONINFORMATIONINFORMATIONINFORMATIONINFORMATIONINFORMATIONINFORMATIONINFORMATIONINFORMATIONINFORMATIONINFORMATIONINFORMATIONINFORMATIONINFORMATIONINFORMATIONINF");
    printf("\n\n\n\n");
    show_list_information();
    User();




 }

int my_account()
{
    printf("\n\n\n\t\t\t                                                       [  MY ACCOUNT  ]                                \n\n");
    printf("ACCOUNTACCOUNTACCOUNTACCOUNTACCOUNTACCOUNTACCOUNTACCOUNTACCOUNTACCOUNTACCOUNTACCOUNTACCOUNTACCOUNTACCOUNTACCOUNTACCOUNTACCOUNTACCOUNTACCOUNTACCOUNTACCOUNTACCOUNTACCOUNT");
    printf("\n\n\n\n");

    printf("                                        <><><><><><><><><><><><><>><><><><><><><><><><><><><><><><><><><><><><><><><><><><>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                 1. SEE YOUR TICKET                            <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                 2. SEE YOUR COMPLAIN                          <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                 3. SEE YOUR COMPLAIN ANSWER                   <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                 4. BACK                                       <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>     \n");
    int ch;
     printf("\n\n\t\t  \n");
    printf("\t\t\t\t\t                        CHOOSE YOUR OPTION                                     \n");
    printf("\t\t\t\t\t                        --------------------------- ");
    scanf("%d", &ch);
    system("cls");

  switch(ch)
    {
    case 1:
        show_ticket();
         my_account();
    case 2:
        show_complain();
        my_account();
    case 3:
        show_ans();
        my_account();
    case 4:
        User();
        break;

    default:
        printf("\t\n\aSORRY SIR , YOU HAVE PRESSED WRONG INPUT\n");
        printf("\tPLEASE TRY AGAIN \n");

    }
}



int show_complain()
{
    FILE *fpc;
    char combuf[200];  //creating char array to store data of file
    fpc = fopen("complain.txt", "r");



    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while( !feof(fpc))
    {
         fgets(combuf,200,fpc);
    printf("\n                            >>               ::::::::        USER :  %s \n", combuf);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

    fclose(fpc);
 //   show_ans();
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");


}




int user_complain()
{
    printf("\n\n\n\t\t\t                                                       [  COMPLAIN  ]                                \n\n");
    printf("COMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAIN");
    printf("\n\n\n\n");
    printf("                                                                                                                                           \n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                             1. WRITE A COMPLAIN                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                             2. SEE PREVIOUS COMPLAIN                                      >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                             3. SEE PREVIOUS COMPLAIN  ANSWER                              >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                             4. BACK                                                       >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");

    int ch;
    printf("\n\n\t\t  \n");
    printf("\t\t\t\t\t                          CHOOSE YOUR OPTION                                     \n");
    printf("\t\t\t\t\t                          --------------------------- ");
    scanf("%d", &ch);
    system("cls");

    switch(ch)
    {


    case 1:
        user_complain_write();
        break;

    case 2: printf("\n\n\n\t\t\t                                                       [  WRITE A COMPLAIN  ]                                \n\n");
    printf("COMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAIN");
    printf("\n\n\n\n");
        show_complain();
     //   user_complain();

      case 3: printf("\n\n\n\t\t\t                                                       [  COMPLAIN ANSWER ]                                \n\n");
    printf("COMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAIN");
    printf("\n\n\n\n");
        show_ans();

    case 4:
        system("cls");
        User();
        break;


    default:
        printf("\t\n\aSORRY SIR , YOU HAVE PRESSED WRONG INPUT\n");
        printf("\tPLEASE TRY AGAIN \n");

    }

}

int user_complain_write()
{
    FILE *fp;
    char comp[200];
    fp= fopen ("complain.txt","w");
    if (fp==NULL)
    {
        printf("\n There is Nothing in this file");
           exit(1);

    }
    printf("\n\n\n\t\t\t                                                       [  WRITE A COMPLAIN  ]                                \n\n");
    printf("COMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAINCOMPLAIN");
    printf("\n\n\n\n");
    printf("                            >>                                    If you have any complain then write it down                            >>\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");

    printf("\n\n\n                            >>     ::::    Enter your complain : ");
    fflush(stdin);
    gets(comp);
    fputs(comp,fp);
   fclose(fp);
    printf("\n\n\n\n\n                                                    Your complain is submitted successfuly. Press anykey to go back.......");
     getch();
    system("cls");
    user_complain();











}




int  Add_ans_complain()
{
    FILE *fp;
    char ans[200];
    fp= fopen ("answer.txt","w");
    if (fp==NULL)
    {
        printf("\n There is Nothing in this file");
           exit(1);

    }
    printf("\n\n\n\t\t\t                                                       [  ANSWER THE COMPLAIN  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");

    printf("\n\n\n                            >>     ::::    Enter your answer : ");
    fflush(stdin);
    gets(ans);
    fputs(ans,fp);
   fclose(fp);
    printf("\n\n\n\n\n                                                    Your answer is submitted successfully. Press any key to go back.......");
     getch();
    system("cls");
    complain();



}



int show_ans()
{
    FILE *fpc;
    char ansbuf[200];  //creating char array to store data of file
    fpc = fopen("answer.txt", "r");



    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while( !feof(fpc))
    {
         fgets(ansbuf,200,fpc);
    printf("\n                            >>               ::::::::        SYSTEM :  %s \n", ansbuf);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

    fclose(fpc);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");


}


int complain()
{
    printf("\n\n\n\t\t\t                                                       [  COMPLAIN  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");

    printf("                                        <><><><><><><><><><><><><>><><><><><><><><><><><><><><><><><><><><><><><><><><><><>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                 1. SEE COMPLAINS                              <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                 2. ANSWER THE COMPLAINS                       <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                 5. BACK                                       <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>     \n");
    int ch;
     printf("\n\n\t\t  \n");
    printf("\t\t\t\t\t                        CHOOSE YOUR OPTION                                     \n");
    printf("\t\t\t\t\t                        --------------------------- ");
    scanf("%d", &ch);
    system("cls");

  switch(ch)
    {
    case 1:
        show_complain();
        complain();
    case 2:
        Add_ans_complain();
        complain();

    case 5:
        Admin();
        break;

    default:
        printf("\t\n\aSORRY SIR , YOU HAVE PRESSED WRONG INPUT\n");
        printf("\tPLEASE TRY AGAIN \n");

    }
}



int Add_info_contact()             //add info for emergency contact
{
    char contact_name1[30],contact_name2[30],contact_name3[30],contact_name4[30],contact_name5[30];
    char contact_name6[30],contact_name7[30],contact_name8[30],contact_name9[30],contact_name10[30];
    FILE *fptr;

    char contact_namelast1[20],contact_namelast2[20],contact_namelast3[20],contact_namelast4[20],contact_namelast5[20];
    char contact_namelast6[20],contact_namelast7[20],contact_namelast8[20],contact_namelast9[20],contact_namelast10[20];
    char contact_number1[30],contact_number2[30],contact_number3[30],contact_number4[30],contact_number5[30],contact_nameend[20];
    char contact_number6[30],contact_number7[30],contact_number8[30],contact_number9[30],contact_number10[30];
    char contact_namecp[20],contact_namecp2[20],contact_namecr[20],contact_namecr2[20],contact_namecd[20],contact_namecd2[20];
    fptr = fopen("contact.txt", "w+");    /*  open for writing */
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }


    printf("\n\n\n\t\t\t                                                       [  ENTER THE CONTACT DETAIL'S  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                           NAME 1: ");
    scanf("%s", contact_name1);
    scanf("%s", contact_namelast1);
    scanf("%s", contact_nameend);

    printf("                            >>                                           NUMBER: ");
    scanf("%s", contact_number1);
    fprintf(fptr, "\n\t1.%s_%s_%s\t=%s\n", contact_name1,contact_namelast1,contact_nameend,contact_number1 );

    printf("\n                            >>                                           NAME 2: ");
    scanf("%s", contact_name2);
    scanf("%s", contact_namelast2);

    printf("                            >>                                           NUMBER: ");
    scanf("%s", contact_number2);
    fprintf(fptr, "\n\t2.%s_%s\t=%s\n", contact_name2,contact_namelast2,contact_number2 );

    printf("\n                            >>                                           NAME 3: ");
     scanf("%s", contact_name3);
    scanf("%s", contact_namelast3);
    printf("                            >>                                           NUMBER: ");
    scanf("%s", contact_number3);
    fprintf(fptr, "\n\t3.%s_%s\t=%s\n", contact_name3,contact_namelast3,contact_number3 );

    printf("\n                            >>                                           NAME 4: ");
    scanf("%s", contact_name4);
    scanf("%s", contact_namelast4);

    printf("                            >>                                           NUMBER: ");
    scanf("%s", contact_number4);
    fprintf(fptr, "\n\t4.%s_%s\t=%s\n", contact_name4,contact_namelast4,contact_number4 );


    printf("\n                            >>                                           NAME 5: ");
    scanf("%s", contact_name5);
    scanf("%s", contact_namelast5);
    printf("                            >>                                           NUMBER: ");
    scanf("%s", contact_number5);
    fprintf(fptr, "\n\t5.%s_%s\t=%s\n", contact_name5,contact_namelast5,contact_number5 );

    printf("\n                            >>                                           NAME 6: ");
    scanf("%s", contact_name6);
    scanf("%s", contact_namelast6);

    printf("                            >>                                           NUMBER: ");
    scanf("%s", contact_number6);
    fprintf(fptr, "\n\t6.%s_%s\t=%s\n", contact_name6,contact_namelast6,contact_number6 );


    printf("\n                            >>                                           NAME 7: ");
    scanf("%s", contact_name7);
    scanf("%s", contact_namelast7);
    scanf("%s", contact_namecd);
    scanf("%s", contact_namecd2);
    printf("                            >>                                           NUMBER: ");
    scanf("%s", contact_number7);
    fprintf(fptr, "\n\t7.%s_%s_%s_%s\t=%s\n", contact_name7,contact_namelast7,contact_namecd,contact_namecd2,contact_number7 );


    printf("\n                            >>                                           NAME 8: ");
    scanf("%s", contact_name8);
    scanf("%s", contact_namelast8);
     scanf("%s", contact_namecr);
    scanf("%s", contact_namecr2);

    printf("                            >>                                           NUMBER: ");
    scanf("%s", contact_number8);
    fprintf(fptr, "\n\t8.%s_%s_%s_%s\t=%s\n", contact_name8,contact_namelast8,contact_namecr,contact_namecr2,contact_number8 );


    printf("\n                            >>                                           NAME 9: ");
    scanf("%s", contact_name9);
    scanf("%s", contact_namelast9);
     scanf("%s", contact_namecp);
    scanf("%s", contact_namecp2);

    printf("                            >>                                           NUMBER: ");
     scanf("%s", contact_number9);
    fprintf(fptr, "\n\t9.%s_%s_%s_%s\t=%s\n", contact_name9,contact_namelast9,contact_namecp,contact_namecp2,contact_number9 );

    printf("\n                            >>                                           NAME 10: ");
    scanf("%s", contact_name10);
    scanf("%s", contact_namelast10);

    printf("                            >>                                           NUMBER: ");
    scanf("%s", contact_number10);
    fprintf(fptr, "\n\t10.%s_%s\t=%s", contact_name10,contact_namelast10,contact_number10 );


    system("cls");


    fclose(fptr);

     FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("contact.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   THE EMERGENCY CONTACT LIST     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s\n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

     fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");
}


int show_list_contact()            // for emergency contact
{
    FILE *fps;
    char buffs[255];    //creating char array to store data of file
    fps = fopen("contact.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   THE EMERGENCY CONTACT LIST     ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fps, "%s", buffs)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s\n", buffs);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

     fclose(fps);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");
}


int emergency_contact()
{
     printf("\n\n\n\t\t\t                                                       [  EMERGENCY CONTACT  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");

    printf("                                        <><><><><><><><><><><><><>><><><><><><><><><><><><><><><><><><><><><><><><><><><><>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                 1. ADD INFO                                   <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                 2. SHOW LIST                                  <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                 4. DELETE INFO                                <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                 5. BACK                                       <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>     \n");
    int ch;
     printf("\n\n\t\t  \n");
    printf("\t\t\t\t\t                        CHOOSE YOUR OPTION                                     \n");
    printf("\t\t\t\t\t                        --------------------------- ");
    scanf("%d", &ch);
    system("cls");

    switch(ch)
    {
    case 1:
        Add_info_contact();
        emergency_contact();
    case 2:
        show_list_contact();
       emergency_contact();
    case 5:
        Admin();
        break;

    default:
        printf("\t\n\aSORRY SIR , YOU HAVE PRESSED WRONG INPUT.\n");
        printf("\tPLEASE TRY AGAIN.... ");

    }

}

 train_names()
{
    printf("          <><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n");
    printf("          <>                                                                                                                                                        <>     \n");
    printf("          <>                  KHULNA - DAHAKA ROUTE                                                  RAJSHAHI - DHAKA ROUTE                                         <>      \n");
    printf("          <>                   1. SUNDARBAN EXPRESS (KHULNA --> DHAKA)                                 11. SILKCITY EXPRESS (RAJSHAHI --> DHAKA)                    <>      \n");
    printf("          <>                   2. SUNDARBAN EXPRESS (KHULNA <-- DHAKA)                                 12. SILKCITY EXPRESS (RAJSHAHI <-- DHAKA)                    <>      \n");
    printf("          <>                   3. CHITRA EXPRESS (KHULNA --> DHAKA)                                    13. PADMA EXPRESS (RAJSHAHI --> DHAKA)                       <>       \n");
    printf("          <>                   4. CHITRA EXPRESS (KHULNA <-- DHAKA)                                    14. PADMA EXPRESS (RAJSHAHI <-- DHAKA)                       <>       \n");
    printf("          <>                   5. BENAPOL EXPRESS (KHULNA --> DHAKA)                                   15. DUMKATU EXPRESS (RAJSHAHI --> DHAKA)                     <>       \n");
    printf("          <>                   6. BENAPOL EXPRESS (KHULNA <-- DHAKA)                                   16. DUMKATU EXPRESS (RAJSHAHI <-- DHAKA)                     <>       \n");
    printf("          <>                                                                                           17. BANALATA EXPRESS (RAJSHAHI --> DHAKA)                    <>        \n");
    printf("          <>                                                                                           18. BANALATA EXPRESS (RAJSHAHI <-- DHAKA)                    <>        \n");
    printf("          <>                  KHULNA - RAJSHAHI ROUTE                                                                                                               <>         \n");
    printf("          <>                    7. KAPOTAKSHA EXPRESS (KHULNA --> RAJSHAHI)                                                                                         <>        \n");
    printf("          <>                    8. KAPOTAKSHA EXPRESS (KHULNA <-- RAJSHAHI)                                                                                         <>        \n");
    printf("          <>                    9. SAGORDARI EXPRESS (KHULNA --> RAJSHAHI)                                                                                          <>        \n");
    printf("          <>                   10. SAGORDARI EXPRESS (KHULNA <-- RAJSHAHI)                                                                                          <>        \n");
    printf("          <>                                                                                                                                                        <>        \n");
    printf("          <>                                                                                                                                                        <>        \n");
    printf("          <>                                                                                                                                                        <>        \n");
    printf("          <>                                                               press 0 for back......                                                                   <>       \n");
    printf("          <>                                                                                                                                                        <>       \n");
    printf("          <><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>      \n");

}


user_train_schedule()
{

    printf("\n\n\n\t\t\t                                                     [ TRAIN SCHEDULE ]                                \n\n");
    printf("HOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOME");
    printf("\n\n\n\n");


    printf("                                                       :::::::::      SELECT TRAIN NAME FOR SCHEDULE     :::::::::                                            \n\n\n");
    train_names();

    int ch;
     printf("\n\n\t\t  \n");
    printf("\t\t\t\t\t                        CHOOSE YOUR OPTION                                     \n");
    printf("\t\t\t\t\t                        --------------------------- ");
    scanf("%d", &ch);
    system("cls");
     switch(ch)
    {
    case 0:
        system("cls");
        User();
        break;

    case 1:
        show_list_shundarban();
        user_train_schedule();

    case 2:
        show_list_shundarban2();
        user_train_schedule();

    case 3:
        show_list_citra();
         user_train_schedule();
    case 4:
       show_list_citra2();
         user_train_schedule();
    case 5:
      show_list_benapol();
        user_train_schedule();
    case 6:
      show_list_benapol2();
        user_train_schedule();
    case 7:
      show_list_kapot();
         user_train_schedule();
    case 8:
       show_list_kapot2();
         user_train_schedule();
    case 9:
        show_list_shagor();
         user_train_schedule();
    case 10:
      show_list_shagor2();
        user_train_schedule();
    case 11:
        show_list_silk();
        user_train_schedule();
    case 12:
        show_list_silk2();
         user_train_schedule();

    case 13:
        show_list_padmard();
         user_train_schedule();
    case 14:
       show_list_padmadr();
         user_train_schedule();
    case 15:
       show_list_dhumketu_rd();
        user_train_schedule();
    case 16:
       show_list_dhumketu_dr();
        user_train_schedule();
    case 17:
      show_list_bonolota_rd();
         user_train_schedule();

    case 18:
        show_list_bonolota_dr();
         user_train_schedule();





    default:
        printf("\t\n\aSORRY SIR , YOU HAVE PRESSED WRONG INPUT\n");
        printf("\tPLEASE TRY AGAIN ,PRESS ANY KEY");
        getch();
        system("cls");
        user_train_schedule();
        break;


    }

}



bkash(int taka)
{
    FILE *fp;
    int bnum,bpass;
    fp= fopen ("bkash.txt","w");
    if (fp==NULL)
    {
        printf("\n There is Nothing in this file");
           exit(1);

    }
     printf("\n\n\n\t\t\t                                                     [  bKash PAYMENT  ]                                \n\n");
    printf("PAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENT");
    printf("\n\n\n\n");

    printf("\n\n                            >>                         ::::::::         AMOUNT : %d taka",taka);

    printf("\n\n                            >>                         ::::::::         ENTER BKASH MOBILE NO. : ");
    scanf("%d", &bnum);
    fprintf(fp, "\n\n\tbKash_MOBILE_NO._:_%d", bnum);

    printf("\n\n                            >>                         ::::::::         ENTER YOUE PIN : ");
    scanf("%d", &bpass);
    fprintf(fp, "\n\n\tbKash_PIN._:_%d", bpass);

    fclose(fp);

    int ch;
     printf("\n\n\n");
     printf("\n\n\n\n                                                      Your PAYMENT is successfull. Press 1 to download your ticket......");
     scanf("%d",&ch);
     switch(ch)
     {
     case 1:
     printf("\n\n\n\n                                                      Your ticket downloaded successfully. press any key to go home....");
     getch();
     system("cls");
     User();


     }
     getch();
     system("cls");
     User();



}



rocket(int taka)
{
    FILE *fp;
    int bnum,bpass;
    fp= fopen ("rocket.txt","w");
    if (fp==NULL)
    {
        printf("\n There is Nothing in this file");
           exit(1);

    }
     printf("\n\n\n\t\t\t                                                     [  ROCKET PAYMENT  ]                                \n\n");
    printf("PAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENT");
    printf("\n\n\n\n");

    printf("\n\n                            >>                         ::::::::         AMOUNT : %d taka",taka);
    printf("\n\n                            >>                         ::::::::         ENTER YOUR 12 DIGIT ACCOUNT NO. : ");
    scanf("%d", &bnum);
    fprintf(fp, "\n\n\tROCKET_MOBILE_NO._:_%d", bnum);

    printf("\n\n                            >>                         ::::::::         ENTER YOUE PIN : ");
    scanf("%d", &bpass);
    fprintf(fp, "\n\n\tROCKET_PIN_:_%d", bpass);

    fclose(fp);

     int ch;
     printf("\n\n\n");
     printf("\n\n\n\n                                                      Your PAYMENT is successfull. Press 1 to download your ticket......");
     scanf("%d",&ch);
     switch(ch)
     {
     case 1:
     printf("\n\n\n\n                                                      Your ticket downloaded successfully. press any key to go home....");
     getch();
     system("cls");
     User();


     }
     getch();
     system("cls");
     User();



}


nogod(int taka)
{
    FILE *fp;
    int bnum,bpass;
    fp= fopen ("nogod.txt","w");
    if (fp==NULL)
    {
        printf("\n There is Nothing in this file");
           exit(1);

    }
     printf("\n\n\n\t\t\t                                                     [  NOGOD PAYMENT  ]                                \n\n");
    printf("PAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENT");
    printf("\n\n\n\n");

    printf("\n\n                            >>                         ::::::::         AMOUNT : %d taka",taka);
    printf("\n\n                            >>                         ::::::::        ENTER NOGOD MOBILE NO. : ");
    scanf("%d", &bnum);
    fprintf(fp, "\n\n\tNOGOD_MOBILE_NO._:_%d", bnum);

    printf("\n\n                            >>                         ::::::::        ENTER YOUE PIN : ");
    scanf("%d", &bpass);
    fprintf(fp, "\n\n\tNOGOD_PIN_:_%d", bpass);

    fclose(fp);

    int ch;
     printf("\n\n\n");
     printf("\n\n\n\n                                                      Your PAYMENT is successfull. Press 1 to download your ticket......");
     scanf("%d",&ch);
     switch(ch)
     {
     case 1:
     printf("\n\n\n\n                                                      Your ticket downloaded successfully. press any key to go home....");
     getch();
     system("cls");
     User();


     }
     getch();
     system("cls");
     User();




}


dbbl(int taka)
{
    FILE *fp;
    int bnum,bpass;
    fp= fopen ("dbbl.txt","w");
    if (fp==NULL)
    {
        printf("\n There is Nothing in this file");
           exit(1);

    }
     printf("\n\n\n\t\t\t                                                     [  DBBL PAYMENT  ]                                \n\n");
    printf("PAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENT");
    printf("\n\n\n\n");

    printf("\n\n                            >>                         ::::::::         AMOUNT : %d taka",taka);
    printf("\n\n                            >>                        ::::::::        ENTER YOUR DBBL ACCOUNT NO. : ");
    scanf("%d", &bnum);
    fprintf(fp, "\n\n\tDBBL_ACCOUNT_NO._:_%d", bnum);

    printf("\n\n                            >>                        ::::::::        ENTER YOUE PIN : ");
    scanf("%d", &bpass);
    fprintf(fp, "\n\n\tDBBL_PIN_:_%d", bpass);

    fclose(fp);

     int ch;
     printf("\n\n\n");
     printf("\n\n\n\n                                                      Your PAYMENT is successfull. Press 1 to download your ticket......");
     scanf("%d",&ch);
     switch(ch)
     {
     case 1:
     printf("\n\n\n\n                                                      Your ticket downloaded successfully. press any key to go home....");
     getch();
     system("cls");
     User();


     }
     getch();
     system("cls");
     User();



}


ibbl(int taka)
{
    FILE *fp;
    int bnum,bpass;
    fp= fopen ("IBBL.txt","w");
    if (fp==NULL)
    {
        printf("\n There is Nothing in this file");
           exit(1);

    }
     printf("\n\n\n\t\t\t                                                     [  IBBL PAYMENT  ]                                \n\n");
    printf("PAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENT");
    printf("\n\n\n\n");

    printf("\n\n                            >>                         ::::::::         AMOUNT : %d taka",taka);
    printf("\n\n                            >>                        ::::::::        ENTER IBBL ACOUNT NO. : ");
    scanf("%d", &bnum);
    fprintf(fp, "\n\n\tIBBL_ACCOUNT_NO._:_%d", bnum);

    printf("\n\n                            >>                        ::::::::        ENTER YOUE PIN : ");
    scanf("%d", &bpass);
    fprintf(fp, "\n\n\tIBBL_PIN_:_%d", bpass);

    fclose(fp);

    int ch;
     printf("\n\n\n");
     printf("\n\n\n\n                                                   Your PAYMENT is successfull. Press 1 for download and 2 print your ticket......");
     scanf("%d",&ch);
     switch(ch)
     {
     case 1:
     printf("\n\n\n\n                                                      Your ticket downloaded successfully. press any key to go home....");
     getch();
     system("cls");
     User();


     }
     getch();
     system("cls");
     User();





}



payment(int taka)
{
    printf("\n\n\n\t\t\t                                                     [  PAYMENT OPTION  ]                                \n\n");
    printf("PAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENTPAYMENT");
    printf("\n\n\n\n");
    printf("                                                                          Choose your PAYMENT option                                                                 \n\n");
    printf("                              <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                              >>                                                                                                         >>\n");
    printf("                              >>                                                                                                         >>\n");
    printf("                              >>                                                1. bKash                                                 >>\n");
    printf("                              >>                                                                                                         >>\n");
    printf("                              >>                                                2. ROCKET                                                >>\n");
    printf("                              >>                                                                                                         >>\n");
    printf("                              >>                                                3. NOGOD                                                 >>\n");
    printf("                              >>                                                                                                         >>\n");
    printf("                              >>                                                4. DBBL                                                  >>\n");
    printf("                              >>                                                                                                         >>\n");
    printf("                              >>                                                5. IBBL                                                  >>\n");
    printf("                              >>                                                                                                         >>\n");
    printf("                              >>                                                                                                         >>\n");
    printf("                              <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");

     int ch;
     printf("\n\n\t\t  \n");
    printf("\t\t\t\t\t                           CHOOSE YOUR OPTION                                     \n");
    printf("\t\t\t\t\t                           --------------------------- ");
    scanf("%d", &ch);
    system("cls");

    switch(ch)
    {
    case 1:
        bkash(taka);
        break;

    case 2:
         rocket(taka);
        break;

    case 3:
         nogod(taka);
        break;

    case 4:
        dbbl(taka);
        break;

    case 5:
         ibbl(taka);
        break;




    default:
        printf("\t\n\aSORRY SIR , YOU HAVE PRESSED WRONG INPUT.\n");
        printf("\tPLEASE TRY AGAIN.... ");

    }



}




ticket_counter(char strt[30],char dst[30], char dat[20],char adg[],char tname[22],int ft, int cd, char stime[],char dtime[],char coachname[],int tvat,int meal )
{
     int tn;
       srand(time(NULL));
       tn = rand();

     FILE *fptr;
    int tnum;
   // char stime[5],dtime[5];



  // char s1[10]="1";
    char seatclass[20],seatclass1[20],idat[20],gen[5];
    int tfare,adultpass,childpass,seat,mob,ml;

    fptr = fopen("ticket.txt", "w+");/*  open for writing */
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

    printf("\n\n\n\t\t\t                                                       [  PURCHASE A TICKET  ]                                \n\n");
    printf("PURRCHASETICKETPURRCHASETICKETPURRCHASETICKETPURRCHASETICKETPURRCHASETICKETPURRCHASETICKETPURRCHASETICKETPURRCHASETICKETPURRCHASETICKETPURRCHASETICKETPURRCHASETICKETPUR");
    printf("\n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");



    printf("\n\n                            >>                                         TICKET NO. : %s %d",adg,tn);
    fprintf(fptr, "TICKET_NO._:_%s_%d",adg,tn);


    printf("\n\n                            >>                                         TRAIN NAME and NUMBER : %s",tname);
    fprintf(fptr, "\n\tTRAIN_NAME_and_NUMBER_:_%s",tname);

    printf("\n\n                            >>                                         FROM : %s",strt);
    fprintf(fptr, "\n\n\tFROM_:_%s",strt);

    printf("\n\n                            >>                                         TO : %s",dst);
    fprintf(fptr, "\n\tTO_:_%s ",dst);


    printf("\n\n                            >>                                         DEPARTURE TIME : %s",stime);//
    fprintf(fptr, "\n\tDEPARTURE_TIME_:_%s",stime);


    printf("\n\n                            >>                                         ARRIVAL TIME : %s",dtime);//
    fprintf(fptr, "\n\tARRIVAL_TIME_:_%s\n",dtime);

    printf("\n\n                            >>                                         DATE OF JOURNEY : %s",dat);
    fprintf(fptr, "\n\tDATE_OF_JOURNEY:_%s",dat);

    printf("\n\n                            >>                                         TICKET ISSUE DATE : ");
    scanf("%s",idat);
    fprintf(fptr, "\n\TICKET_ISSUE_DATE:_%s",idat);

    printf("\n\n                            >>                                         SEAT CLASS (SHOVON CHAIR / AC CHAIR) : ");
    scanf("%s",seatclass);
    scanf("%s",seatclass1);
    fprintf(fptr, "\n\tSEAT_CLASS_:_%s_%s",seatclass,seatclass1);

    printf("\n\n                            >>                                         COACH NAME : %s",coachname );
    fprintf(fptr, "\n\tCOACH_NAME_:_%s ",coachname);


    printf("\n\n                            >>                  CHOOSE YOUR SEAT NO.: ");
    printf("\n\n                                ________________   _         _   ________________________________________________   _         _   ______________       \n");
    printf("                            >>               |      |       |      |   1   6  11  16  21  26  31  36  41  46  |      |       |      |                  \n");
    printf("                                             |      |       |      |   2   7  12  17  22  27  32  37  42  47  |      |       |      |                  \n");
    printf("                            >>               |      |||::||||      |   3   8  13  18  23  28  33  38  43  48  |      ||||::|||      |                 \n");
    printf("                                                    |       |                                                        |       |                        \n");
    printf("                            >>               |      |||::||||      |   4   9  14  19  24  29  34  39  44  49  |      ||||::|||      |                 \n");
    printf("                                             |      |       |      |   5  10  15  20  25  30  35  40  45  50  |      |       |      |                  \n");
    printf("                            >>     __________|__   _|       |_   __|__________________________________________|__   _|       |_   __|_______________   \n");
    printf("\n                                                                                      COACH : %s\n",coachname);

    printf("\n\n                            >>                                         ENTER YOUR SEAT NO. : ");
    scanf("%d",&seat);
    fprintf(fptr, "\n\tSEAT_NO._:_%d",seat);
  // switch(seat)
//    {
//    case 1:

 //   }






    printf("\n\n                            >>                                         ENTER YOUR MOBILE NO. : ");
    scanf("%d",&mob);
    fprintf(fptr, "\n\tMOBILE_NO._:_%d",mob);

    printf("\n\n                            >>                                         ENTER YOUR GENDER(M/F) : ");
    scanf("%s",gen);
    fprintf(fptr, "\n\tGENDER_:_%s",gen);

    printf("\n\n                            >>                                         A SINGLE MEAL RATE IS : %d TAKA",meal);
    printf("\n\n                            >>                                         NO. OF MEAL : ");
    scanf("%d",&ml);
    fprintf(fptr, "\n\tNO._OF_MEAL_:_%d",ml);


    printf("\n\n                            >>                                         TICKET FARE FOR ADULT PASSENGER : %d TAKA",ft);
    printf("\n\n                            >>                                         NO. OF ADULT PASSENGER : ");
    scanf("%d",&adultpass );
    fprintf(fptr, "\n\tADULT_PASSENGER_:_%d",adultpass);


    printf("\n\n                            >>                                         TICKET FARE FOR CHILD PASSENGER : %d TAKA",cd);
    printf("\n\n                            >>                                         NO. OF CHILD PASSENGER : ");
    scanf("%d",&childpass);
    fprintf(fptr, "\n\n\tCHILD_PASSENGER:_%d",childpass);

    printf("\n\n                            >>                                         VAT : %d TAKA",&tvat);
   // scanf("%d",&tvat);
    fprintf(fptr, "\n\n\tVAT_:_%d",tvat);


    tfare= ft * adultpass + cd * childpass + tvat + meal * ml;  //CALCULETION


    printf("\n\n                            >>                                         TICKET FARE : %d TAKA",tfare);
  //  scanf("%d",&tfare);
    fprintf(fptr, "\n\tTOTAL_FARE_:_%d",tfare);

       fclose(fptr);
      system("cls");




    FILE *fp;
    char buff[300];    //creating char array to store data of file
    fp = fopen("ticket.txt", "r");

    printf("\n\n\n                                                       :::::::::::::     BANGLADESH RAILWAY      ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fp, "%s", buff)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buff);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

     fclose(fp);
     int ch;
     printf("\n\n\t\t\t                                         Press 1 for PAYMENT ....");
    scanf("%d",&ch);
    switch(ch)
    {
    case 0:
        system("cls");


    case 1:
        system("cls");
        payment(tfare);
        break;


    }




}

show_ticket()
{
    FILE *fp;
    char buff[300];    //creating char array to store data of file
    fp = fopen("ticket.txt", "r");

    printf("\n\n\n                                                       :::::::::::::   BANGLADESH RAILWAY    ::::::::::::: \n\n\n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
     while(fscanf(fp, "%s", buff)!=EOF)
    {
    printf("\n                            >>               ::::::::             %s \n", buff);
    }
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n\n\n");

     fclose(fp);
     printf("\n\n\t\t\t                                         Press any key to go back....");
    getch();
    system("cls");

}




dhaka_khulna(char start[20],char dstation[20],char date[20])
{
     data_one();

              int ch;
            char tname[20]="726_SUNDARBAN_EXPRESS";
            char tname1[22]="764_Chitra_Express";
            char tname2[22]="796_Benapol_Express";

            char stime[]="08:15";
            char stime1[]="19:00";
            char stime2[]="23:15";

            char dtime[]="17:40";
            char dtime1[]="03:40";
            char dtime2[]="08:20";

            int ft=375;
            int ft1=375;
            int ft2=375;

            int cd=100;
            int cd1=100;
            int cd2=100;
            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";





              char adg[]="DHK";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;



             default:
                printf(" oops, wrong input.");
                   break;
        }

}



dhaka_alamdanga(char start[20],char dstation[20],char date[20])
{
     data_one();

             int ch;
            char tname[20]="726_SUNDARBAN_EXPRESS";
            char tname1[22]="764_Chitra_Express";
            char tname2[22]="796_Benapol_Express";

            char stime[]="08:15";
            char stime1[]="19:00";
            char stime2[]="23:15";

            char dtime[]="14:20";
            char dtime1[]="00:26";
            char dtime2[]="15:30";

            int ft=375;
            int ft1=375;
            int ft2=375;

            int cd=100;
            int cd1=100;
            int cd2=100;
            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";





              char adg[]="DHK";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;


             default:
                printf(" oops, wrong input.");
                   break;
        }

}


dhaka_chuadanga(char start[20],char dstation[20],char date[20])
{
     data_one();
     int ch;

            char tname[20]="726_SUNDARBAN_EXPRESS";
            char tname1[22]="764_Chitra_Express";
            char tname2[22]="796_Benapol_Express";

            char stime[]="08:15";
            char stime1[]="19:00";
            char stime2[]="05:35";

            char dtime[]="14:41";
            char dtime1[]="00:55";
            char dtime2[]="12:00";

            int ft=375;
            int ft1=375;
            int ft2=375;

            int cd=100;
            int cd1=100;
            int cd2=100;
            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";





              char adg[]="DHK";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;



             default:
                printf(" oops, wrong input.");
                   break;
        }

}

dhaka_jessore(char start[20],char dstation[20],char date[20])
{
     data_one();
     int ch;

 char tname[20]="726_SUNDARBAN_EXPRESS";
            char tname1[22]="764_Chitra_Express";
            char tname2[22]="796_Benapol_Express";

            char stime[]="08:15";
            char stime1[]="19:00";
            char stime2[]="23:15";

            char dtime[]="16:20";
            char dtime1[]="02:20";
            char dtime2[]="07:05";

            int ft=375;
            int ft1=375;
            int ft2=375;

            int cd=100;
            int cd1=100;
            int cd2=100;
            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";





              char adg[]="DHK";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;



             default:
                printf(" oops, wrong input.");
                   break;
        }

}


dhaka_dorshona(char start[20],char dstation[20],char date[20])
{
     data_one();
     int ch;

             char tname[20]="726_SUNDARBAN_EXPRESS";
            char tname1[22]="764_Chitra_Express";
            char tname2[22]="796_Benapol_Express";

            char stime[]="08:15";
            char stime1[]="19:00";
            char stime2[]="23:15";

            char dtime[]="15:15";
            char dtime1[]="01:20";
            char dtime2[]="05:56";

            int ft=375;
            int ft1=375;
            int ft2=375;

            int cd=100;
            int cd1=100;
            int cd2=100;
            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";





              char adg[]="DHK";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;



             default:
                printf(" oops, wrong input.");
                   break;
        }

}

dhaka_poradah(char start[20],char dstation[20],char date[20])
{
     data_one();
     int ch;

             char tname[20]="726_SUNDARBAN_EXPRESS";
            char tname1[22]="764_Chitra_Express";
            char tname2[22]="796_Benapol_Express";

            char stime[]="08:15";
            char stime1[]="19:00";
            char stime2[]="23:15";

            char dtime[]="14:01";
            char dtime1[]="00:16";
            char dtime2[]="05:01";

            int ft=375;
            int ft1=375;
            int ft2=375;

            int cd=100;
            int cd1=100;
            int cd2=100;
            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";





              char adg[]="DHK";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;



             default:
                printf(" oops, wrong input.");
                   break;
        }

}

dhaka_mirpur(char start[20],char dstation[20],char date[20])
{
     data_one();
     int ch;
 char tname[20]="726_SUNDARBAN_EXPRESS";
            char tname1[22]="764_Chitra_Express";
            char tname2[22]="796_Benapol_Express";

            char stime[]="08:15";
            char stime1[]="19:00";
            char stime2[]="23:15";

           char dtime[]="13:40";
            char dtime1[]="23:45";
            char dtime2[]="06:41";
            int ft=375;
            int ft1=375;
            int ft2=375;

            int cd=100;
            int cd1=100;
            int cd2=100;
            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";





              char adg[]="DHK";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;



             default:
                printf(" oops, wrong input.");
                   break;
        }

}

dhaka_veramara(char start[20],char dstation[20],char date[20])
{
     data_one();
     int ch;

         char tname[20]="726_SUNDARBAN_EXPRESS";
            char tname1[22]="764_Chitra_Express";
            char tname2[22]="796_Benapol_Express";

            char stime[]="08:15";
            char stime1[]="19:00";
            char stime2[]="23:15";

              char dtime[]="13:20";
            char dtime1[]="23:25";
            char dtime2[]="06:11";

            int ft=375;
            int ft1=375;
            int ft2=375;

            int cd=100;
            int cd1=100;
            int cd2=100;
            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";





              char adg[]="DHK";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;


             default:
                printf(" oops, wrong input.");
                   break;
        }

}

dhaka_pakshi(char start[20],char dstation[20],char date[20])
{
     data_one();
     int ch;

             char tname[20]="726_SUNDARBAN_EXPRESS";
            char tname1[22]="764_Chitra_Express";
            char tname2[22]="796_Benapol_Express";

            char stime[]="08:15";
            char stime1[]="19:00";
            char stime2[]="23:15";

           char dtime[]="13:05";
            char dtime1[]="23:05";
            char dtime2[]="06:00";
            int ft=375;
            int ft1=375;
            int ft2=375;

            int cd=100;
            int cd1=100;
            int cd2=100;
            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";





              char adg[]="DHK";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;



             default:
                printf(" oops, wrong input.");
                   break;
        }

}

dhaka_ishshordi(char start[20],char dstation[20],char date[20])
{
     data_one();
     int ch;

            char tname[20]="726_SUNDARBAN_EXPRESS";
            char tname1[22]="764_Chitra_Express";
            char tname2[22]="796_Benapol_Express";

            char stime[]="08:15";
            char stime1[]="19:00";
            char stime2[]="23:15";


               char dtime[]="12:45";
            char dtime1[]="22:35";
            char dtime2[]="05:40";


            int ft=375;
            int ft1=375;
            int ft2=375;

            int cd=100;
            int cd1=100;
            int cd2=100;
            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";





              char adg[]="DHK";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;



             default:
                printf(" oops, wrong input.");
                   break;
        }

}


dhaka_rajshahi(char start[20],char dstation[20],char date[20])
{
     data_dh_raj();

              int ch;
            char tname[]="769_DHUMKETU_EXPRESS";
            char tname1[]="753_SILKCITY_Express";
            char tname2[]="791_BONOLATA_Express";
            char tname3[]="759_PADMA_Express";


            char stime[]="06:00";
            char stime1[]="14:45";
            char stime2[]="13:30";
            char stime3[]="23:00";


             char dtime[]="11:40";
            char dtime1[]="20:35";
            char dtime2[]="18:15";
            char dtime3[]="04:30";


            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;


            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;
            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GA";





              char adg[]="DHK";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;




             default:
                printf(" oops, wrong input.");
                   break;
        }


}


dhaka_abdulpur(char start[20],char dstation[20],char date[20])
{
     data_dh_raj();

              int ch;
            char tname[]="729_DHUMKETU_EXPRESS";
            char tname1[]="720_SILKCITY_Express";
            char tname2[]="723_BONOLATA_Express";
            char tname3[]="723_PADMA_Express";


            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";


            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;


            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;
            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GA";





              char adg[]="DHK";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;





             default:
                printf(" oops, wrong input.");
                   break;
        }

}


dhaka_ishshordi_by(char start[20],char dstation[20],char date[20])
{
     data_dh_raj();

              int ch;
            char tname[]="729_DHUMKETU_EXPRESS";
            char tname1[]="720_SILKCITY_Express";
            char tname2[]="723_BONOLATA_Express";
            char tname3[]="723_PADMA_Express";


            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";


            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;


            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;
            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GA";





              char adg[]="DHK";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}


dhaka_chatmohor(char start[20],char dstation[20],char date[20])
{
     data_dh_chat();

              int ch;
            char tname[]="729_DHUMKETU_EXPRESS";
            char tname1[]="720_SILKCITY_EXPRESS";
            char tname2[]="723_SUNDARBAN_EXPRESS";
            char tname3[]="723_PADMA_EXPRESS";
            char tname4[]="723_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";
            char stime4[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";
            char dtime4[]="12:00";


            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;
            int ft4=375;


            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;
            int cd4=100;

            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KA";
            char coachname2[]="GA";
            char coachname3[]="GA";
            char coachname4[]="GA";





              char adg[]="DHK";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;

            case 5:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname4,ft4,cd4,stime4,dtime4,coachname4,tvat,meal);
                   break;


             default:
                printf(" oops, wrong input.");
                   break;
        }

}

dhaka_bbridge(char start[20],char dstation[20],char date[20])
{
     data_dh_chat();

              int ch;
            char tname[]="729_DHUMKETU_EXPRESS";
            char tname1[]="720_SILKCITY_EXPRESS";
            char tname2[]="723_SUNDARBAN_EXPRESS";
            char tname3[]="723_PADMA_EXPRESS";
            char tname4[]="723_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";
            char stime4[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";
            char dtime4[]="12:00";


            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;
            int ft4=375;


            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;
            int cd4=100;

            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";
            char coachname4[]="CHA";





              char adg[]="DHK";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;

            case 5:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname4,ft4,cd4,stime4,dtime4,coachname4,tvat,meal);
                   break;





             default:
                printf(" oops, wrong input.");
                   break;
        }

}


dhaka_ullapara(char start[20],char dstation[20],char date[20])
{
     data_dh_chat();

              int ch;
            char tname[]="729_DHUMKETU_EXPRESS";
            char tname1[]="720_SILKCITY_EXPRESS";
            char tname2[]="723_SUNDARBAN_EXPRESS";
            char tname3[]="723_PADMA_EXPRESS";
            char tname4[]="723_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";
            char stime4[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";
            char dtime4[]="12:00";


            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;
            int ft4=375;


            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;
            int cd4=100;

            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";
            char coachname4[]="CHA";





              char adg[]="DHK";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;

            case 5:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname4,ft4,cd4,stime4,dtime4,coachname4,tvat,meal);
                   break;





             default:
                printf(" oops, wrong input.");
                   break;
        }

}



dhaka_b_setu_east(char start[20],char dstation[20],char date[20])
{
     data_dh_chat();

              int ch;
            char tname[]="729_DHUMKETU_EXPRESS";
            char tname1[]="720_SILKCITY_EXPRESS";
            char tname2[]="723_SUNDARBAN_EXPRESS";
            char tname3[]="723_PADMA_EXPRESS";
            char tname4[]="723_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";
            char stime4[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";
            char dtime4[]="12:00";


            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;
            int ft4=375;


            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;
            int cd4=100;

            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";
            char coachname4[]="CHA";





              char adg[]="DHK";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;

            case 5:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname4,ft4,cd4,stime4,dtime4,coachname4,tvat,meal);
                   break;




             default:
                printf(" oops, wrong input.");
                   break;
        }

}



dhaka_tangail(char start[20],char dstation[20],char date[20])
{
     data_dh_chat();

              int ch;
            char tname[]="729_DHUMKETU_EXPRESS";
            char tname1[]="720_SILKCITY_EXPRESS";
            char tname2[]="723_SUNDARBAN_EXPRESS";
            char tname3[]="723_PADMA_EXPRESS";
            char tname4[]="723_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";
            char stime4[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";
            char dtime4[]="12:00";


            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;
            int ft4=375;


            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;
            int cd4=100;

            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";
            char coachname4[]="CHA";





              char adg[]="DHK";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;

            case 5:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname4,ft4,cd4,stime4,dtime4,coachname4,tvat,meal);
                   break;




             default:
                printf(" oops, wrong input.");
                   break;
        }

}



dhaka_joydevpur(char start[20],char dstation[20],char date[20])
{
     data_dh_chat();

              int ch;
            char tname[]="729_DHUMKETU_EXPRESS";
            char tname1[]="720_SILKCITY_EXPRESS";
            char tname2[]="723_SUNDARBAN_EXPRESS";
            char tname3[]="723_PADMA_EXPRESS";
            char tname4[]="723_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";
            char stime4[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";
            char dtime4[]="12:00";


            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;
            int ft4=375;


            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;
            int cd4=100;

            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";
            char coachname4[]="CHA";





              char adg[]="DHK";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;

            case 5:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname4,ft4,cd4,stime4,dtime4,coachname4,tvat,meal);
                   break;




             default:
                printf(" oops, wrong input.");
                   break;
        }

}



khulna_jessore(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";

            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="KLN";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;



             default:
                printf(" oops, wrong input.");
                   break;
        }

}





khulna_dorshona(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="KLN";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}




khulna_chuadanga(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="KLN";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;





             default:
                printf(" oops, wrong input.");
                   break;
        }

}





khulna_alamdanga(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="KLN";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}





khulna_poradah(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="KLN";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





khulna_mirpur(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="KLN";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}





khulna_veramara(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="KLN";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}





khulna_pakshi(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="KLN";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}





khulna_ishardi(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="KLN";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





khulna_abdulpur(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

              int ch;
            char tname[]="723_SAGORDARI_EXPRESS";
            char tname1[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";




            int ft=375;
            int ft1=375;



            int cd=100;
            int cd1=100;



            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            ;






              char adg[]="KLN";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}




khulna_rajshahi(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

              int ch;
            char tname[]="723_SAGORDARI_EXPRESS";
            char tname1[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="06:15";
            char stime1[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";




            int ft=375;
            int ft1=375;



            int cd=100;
            int cd1=100;



            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            ;






              char adg[]="KLN";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}







khulna_chatmohor(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="KLN";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}




khulna_boralb(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="KLN";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}



khulna_ullapara(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="KLN";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}




khulna_setu(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="KLN";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





khulna_tangail(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="KLN";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}







khulna_jaydevpur(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="KLN";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;





             default:
                printf(" oops, wrong input.");
                   break;
        }

}







khulna_dhaka(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="22:15";
            char stime1[]="09:00";


            char dtime[]="07:00";
            char dtime1[]="17:55";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="KLN";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;


             default:
                printf(" oops, wrong input.");
                   break;
        }

}

//FROM RAJSHHI
rajshahi_jessore(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="RJH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;


             default:
                printf(" oops, wrong input.");
                   break;
        }

}




rajshahi_dorshona(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="RJH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;


             default:
                printf(" oops, wrong input.");
                   break;
        }

}




rajshahi_chuadanga(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="RJH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;


             default:
                printf(" oops, wrong input.");
                   break;
        }

}




rajshahi_alamdanga(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="RJH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;


             default:
                printf(" oops, wrong input.");
                   break;
        }

}




rajshahi_poradah(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="RJH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;


             default:
                printf(" oops, wrong input.");
                   break;
        }

}




rajshahi_mirpur(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="RJH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;


             default:
                printf(" oops, wrong input.");
                   break;
        }

}




rajshahi_veramara(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="RJH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;


             default:
                printf(" oops, wrong input.");
                   break;
        }

}





rajshahi_pakshi(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="RJH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;


             default:
                printf(" oops, wrong input.");
                   break;
        }

}




rajshahi_ishardi(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

               int ch;
            char tname[]="770_DHUMKETU_EXPRESS";
            char tname1[]="754_SILKCITY_EXPRESS";
            char tname2[]="792_BONOLATA_EXPRESS";
            char tname3[]="760_PADMA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";


            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;


            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
             char coachname2[]="KHA";
            char coachname3[]="KHA";








              char adg[]="RJH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

                    case 3:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;



                    case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;





             default:
                printf(" oops, wrong input.");
                   break;
        }

}




rajshahi_abdulpur(char start[20],char dstation[20],char date[20])
{
     data_raj_abdul();

              int ch;
            char tname[]="770_DHUMKETU_EXPRESS";
            char tname1[]="754_SILKCITY_EXPRESS";
            char tname2[]="792_SAGORDARI_EXPRESS";
            char tname3[]="760_PADMA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";


            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;


            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
             char coachname2[]="KHA";
            char coachname3[]="KHA";








              char adg[]="RJH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

                    case 3:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;



                    case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;





             default:
                printf(" oops, wrong input.");
                   break;
        }

}




rajshahi_ishardi_bypass(char start[20],char dstation[20],char date[20])
{
     data_dh_raj();

              int ch;
            char tname[]="770_DHUMKETU_EXPRESS";
            char tname1[]="754_SILKCITY_EXPRESS";
            char tname2[]="792_BONOLATA_EXPRESS";
            char tname3[]="760_PADMA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";


            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;


            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
             char coachname2[]="KHA";
            char coachname3[]="KHA";








              char adg[]="RJH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

                    case 3:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;



                    case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}




rajshahi_chatmohor(char start[20],char dstation[20],char date[20])
{
     data_dh_raj();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="RJH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;


             default:
                printf(" oops, wrong input.");
                   break;
        }

}




rajshahi_boralb(char start[20],char dstation[20],char date[20])
{
     data_dh_raj();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="RJH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;


             default:
                printf(" oops, wrong input.");
                   break;
        }

}




rajshahi_ullapara(char start[20],char dstation[20],char date[20])
{
     data_dh_raj();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="RJH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;


             default:
                printf(" oops, wrong input.");
                   break;
        }

}




rajshahi_setu(char start[20],char dstation[20],char date[20])
{
     data_dh_raj();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="RJH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;


             default:
                printf(" oops, wrong input.");
                   break;
        }

}




rajshahi_tangail(char start[20],char dstation[20],char date[20])
{
     data_dh_raj();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="RJH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;


             default:
                printf(" oops, wrong input.");
                   break;
        }

}




rajshahi_jaydevpur(char start[20],char dstation[20],char date[20])
{
     data_dh_raj();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="RJH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;


             default:
                printf(" oops, wrong input.");
                   break;
        }

}




rajshahi_dhaka(char start[20],char dstation[20],char date[20])
{
     data_dh_raj();

  int ch;
            char tname[]="770_DHUMKETU_EXPRESS";
            char tname1[]="754_SILKCITY_EXPRESS";
            char tname2[]="792_BONOLATA_EXPRESS";
            char tname3[]="760_PADMA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";


            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;


            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
             char coachname2[]="KHA";
            char coachname3[]="KHA";








              char adg[]="RJH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

                    case 3:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;



                    case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;




             default:
                printf(" oops, wrong input.");
                   break;
        }

}






jessore_khulna(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";

            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="JSR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;



             default:
                printf(" oops, wrong input.");
                   break;
        }

}





jessore_dorshona(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="JSR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}




jessore_chuadanga(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="JSR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;





             default:
                printf(" oops, wrong input.");
                   break;
        }

}





jessore_alamdanga(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="JSR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}





jessore_poradah(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="JSR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





jessore_mirpur(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="JSR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}





jessore_veramara(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="JSR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}





jessore_pakshi(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="JSR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}





jessore_ishardi(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="JSR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





jessore_abdulpur(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

              int ch;
            char tname[]="723_SAGORDARI_EXPRESS";
            char tname1[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";




            int ft=375;
            int ft1=375;



            int cd=100;
            int cd1=100;



            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            ;






              char adg[]="JSR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}




jessore_rajshahi(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

              int ch;
            char tname[]="723_SAGORDARI_EXPRESS";
            char tname1[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";




            int ft=375;
            int ft1=375;



            int cd=100;
            int cd1=100;



            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            ;






              char adg[]="JSR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}







jessore_chatmohor(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="JSR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}




jessore_boralb(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="JSR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}



jessore_ullapara(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="JSR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}




jessore_setu(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="JSR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





jessore_tangail(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="JSR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}







jessore_jaydevpur(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="JSR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;





             default:
                printf(" oops, wrong input.");
                   break;
        }

}







jessore_dhaka(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="JSR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;


             default:
                printf(" oops, wrong input.");
                   break;
        }

}




dorshona_khulna(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";

            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="DRSH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;



             default:
                printf(" oops, wrong input.");
                   break;
        }

}





dorshona_jessore(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="DRSH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}




     dorshona_chuadanga(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="DRSH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;





             default:
                printf(" oops, wrong input.");
                   break;
        }

}





   dorshona_alamdanga(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="DRSH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}





dorshona_poradah(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="DRSH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





dorshona_mirpur(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="DRSH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}




dorshona_veramara(char start[20],char dstation[20],char date[20])
{

     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="DRSH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}





dorshona_pakshi(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="DRSH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}





dorshona_ishardi(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="DRSH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





dorshona_abdulpur(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

              int ch;
            char tname[]="723_SAGORDARI_EXPRESS";
            char tname1[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";




            int ft=375;
            int ft1=375;



            int cd=100;
            int cd1=100;



            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            ;






              char adg[]="DRSH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}




dorshona_rajshahi(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

              int ch;
            char tname[]="723_SAGORDARI_EXPRESS";
            char tname1[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";




            int ft=375;
            int ft1=375;



            int cd=100;
            int cd1=100;



            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            ;






              char adg[]="DRSH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}







dorshona_chatmohor(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="DRSH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}




dorshona_boralb(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="DRSH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}



dorshona_ullapara(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="DRSH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}




dorshona_setu(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="DRSH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





dorshona_tangail(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="DRSH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}







dorshona_jaydevpur(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="DRSH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;





             default:
                printf(" oops, wrong input.");
                   break;
        }

}







dorshona_dhaka(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="DRSH";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;


             default:
                printf(" oops, wrong input.");
                   break;
        }

}




chuadanga_jessore(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";

            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="CDA";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;



             default:
                printf(" oops, wrong input.");
                   break;
        }

}





chuadanga_dorshona(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="CDA";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}




chuadanga_khulna(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="CDA";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;





             default:
                printf(" oops, wrong input.");
                   break;
        }

}





chuadanga_alamdanga(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="CDA";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}





chuadanga_poradah(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="CDA";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





chuadanga_mirpur(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="CDA";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}





chuadanga_veramara(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="CDA";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}





chuadanga_pakshi(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="CDA";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}





chuadanga_ishardi(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="CDA";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





chuadanga_abdulpur(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

              int ch;
            char tname[]="723_SAGORDARI_EXPRESS";
            char tname1[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";




            int ft=375;
            int ft1=375;



            int cd=100;
            int cd1=100;



            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            ;






              char adg[]="CDA";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}




chuadanga_rajshahi(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

              int ch;
            char tname[]="723_SAGORDARI_EXPRESS";
            char tname1[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";




            int ft=375;
            int ft1=375;



            int cd=100;
            int cd1=100;



            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            ;






              char adg[]="CDA";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}







chuadanga_chatmohor(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="CDA";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}




chuadanga_boralb(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="CDA";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}



chuadanga_ullapara(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="CDA";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}




chuadanga_setu(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="CDA";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





chuadanga_tangail(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="CDA";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}







chuadanga_jaydevpur(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="CDA";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;





             default:
                printf(" oops, wrong input.");
                   break;
        }

}







chuadanga_dhaka(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="CDA";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;


             default:
                printf(" oops, wrong input.");
                   break;
        }

}






alamdanga_jessore(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";

            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="ADG";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;



             default:
                printf(" oops, wrong input.");
                   break;
        }

}





alamdanga_dorshona(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="ADG";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}




alamdanga_chuadanga(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="ADG";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;





             default:
                printf(" oops, wrong input.");
                   break;
        }

}





alamdanga_khulna(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="ADG";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}





alamdanga_poradah(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="ADG";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





alamdanga_mirpur(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="ADG";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}





alamdanga_veramara(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="ADG";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}





alamdanga_pakshi(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="ADG";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}





alamdanga_ishardi(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="ADG";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





alamdanga_abdulpur(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

              int ch;
            char tname[]="723_SAGORDARI_EXPRESS";
            char tname1[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";




            int ft=375;
            int ft1=375;



            int cd=100;
            int cd1=100;



            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            ;






              char adg[]="ADG";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}




alamdanga_rajshahi(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

              int ch;
            char tname[]="723_SAGORDARI_EXPRESS";
            char tname1[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";




            int ft=375;
            int ft1=375;



            int cd=100;
            int cd1=100;



            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            ;






              char adg[]="ADG";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}







alamdanga_chatmohor(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="ADG";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}




alamdanga_boralb(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="ADG";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}



alamdanga_ullapara(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="ADG";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}




alamdanga_setu(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="ADG";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





alamdanga_tangail(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="ADG";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}







alamdanga_jaydevpur(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="ADG";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;





             default:
                printf(" oops, wrong input.");
                   break;
        }

}







alamdanga_dhaka(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="ADG";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;


             default:
                printf(" oops, wrong input.");
                   break;
        }

}






poradah_jessore(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";

            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="PRD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;



             default:
                printf(" oops, wrong input.");
                   break;
        }

}





poradah_dorshona(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="PRD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}




poradah_chuadanga(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="PRD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;





             default:
                printf(" oops, wrong input.");
                   break;
        }

}





poradah_alamdanga(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="PRD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}





poradah_khulna(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="PRD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





poradah_mirpur(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="PRD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}





poradah_veramara(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="PRD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}





poradah_pakshi(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="PRD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}





poradah_ishardi(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="PRD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





poradah_abdulpur(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

              int ch;
            char tname[]="723_SAGORDARI_EXPRESS";
            char tname1[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";




            int ft=375;
            int ft1=375;



            int cd=100;
            int cd1=100;



            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            ;






              char adg[]="PRD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}




poradah_rajshahi(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

              int ch;
            char tname[]="723_SAGORDARI_EXPRESS";
            char tname1[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";




            int ft=375;
            int ft1=375;



            int cd=100;
            int cd1=100;



            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            ;






              char adg[]="PRD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}







poradah_chatmohor(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="PRD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}




poradah_boralb(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="PRD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}



poradah_ullapara(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="PRD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}




poradah_setu(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="PRD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





poradah_tangail(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="PRD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}







poradah_jaydevpur(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="PRD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;





             default:
                printf(" oops, wrong input.");
                   break;
        }

}







poradah_dhaka(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="PRD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;


             default:
                printf(" oops, wrong input.");
                   break;
        }

}






mirpur_jessore(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";

            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="MPR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;



             default:
                printf(" oops, wrong input.");
                   break;
        }

}





mirpur_dorshona(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="MPR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}




mirpur_chuadanga(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="MPR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;





             default:
                printf(" oops, wrong input.");
                   break;
        }

}





mirpur_alamdanga(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="MPR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}





mirpur_poradah(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="MPR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





mirpur_khulna(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="MPR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}





mirpur_veramara(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="MPR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}





mirpur_pakshi(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="MPR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}





mirpur_ishardi(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="MPR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





mirpur_abdulpur(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

              int ch;
            char tname[]="723_SAGORDARI_EXPRESS";
            char tname1[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";




            int ft=375;
            int ft1=375;



            int cd=100;
            int cd1=100;



            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            ;






              char adg[]="MPR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}




mirpur_rajshahi(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

              int ch;
            char tname[]="723_SAGORDARI_EXPRESS";
            char tname1[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";




            int ft=375;
            int ft1=375;



            int cd=100;
            int cd1=100;



            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            ;






              char adg[]="MPR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}







mirpur_chatmohor(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="MPR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}




mirpur_boralb(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="MPR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}



mirpur_ullapara(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="MPR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}




mirpur_setu(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="MPR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





mirpur_tangail(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="MPR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}







mirpur_jaydevpur(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="MPR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;





             default:
                printf(" oops, wrong input.");
                   break;
        }

}







mirpur_dhaka(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="MPR";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;


             default:
                printf(" oops, wrong input.");
                   break;
        }

}





veramara_jessore(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";

            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="VRM";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;



             default:
                printf(" oops, wrong input.");
                   break;
        }

}





veramara_dorshona(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="VRM";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}




veramara_chuadanga(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="VRM";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;





             default:
                printf(" oops, wrong input.");
                   break;
        }

}





veramara_alamdanga(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="VRM";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}





veramara_poradah(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="VRM";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





veramara_mirpur(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="VRM";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}





veramara_khulna(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="VRM";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}





veramara_pakshi(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="VRM";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}





veramara_ishardi(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="VRM";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





veramara_abdulpur(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

              int ch;
            char tname[]="723_SAGORDARI_EXPRESS";
            char tname1[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";




            int ft=375;
            int ft1=375;



            int cd=100;
            int cd1=100;



            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            ;






              char adg[]="VRM";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}




veramara_rajshahi(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

              int ch;
            char tname[]="723_SAGORDARI_EXPRESS";
            char tname1[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";




            int ft=375;
            int ft1=375;



            int cd=100;
            int cd1=100;



            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            ;






              char adg[]="VRM";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}







veramara_chatmohor(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="VRM";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}




veramara_boralb(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="VRM";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}



veramara_ullapara(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="VRM";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}




veramara_setu(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="VRM";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





veramara_tangail(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="VRM";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}







veramara_jaydevpur(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="VRM";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;





             default:
                printf(" oops, wrong input.");
                   break;
        }

}







veramara_dhaka(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="VRM";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;


             default:
                printf(" oops, wrong input.");
                   break;
        }

}






pakshi_jessore(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";

            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="PKS";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;



             default:
                printf(" oops, wrong input.");
                   break;
        }

}





pakshi_dorshona(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="PKS";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}




pakshi_chuadanga(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="PKS";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;





             default:
                printf(" oops, wrong input.");
                   break;
        }

}





pakshi_alamdanga(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="PKS";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}





pakshi_poradah(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="PKS";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





pakshi_mirpur(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="PKS";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}





pakshi_veramara(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="PKS";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}





pakshi_khulna(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="PKS";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}





pakshi_ishardi(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="PKS";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





pakshi_abdulpur(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

              int ch;
            char tname[]="723_SAGORDARI_EXPRESS";
            char tname1[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";




            int ft=375;
            int ft1=375;



            int cd=100;
            int cd1=100;



            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            ;






              char adg[]="PKS";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}




pakshi_rajshahi(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

              int ch;
            char tname[]="723_SAGORDARI_EXPRESS";
            char tname1[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";




            int ft=375;
            int ft1=375;



            int cd=100;
            int cd1=100;



            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            ;






              char adg[]="PKS";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}







pakshi_chatmohor(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="PKS";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}




pakshi_boralb(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="PKS";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}



pakshi_ullapara(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="PKS";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}




pakshi_setu(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="PKS";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





pakshi_tangail(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="PKS";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}







pakshi_jaydevpur(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="PKS";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;





             default:
                printf(" oops, wrong input.");
                   break;
        }

}







pakshi_dhaka(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="PKS";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;


             default:
                printf(" oops, wrong input.");
                   break;
        }

}





ishardi_jessore(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";

            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="ISD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;



             default:
                printf(" oops, wrong input.");
                   break;
        }

}





ishardi_dorshona(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="ISD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}




ishardi_chuadanga(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="ISD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;





             default:
                printf(" oops, wrong input.");
                   break;
        }

}





ishardi_alamdanga(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="ISD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}





ishardi_poradah(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="ISD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





ishardi_mirpur(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="ISD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}





ishardi_veramara(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="ISD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}





ishardi_pakshi(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="ISD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;








             default:
                printf(" oops, wrong input.");
                   break;
        }

}





ishardi_khulna(char start[20],char dstation[20],char date[20])
{
     data_khul_isho();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";
            char tname2[]="723_SAGORDARI_EXPRESS";
            char tname3[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";
            char stime2[]="12:23";
            char stime3[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";
            char dtime3[]="12:00";



            int ft=375;
            int ft1=375;
            int ft2=375;
            int ft3=375;



            int cd=100;
            int cd1=100;
            int cd2=100;
            int cd3=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            char coachname2[]="GA";
            char coachname3[]="GHA";






              char adg[]="ISD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;

             case 3:

                system("cls");
                  ticket_counter(start,dstation,date,adg,tname2,ft2,cd2,stime2,dtime2,coachname2,tvat,meal);
                   break;

             case 4:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname3,ft3,cd3,stime3,dtime3,coachname3,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





ishardi_abdulpur(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

              int ch;
            char tname[]="723_SAGORDARI_EXPRESS";
            char tname1[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";




            int ft=375;
            int ft1=375;



            int cd=100;
            int cd1=100;



            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            ;






              char adg[]="ISD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}




ishardi_rajshahi(char start[20],char dstation[20],char date[20])
{
     data_khul_raj();

              int ch;
            char tname[]="723_SAGORDARI_EXPRESS";
            char tname1[]="723_KAPOTAKHSHA_EXPRESS";




            char stime[]="12:23";
            char stime1[]="12:23";



            char dtime[]="12:00";
            char dtime1[]="12:00";




            int ft=375;
            int ft1=375;



            int cd=100;
            int cd1=100;



            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";
            ;






              char adg[]="ISD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}







ishardi_chatmohor(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="ISD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;









             default:
                printf(" oops, wrong input.");
                   break;
        }

}




ishardi_boralb(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="ISD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}



ishardi_ullapara(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="ISD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}




ishardi_setu(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="ISD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;







             default:
                printf(" oops, wrong input.");
                   break;
        }

}





ishardi_tangail(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="ISD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;






             default:
                printf(" oops, wrong input.");
                   break;
        }

}







ishardi_jaydevpur(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="ISD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


             case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;





             default:
                printf(" oops, wrong input.");
                   break;
        }

}







ishardi_dhaka(char start[20],char dstation[20],char date[20])
{
     data_khul_dha();

              int ch;
            char tname[]="729_SUNDARBAN_EXPRESS";
            char tname1[]="720_CHITRA_EXPRESS";



            char stime[]="12:23";
            char stime1[]="12:23";


            char dtime[]="12:00";
            char dtime1[]="12:00";


            int ft=375;
            int ft1=375;


            int cd=100;
            int cd1=100;


            int tvat=100;
            int meal=150;

            char coachname[]="KA";
            char coachname1[]="KHA";







              char adg[]="ISD";
              printf("\n\n                                                            Choose your Train to purchase the Ticket, press 0 for back           \n");
              printf("\n                                                                                Enter here......");
             scanf("%d",&ch);
              switch(ch)
              {
              case 0:
                  system("cls");
                  User();
                  break;


            case 1:

                 system("cls");
                  ticket_counter(start,dstation,date,adg,tname,ft,cd,stime,dtime,coachname,tvat,meal);
                   break;

             case 2:

                   system("cls");
                  ticket_counter(start,dstation,date,adg,tname1,ft1,cd1,stime1,dtime1,coachname1,tvat,meal);
                   break;


             default:
                printf(" oops, wrong input.");
                   break;
        }

}



data_dh_chat()
{
    printf("\n\n\n                                                                  AVAILABLE TRAIN                                              \n");


    printf("\n                             >>                                        1. DHUMKETU EXPRESS (DHAKA --> RAJSHAHI)                          \n\n");
    printf("                             >>                                        2. SILKCITY EXPRESS (DHAKA --> RAJSHAHI)                             \n\n");
    printf("                             >>                                        3. SUNDARBAN EXPRESS (DHAKA --> KHULNA)                        \n\n");
    printf("                             >>                                        4. PADMA EXPRESS (DHAKA --> RAJSHAHI)                        \n\n");
    printf("                             >>                                        5. CHITRA EXPRESS (DHAKA --> KHULNA)                        \n\n");

}




data_dh_raj()
{
    printf("\n\n\n                                                                  AVAILABLE TRAIN                                              \n");


    printf("\n                             >>                                        1. DHUMKETU EXPRESS (DHAKA --> RAJSHAHI)                          \n\n");
    printf("                             >>                                        2. SILKCITY EXPRESS (DHAKA --> RAJSHAHI)                             \n\n");
    printf("                             >>                                        3. BONOLATA EXPRESS (DHAKA --> RAJSHAHI)                        \n\n");
    printf("                             >>                                        4. PADMA EXPRESS (DHAKA --> RAJSHAHI)                        \n\n");


}



data_one()

{

    printf("\n\n\n                                                                  AVAILABLE TRAIN                                              \n");


    printf("\n                             >>                                        1. SUNDARBAN EXPRESS (DHAKA --> KHULNA)                          \n\n");
    printf("                             >>                                        2. CHITRA EXPRESS (DHAKA --> KHULNA)                             \n\n");
    printf("                             >>                                        3. BENAPOL EXPRESS (DHAKA --> KHULNA)                        \n\n");

}


data_khul_isho()
{
    printf("\n\n\n                                                                  AVAILABLE TRAIN                                              \n");


    printf("\n                             >>                                        1. SUNDARBAN EXPRESS (KHULNA --> DHAKA)                          \n\n");
    printf("                             >>                                        2. CHITRA EXPRESS (KHULNA --> DHAKA)                             \n\n");
    printf("                             >>                                        3. SAGORDARI EXPRESS (KHULNA --> RAJSHAHI)                        \n\n");
    printf("                             >>                                        4. KAPOTAKHSHA EXPRESS (KHULNA --> RAJSHAHI)                        \n\n");


}


data_khul_raj()
{
     printf("\n\n\n                                                                  AVAILABLE TRAIN                                              \n");
     printf("\n                             >>                                        1. SAGORDARI EXPRESS (KHULNA --> RAJSHAHI)                        \n\n");
     printf("                             >>                                        2. KAPOTAKHSHA EXPRESS (KHULNA --> RAJSHAHI)                        \n\n");

}


data_khul_dha()
{
    printf("\n\n\n                                                                  AVAILABLE TRAIN                                              \n");


    printf("\n                             >>                                        1. SUNDARBAN EXPRESS (KHULNA --> DHAKA)                          \n\n");
    printf("                             >>                                        2. CHITRA EXPRESS (KHULNA --> DHAKA)                             \n\n");
}


data_raj_abdul()
{
    printf("\n\n\n                                                                  AVAILABLE TRAIN                                              \n");


    printf("\n                             >>                                        1. DHUMKETU EXPRESS (DHAKA --> RAJSHAHI)                          \n\n");
    printf("                             >>                                        2. SILKCITY EXPRESS (DHAKA --> RAJSHAHI)                             \n\n");
    printf("                             >>                                        3. SHAGORDARI EXPRESS (DHAKA --> RAJSHAHI)                        \n\n");
    printf("                             >>                                        4. PADMA EXPRESS (DHAKA --> RAJSHAHI)                        \n\n");


}




user_ticket_purchass()
{

  char start[20],dstation[20],date[20];
   char dtime[]="12:00";
            char dtime1[]="12:00";
            char dtime2[]="12:00";



    printf("\n\n\n\t\t\t                                                        [  PURCHASE A TICKET  ]                                \n\n");
    printf("PURRCHASETICKETPURRCHASETICKETPURRCHASETICKETPURRCHASETICKETPURRCHASETICKETPURRCHASETICKETPURRCHASETICKETPURRCHASETICKETPURRCHASETICKETPURRCHASETICKETPURRCHASETICKETPUR");
    printf("\n\n\n\n\n");
    printf("\t\t\t                                                   [  N.B. TYPE IN CAPITAL LETTERS  ]                                \n\n");
    printf("                            <>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                            >>                                                                                                           >>\n");
    printf("                            >>                                                                                                           >>\n");





    printf("\n                            >>                                            CHOOSE START STATION : DHAKA, KHULNA, RAJSHAHI, JESSORE, DARSHONA_HALT, CHUADANGA, ALAMDANGA");
    printf("\n                            >>                                                                   PORADAH, MIRPUR, VERAMARA, PAKSHI, ISHARDI ");

    printf("\n\n                            >>                                            ENTER THE START STATION : ");
    scanf("%s",start);

    printf("\n                            >>                                            CHOOSE DESTINATION STATION : KHULNA, JESSORE, DARSHONA_HALT, CHUADANGA, ALAMDANGA , PORADAH ");
    printf("\n                            >>                                                                         MIRPUR, VERAMARA, PAKSHI, ISHARDI, ISHARDI_BYPASS,  RAJSHAHI  ");
    printf("\n                            >>                                                                         ABDULPUR,CHATMOHOR, BORAL_BRIDGE, ULLAPARA, B.SETU_EAST, TANGAIL ");
    printf("\n                            >>                                                                         JAYDEVPUR,  ");

    printf("\n\n                            >>                                            ENTER THE DESTINATION STATION : ");
    scanf("%s",dstation );

    printf("\n                            >>                                            ENTER THE DATE (DD-MM-YY) : ");
    scanf("%s",date);



    if (strcmp(start,"DHAKA")==0)
    {
        if(strcmp(dstation,"KHULNA")==0)
        {

            dhaka_khulna(start,dstation,date);

             }



        else if(strcmp(dstation,"ALAMDANGA")==0)
        {
         dhaka_alamdanga(start,dstation,date);
         }




       else if(strcmp(dstation,"JESSORE")==0)
        {
           dhaka_jessore(start,dstation,date);
        }




       else if(strcmp(dstation,"DARSHONA_HALT")==0)
        {
        //    data_one();
        dhaka_dorshona(start,dstation,date);

          }




       else if(strcmp(dstation,"CHUADANGA")==0)
        {
           dhaka_chuadanga(start,dstation,date);
          }




       else if(strcmp(dstation,"PORADAH")==0)
        {
         dhaka_poradah(start,dstation,date);
          }




       else if(strcmp(dstation,"MIRPUR")==0)
        {
            dhaka_mirpur(start,dstation,date);

          }




       else if(strcmp(dstation,"VERAMARA")==0)
        {
            dhaka_veramara(start,dstation,date);

          }




       else if(strcmp(dstation,"PAKSHI")==0)
        {
           dhaka_pakshi(start,dstation,date);

       }


       else if(strcmp(dstation,"ISHARDI")==0)
        {
             dhaka_ishshordi(start,dstation,date); // START HERE

       }


       else if(strcmp(dstation,"RAJSHAHI")==0)
        {
             dhaka_rajshahi(start,dstation,date);

       }

       else if(strcmp(dstation,"ABDULPUR")==0)
        {
             dhaka_abdulpur(start,dstation,date);

       }
       //FFFFFFFFFFFFFFFFFFF


       else if(strcmp(dstation,"ISHARDI_BYPASS")==0)
        {
             dhaka_ishshordi_by(start,dstation,date);

       }

       else if(strcmp(dstation,"CHATMOHOR")==0)
        {
             dhaka_chatmohor(start,dstation,date);

       }

       else if(strcmp(dstation,"BORAL_BRIDGE")==0)
        {
             dhaka_bbridge(start,dstation,date);

       }

       else if(strcmp(dstation,"ULLAPARA")==0)
        {
             dhaka_ullapara(start,dstation,date);

       }

       else if(strcmp(dstation,"B.SETU_EAST")==0)
        {
             dhaka_b_setu_east(start,dstation,date);

       }

       else if(strcmp(dstation,"TANGAIL")==0)
        {
             dhaka_tangail(start,dstation,date);

       }

       else if(strcmp(dstation,"JAYDEVPUR")==0)
        {
             dhaka_joydevpur(start,dstation,date);

        }



       else
       {
           system("cls");
           printf("\n\n\twrong destinaton station input");
           printf("\n\tpress any key to try again...");
           getch();
           system("cls");
           user_ticket_purchass();
       }
       //from dhaka

    }

     else if(strcmp(start,"KHULNA")==0)
     {
         if(strcmp(dstation,"JESSORE")==0)
          {
           khulna_jessore(start,dstation,date);

          }
          else if(strcmp(dstation,"DARSHONA_HALT")==0)
          {
              khulna_dorshona(start,dstation,date);
           }

            else if(strcmp(dstation,"CHUADANGA")==0)
          {
              khulna_chuadanga(start,dstation,date);
           }

            else if(strcmp(dstation,"ALAMDANGA")==0)
          {
              khulna_alamdanga(start,dstation,date);
           }

            else if(strcmp(dstation,"PORADAH")==0)
          {
              khulna_poradah(start,dstation,date);
           }

            else if(strcmp(dstation,"MIRPUR")==0)
          {
              khulna_mirpur(start,dstation,date);
           }

            else if(strcmp(dstation,"VERAMARA")==0)
          {
              khulna_veramara(start,dstation,date);
           }

            else if(strcmp(dstation,"PAKSHI")==0)
          {
              khulna_pakshi(start,dstation,date);
           }

            else if(strcmp(dstation,"ISHARDI")==0)
          {
              khulna_ishardi(start,dstation,date);//    KHULNA TO ISHARDI COMMON TRAIN
           }

            else if(strcmp(dstation,"ABDULPUR")==0)
          {
              khulna_abdulpur(start,dstation,date);
           }

            else if(strcmp(dstation,"RAJSHAHI")==0)
          {
              khulna_rajshahi(start,dstation,date); // KHUL TO RAJ
           }


            else if(strcmp(dstation,"CHATMOHOR")==0)
          {
              khulna_chatmohor(start,dstation,date);
           }


            else if(strcmp(dstation,"BORAL_BRIDGE")==0)
          {
              khulna_boralb(start,dstation,date);
           }


            else if(strcmp(dstation,"ULLAPARA")==0)
          {
              khulna_ullapara(start,dstation,date);
           }


            else if(strcmp(dstation,"B.SETU_EAST")==0)
          {
              khulna_setu(start,dstation,date);
           }


            else if(strcmp(dstation,"TANGAIL")==0)
          {
              khulna_tangail(start,dstation,date);
           }

            else if(strcmp(dstation,"JAYDEVPUR")==0)
          {
              khulna_jaydevpur(start,dstation,date);
           }


            else if(strcmp(dstation,"DHAKA")==0)
          {
              khulna_dhaka(start,dstation,date);
           }


            else
          { system("cls");
           printf("\n\n\twrong destinaton station input");
           printf("\n\tpress any key to try again...");
           getch();
           system("cls");
           user_ticket_purchass();
            }


     }

     // FROM RAJSHAHI :::::::

      else if(strcmp(start,"RAJSHAHI")==0)
     {
         if(strcmp(dstation,"JESSORE")==0)
          {
           rajshahi_jessore(start,dstation,date);

          }
          else if(strcmp(dstation,"DARSHONA_HALT")==0)
          {
              rajshahi_dorshona(start,dstation,date);
           }

            else if(strcmp(dstation,"CHUADANGA")==0)
          {
              rajshahi_chuadanga(start,dstation,date);
           }

            else if(strcmp(dstation,"ALAMDANGA")==0)
          {
              rajshahi_alamdanga(start,dstation,date);
           }

            else if(strcmp(dstation,"PORADAH")==0)
          {
              rajshahi_poradah(start,dstation,date);
           }

            else if(strcmp(dstation,"MIRPUR")==0)
          {
              rajshahi_mirpur(start,dstation,date);
           }

            else if(strcmp(dstation,"VERAMARA")==0)
          {
             rajshahi_veramara(start,dstation,date);
           }

            else if(strcmp(dstation,"PAKSHI")==0)
          {
            rajshahi_pakshi(start,dstation,date);
           }

            else if(strcmp(dstation,"ISHARDI")==0)
          {
              rajshahi_ishardi(start,dstation,date);//    KHULNA TO ISHARDI COMMON TRAIN
           }

            else if(strcmp(dstation,"ABDULPUR")==0)
          {
              rajshahi_abdulpur(start,dstation,date);
           }

            else if(strcmp(dstation,"KHULNA")==0)
          {
              rajshahi_ishardi_bypass(start,dstation,date); // KHUL TO RAJ
           }


            else if(strcmp(dstation,"CHATMOHOR")==0)
          {
              rajshahi_chatmohor(start,dstation,date);
           }


            else if(strcmp(dstation,"BORAL_BRIDGE")==0)
          {
             rajshahi_boralb(start,dstation,date);
           }


            else if(strcmp(dstation,"ULLAPARA")==0)
          {
             rajshahi_ullapara(start,dstation,date);
           }


            else if(strcmp(dstation,"B.SETU_EAST")==0)
          {
              rajshahi_setu(start,dstation,date);
           }


            else if(strcmp(dstation,"TANGAIL")==0)
          {
             rajshahi_tangail(start,dstation,date);
           }

            else if(strcmp(dstation,"JAYDEVPUR")==0)
          {
              rajshahi_jaydevpur(start,dstation,date);
           }


            else if(strcmp(dstation,"DHAKA")==0)
          {
              rajshahi_dhaka(start,dstation,date);
           }


            else
          { system("cls");
           printf("\n\n\twrong destinaton station input");
           printf("\n\tpress any key to try again...");
           getch();
           system("cls");
           user_ticket_purchass();
            }

     }
                                                    //START JESSORE..........
      else if(strcmp(start,"JESSORE")==0)
     {
         if(strcmp(dstation,"RAJSHAHI")==0)
          {
           jessore_rajshahi(start,dstation,date);

          }
          else if(strcmp(dstation,"DARSHONA_HALT")==0)
          {
              jessore_dorshona(start,dstation,date);
           }

            else if(strcmp(dstation,"CHUADANGA")==0)
          {
              jessore_chuadanga(start,dstation,date);
           }

            else if(strcmp(dstation,"ALAMDANGA")==0)
          {
              jessore_alamdanga(start,dstation,date);
           }

            else if(strcmp(dstation,"PORADAH")==0)
          {
              jessore_poradah(start,dstation,date);
           }

            else if(strcmp(dstation,"MIRPUR")==0)
          {
              jessore_mirpur(start,dstation,date);
           }

            else if(strcmp(dstation,"VERAMARA")==0)
          {
             jessore_veramara(start,dstation,date);
           }

            else if(strcmp(dstation,"PAKSHI")==0)
          {
            jessore_pakshi(start,dstation,date);
           }

            else if(strcmp(dstation,"ISHARDI")==0)
          {
              jessore_ishardi(start,dstation,date);//    KHULNA TO ISHARDI COMMON TRAIN
           }

            else if(strcmp(dstation,"ABDULPUR")==0)
          {
              jessore_abdulpur(start,dstation,date);
           }

            else if(strcmp(dstation,"KHULNA")==0)
          {
              jessore_khulna(start,dstation,date); // KHUL TO RAJ
           }


            else if(strcmp(dstation,"CHATMOHOR")==0)
          {
              jessore_chatmohor(start,dstation,date);
           }


            else if(strcmp(dstation,"BORAL_BRIDGE")==0)
          {
             jessore_boralb(start,dstation,date);
           }


            else if(strcmp(dstation,"ULLAPARA")==0)
          {
             jessore_ullapara(start,dstation,date);
           }


            else if(strcmp(dstation,"B.SETU_EAST")==0)
          {
              jessore_setu(start,dstation,date);
           }


            else if(strcmp(dstation,"TANGAIL")==0)
          {
             jessore_tangail(start,dstation,date);
           }

            else if(strcmp(dstation,"JAYDEVPUR")==0)
          {
              jessore_jaydevpur(start,dstation,date);
           }


            else if(strcmp(dstation,"DHAKA")==0)
          {
              jessore_dhaka(start,dstation,date);
           }

     }
     //DORSHONA+++

      else if(strcmp(start,"DARSHONA_HALT")==0)
     {
         if(strcmp(dstation,"JESSORE")==0)
          {
           dorshona_jessore(start,dstation,date);

          }
          else if(strcmp(dstation,"KHULNA")==0)
          {
              dorshona_khulna(start,dstation,date);
           }

            else if(strcmp(dstation,"CHUADANGA")==0)
          {
              dorshona_chuadanga(start,dstation,date);
           }

            else if(strcmp(dstation,"ALAMDANGA")==0)
          {
              dorshona_alamdanga(start,dstation,date);
           }

            else if(strcmp(dstation,"PORADAH")==0)
          {
              dorshona_poradah(start,dstation,date);
           }

            else if(strcmp(dstation,"MIRPUR")==0)
          {
              dorshona_mirpur(start,dstation,date);
           }

            else if(strcmp(dstation,"VERAMARA")==0)
          {
              dorshona_veramara(start,dstation,date);
           }

            else if(strcmp(dstation,"PAKSHI")==0)
          {
              dorshona_pakshi(start,dstation,date);
           }

            else if(strcmp(dstation,"ISHARDI")==0)
          {
              dorshona_ishardi(start,dstation,date);//    KHULNA TO ISHARDI COMMON TRAIN
           }

            else if(strcmp(dstation,"ABDULPUR")==0)
          {
             dorshona_abdulpur(start,dstation,date);
           }

            else if(strcmp(dstation,"RAJSHAHI")==0)
          {
              dorshona_rajshahi(start,dstation,date); // KHUL TO RAJ
           }


            else if(strcmp(dstation,"CHATMOHOR")==0)
          {
              dorshona_chatmohor(start,dstation,date);
           }


            else if(strcmp(dstation,"BORAL_BRIDGE")==0)
          {
              dorshona_boralb(start,dstation,date);
           }


            else if(strcmp(dstation,"ULLAPARA")==0)
          {
              dorshona_ullapara(start,dstation,date);
           }


            else if(strcmp(dstation,"B.SETU_EAST")==0)
          {
              dorshona_setu(start,dstation,date);
           }


            else if(strcmp(dstation,"TANGAIL")==0)
          {
              dorshona_tangail(start,dstation,date);
           }

            else if(strcmp(dstation,"JAYDEVPUR")==0)
          {
              dorshona_jaydevpur(start,dstation,date);
           }


            else if(strcmp(dstation,"DHAKA")==0)
          {
              dorshona_dhaka(start,dstation,date);
           }


            else
          { system("cls");
           printf("\n\n\twrong destinaton station input");
           printf("\n\tpress any key to try again...");
           getch();
           system("cls");
           user_ticket_purchass();
            }


     }


      else if(strcmp(start,"CHUADANGA")==0)
     {
         if(strcmp(dstation,"JESSORE")==0)
          {
           chuadanga_jessore(start,dstation,date);

          }
          else if(strcmp(dstation,"DARSHONA_HALT")==0)
          {
             chuadanga_dorshona(start,dstation,date);
           }

            else if(strcmp(dstation,"KHULNA")==0)
          {
              chuadanga_khulna(start,dstation,date);
           }

            else if(strcmp(dstation,"ALAMDANGA")==0)
          {
              chuadanga_alamdanga(start,dstation,date);
           }

            else if(strcmp(dstation,"PORADAH")==0)
          {
              chuadanga_poradah(start,dstation,date);
           }

            else if(strcmp(dstation,"MIRPUR")==0)
          {
              chuadanga_mirpur(start,dstation,date);
           }

            else if(strcmp(dstation,"VERAMARA")==0)
          {
              chuadanga_veramara(start,dstation,date);
           }

            else if(strcmp(dstation,"PAKSHI")==0)
          {
              chuadanga_pakshi(start,dstation,date);
           }

            else if(strcmp(dstation,"ISHARDI")==0)
          {
              chuadanga_ishardi(start,dstation,date);//    KHULNA TO ISHARDI COMMON TRAIN
           }

            else if(strcmp(dstation,"ABDULPUR")==0)
          {
              chuadanga_abdulpur(start,dstation,date);
           }

            else if(strcmp(dstation,"RAJSHAHI")==0)
          {
              chuadanga_rajshahi(start,dstation,date); // KHUL TO RAJ
           }


            else if(strcmp(dstation,"CHATMOHOR")==0)
          {
              chuadanga_chatmohor(start,dstation,date);
           }


            else if(strcmp(dstation,"BORAL_BRIDGE")==0)
          {
              chuadanga_boralb(start,dstation,date);
           }


            else if(strcmp(dstation,"ULLAPARA")==0)
          {
              chuadanga_ullapara(start,dstation,date);
           }


            else if(strcmp(dstation,"B.SETU_EAST")==0)
          {
              chuadanga_setu(start,dstation,date);
           }


            else if(strcmp(dstation,"TANGAIL")==0)
          {
              chuadanga_tangail(start,dstation,date);
           }

            else if(strcmp(dstation,"JAYDEVPUR")==0)
          {
             chuadanga_jaydevpur(start,dstation,date);
           }


            else if(strcmp(dstation,"DHAKA")==0)
          {
              chuadanga_dhaka(start,dstation,date);
           }


            else
          { system("cls");
           printf("\n\n\twrong destinaton station input");
           printf("\n\tpress any key to try again...");
           getch();
           system("cls");
           user_ticket_purchass();
            }


     }



      else if(strcmp(start,"ALAMDANGA")==0)
     {
         if(strcmp(dstation,"JESSORE")==0)
          {
           alamdanga_jessore(start,dstation,date);

          }
          else if(strcmp(dstation,"DARSHONA_HALT")==0)
          {
              alamdanga_dorshona(start,dstation,date);
           }

            else if(strcmp(dstation,"CHUADANGA")==0)
          {
              alamdanga_chuadanga(start,dstation,date);
           }

            else if(strcmp(dstation,"KHULNA")==0)
          {
              alamdanga_khulna(start,dstation,date);
           }

            else if(strcmp(dstation,"PORADAH")==0)
          {
              alamdanga_poradah(start,dstation,date);
           }

            else if(strcmp(dstation,"MIRPUR")==0)
          {
              alamdanga_mirpur(start,dstation,date);
           }

            else if(strcmp(dstation,"VERAMARA")==0)
          {
              alamdanga_veramara(start,dstation,date);
           }

            else if(strcmp(dstation,"PAKSHI")==0)
          {
              alamdanga_pakshi(start,dstation,date);
           }

            else if(strcmp(dstation,"ISHARDI")==0)
          {
              alamdanga_ishardi(start,dstation,date);//    KHULNA TO ISHARDI COMMON TRAIN
           }

            else if(strcmp(dstation,"ABDULPUR")==0)
          {
              alamdanga_abdulpur(start,dstation,date);
           }

            else if(strcmp(dstation,"RAJSHAHI")==0)
          {
              alamdanga_rajshahi(start,dstation,date); // KHUL TO RAJ
           }


            else if(strcmp(dstation,"CHATMOHOR")==0)
          {
              alamdanga_chatmohor(start,dstation,date);
           }


            else if(strcmp(dstation,"BORAL_BRIDGE")==0)
          {
              alamdanga_boralb(start,dstation,date);
           }


            else if(strcmp(dstation,"ULLAPARA")==0)
          {
              alamdanga_ullapara(start,dstation,date);
           }


            else if(strcmp(dstation,"B.SETU_EAST")==0)
          {
             alamdanga_setu(start,dstation,date);
           }


            else if(strcmp(dstation,"TANGAIL")==0)
          {
              alamdanga_tangail(start,dstation,date);
           }

            else if(strcmp(dstation,"JAYDEVPUR")==0)
          {
              alamdanga_jaydevpur(start,dstation,date);
           }


            else if(strcmp(dstation,"DHAKA")==0)
          {
              alamdanga_dhaka(start,dstation,date);
           }


            else
          { system("cls");
           printf("\n\n\twrong destinaton station input");
           printf("\n\tpress any key to try again...");
           getch();
           system("cls");
           user_ticket_purchass();
            }


     }




      else if(strcmp(start,"PORADAH")==0)
     {
         if(strcmp(dstation,"JESSORE")==0)
          {
           poradah_jessore(start,dstation,date);

          }
          else if(strcmp(dstation,"DARSHONA_HALT")==0)
          {
              poradah_dorshona(start,dstation,date);
           }

            else if(strcmp(dstation,"CHUADANGA")==0)
          {
              poradah_chuadanga(start,dstation,date);
           }

            else if(strcmp(dstation,"ALAMDANGA")==0)
          {
              poradah_alamdanga(start,dstation,date);
           }

            else if(strcmp(dstation,"KHULNA")==0)
          {
              poradah_khulna(start,dstation,date);
           }

            else if(strcmp(dstation,"MIRPUR")==0)
          {
              poradah_mirpur(start,dstation,date);
           }

            else if(strcmp(dstation,"VERAMARA")==0)
          {
             poradah_veramara(start,dstation,date);
           }

            else if(strcmp(dstation,"PAKSHI")==0)
          {
             poradah_pakshi(start,dstation,date);
           }

            else if(strcmp(dstation,"ISHARDI")==0)
          {
              poradah_ishardi(start,dstation,date);//    KHULNA TO ISHARDI COMMON TRAIN
           }

            else if(strcmp(dstation,"ABDULPUR")==0)
          {
              poradah_abdulpur(start,dstation,date);
           }

            else if(strcmp(dstation,"RAJSHAHI")==0)
          {
              poradah_rajshahi(start,dstation,date); // KHUL TO RAJ
           }


            else if(strcmp(dstation,"CHATMOHOR")==0)
          {
              poradah_chatmohor(start,dstation,date);
           }


            else if(strcmp(dstation,"BORAL_BRIDGE")==0)
          {
              poradah_boralb(start,dstation,date);
           }


            else if(strcmp(dstation,"ULLAPARA")==0)
          {
              poradah_ullapara(start,dstation,date);
           }


            else if(strcmp(dstation,"B.SETU_EAST")==0)
          {
              poradah_setu(start,dstation,date);
           }


            else if(strcmp(dstation,"TANGAIL")==0)
          {
              poradah_tangail(start,dstation,date);
           }

            else if(strcmp(dstation,"JAYDEVPUR")==0)
          {
              poradah_jaydevpur(start,dstation,date);
           }


            else if(strcmp(dstation,"DHAKA")==0)
          {
              poradah_dhaka(start,dstation,date);
           }


            else
          { system("cls");
           printf("\n\n\twrong destinaton station input");
           printf("\n\tpress any key to try again...");
           getch();
           system("cls");
           user_ticket_purchass();
            }


     }




      else if(strcmp(start,"MIRPUR")==0)
     {
         if(strcmp(dstation,"JESSORE")==0)
          {
           mirpur_jessore(start,dstation,date);

          }
          else if(strcmp(dstation,"DARSHONA_HALT")==0)
          {
              mirpur_dorshona(start,dstation,date);
           }

            else if(strcmp(dstation,"CHUADANGA")==0)
          {
              mirpur_chuadanga(start,dstation,date);
           }

            else if(strcmp(dstation,"ALAMDANGA")==0)
          {
              mirpur_alamdanga(start,dstation,date);
           }

            else if(strcmp(dstation,"PORADAH")==0)
          {
              mirpur_poradah(start,dstation,date);
           }

            else if(strcmp(dstation,"KHULNA")==0)
          {
              mirpur_khulna(start,dstation,date);
           }

            else if(strcmp(dstation,"VERAMARA")==0)
          {
              mirpur_veramara(start,dstation,date);
           }

            else if(strcmp(dstation,"PAKSHI")==0)
          {
              mirpur_pakshi(start,dstation,date);
           }

            else if(strcmp(dstation,"ISHARDI")==0)
          {
              mirpur_ishardi(start,dstation,date);//    KHULNA TO ISHARDI COMMON TRAIN
           }

            else if(strcmp(dstation,"ABDULPUR")==0)
          {
              mirpur_abdulpur(start,dstation,date);
           }

            else if(strcmp(dstation,"RAJSHAHI")==0)
          {
              mirpur_rajshahi(start,dstation,date); // KHUL TO RAJ
           }


            else if(strcmp(dstation,"CHATMOHOR")==0)
          {
              mirpur_chatmohor(start,dstation,date);
           }


            else if(strcmp(dstation,"BORAL_BRIDGE")==0)
          {
              mirpur_boralb(start,dstation,date);
           }


            else if(strcmp(dstation,"ULLAPARA")==0)
          {
              mirpur_ullapara(start,dstation,date);
           }


            else if(strcmp(dstation,"B.SETU_EAST")==0)
          {
              mirpur_setu(start,dstation,date);
           }


            else if(strcmp(dstation,"TANGAIL")==0)
          {
              mirpur_tangail(start,dstation,date);
           }

            else if(strcmp(dstation,"JAYDEVPUR")==0)
          {
              mirpur_jaydevpur(start,dstation,date);
           }


            else if(strcmp(dstation,"DHAKA")==0)
          {
              mirpur_dhaka(start,dstation,date);
           }


            else
          { system("cls");
           printf("\n\n\twrong destinaton station input");
           printf("\n\tpress any key to try again...");
           getch();
           system("cls");
           user_ticket_purchass();
            }


     }




      else if(strcmp(start,"VERAMARA")==0)
     {
         if(strcmp(dstation,"JESSORE")==0)
          {
           veramara_jessore(start,dstation,date);

          }
          else if(strcmp(dstation,"DARSHONA_HALT")==0)
          {
              veramara_dorshona(start,dstation,date);
           }

            else if(strcmp(dstation,"CHUADANGA")==0)
          {
              veramara_chuadanga(start,dstation,date);
           }

            else if(strcmp(dstation,"ALAMDANGA")==0)
          {
              veramara_alamdanga(start,dstation,date);
           }

            else if(strcmp(dstation,"PORADAH")==0)
          {
              veramara_poradah(start,dstation,date);
           }

            else if(strcmp(dstation,"MIRPUR")==0)
          {
              veramara_mirpur(start,dstation,date);
           }

            else if(strcmp(dstation,"KHULNA")==0)
          {
              veramara_khulna(start,dstation,date);
           }

            else if(strcmp(dstation,"PAKSHI")==0)
          {
             veramara_pakshi(start,dstation,date);
           }

            else if(strcmp(dstation,"ISHARDI")==0)
          {
              veramara_ishardi(start,dstation,date);//    KHULNA TO ISHARDI COMMON TRAIN
           }

            else if(strcmp(dstation,"ABDULPUR")==0)
          {
              veramara_abdulpur(start,dstation,date);
           }

            else if(strcmp(dstation,"RAJSHAHI")==0)
          {
             veramara_rajshahi(start,dstation,date); // KHUL TO RAJ
           }


            else if(strcmp(dstation,"CHATMOHOR")==0)
          {
              veramara_chatmohor(start,dstation,date);
           }


            else if(strcmp(dstation,"BORAL_BRIDGE")==0)
          {
              veramara_boralb(start,dstation,date);
           }


            else if(strcmp(dstation,"ULLAPARA")==0)
          {
             veramara_ullapara(start,dstation,date);
           }


            else if(strcmp(dstation,"B.SETU_EAST")==0)
          {
              veramara_setu(start,dstation,date);
           }


            else if(strcmp(dstation,"TANGAIL")==0)
          {
              veramara_tangail(start,dstation,date);
           }

            else if(strcmp(dstation,"JAYDEVPUR")==0)
          {
              veramara_jaydevpur(start,dstation,date);
           }


            else if(strcmp(dstation,"DHAKA")==0)
          {
              veramara_dhaka(start,dstation,date);
           }


            else
          { system("cls");
           printf("\n\n\twrong destinaton station input");
           printf("\n\tpress any key to try again...");
           getch();
           system("cls");
           user_ticket_purchass();
            }


     }




      else if(strcmp(start,"PAKSHI")==0)
     {
         if(strcmp(dstation,"JESSORE")==0)
          {
           pakshi_jessore(start,dstation,date);

          }
          else if(strcmp(dstation,"DARSHONA_HALT")==0)
          {
             pakshi_dorshona(start,dstation,date);
           }

            else if(strcmp(dstation,"CHUADANGA")==0)
          {
              pakshi_chuadanga(start,dstation,date);
           }

            else if(strcmp(dstation,"ALAMDANGA")==0)
          {
              pakshi_alamdanga(start,dstation,date);
           }

            else if(strcmp(dstation,"PORADAH")==0)
          {
              pakshi_poradah(start,dstation,date);
           }

            else if(strcmp(dstation,"MIRPUR")==0)
          {
              pakshi_mirpur(start,dstation,date);
           }

            else if(strcmp(dstation,"VERAMARA")==0)
          {
              pakshi_veramara(start,dstation,date);
           }

            else if(strcmp(dstation,"KHULNA")==0)
          {
              pakshi_khulna(start,dstation,date);
           }

            else if(strcmp(dstation,"ISHARDI")==0)
          {
              pakshi_ishardi(start,dstation,date);//    KHULNA TO ISHARDI COMMON TRAIN
           }

            else if(strcmp(dstation,"ABDULPUR")==0)
          {
              pakshi_abdulpur(start,dstation,date);
           }

            else if(strcmp(dstation,"RAJSHAHI")==0)
          {
              pakshi_rajshahi(start,dstation,date); // KHUL TO RAJ
           }


            else if(strcmp(dstation,"CHATMOHOR")==0)
          {
              pakshi_chatmohor(start,dstation,date);
           }


            else if(strcmp(dstation,"BORAL_BRIDGE")==0)
          {
              pakshi_boralb(start,dstation,date);
           }


            else if(strcmp(dstation,"ULLAPARA")==0)
          {
              pakshi_ullapara(start,dstation,date);
           }


            else if(strcmp(dstation,"B.SETU_EAST")==0)
          {
              pakshi_setu(start,dstation,date);
           }


            else if(strcmp(dstation,"TANGAIL")==0)
          {
              pakshi_tangail(start,dstation,date);
           }

            else if(strcmp(dstation,"JAYDEVPUR")==0)
          {
              pakshi_jaydevpur(start,dstation,date);
           }


            else if(strcmp(dstation,"DHAKA")==0)
          {
              pakshi_dhaka(start,dstation,date);
           }


            else
          { system("cls");
           printf("\n\n\twrong destinaton station input");
           printf("\n\tpress any key to try again...");
           getch();
           system("cls");
           user_ticket_purchass();
            }


     }




      else if(strcmp(start,"ISHARDI")==0)
     {
         if(strcmp(dstation,"JESSORE")==0)
          {
           ishardi_jessore(start,dstation,date);

          }
          else if(strcmp(dstation,"DARSHONA_HALT")==0)
          {
              ishardi_dorshona(start,dstation,date);
           }

            else if(strcmp(dstation,"CHUADANGA")==0)
          {
              ishardi_chuadanga(start,dstation,date);
           }

            else if(strcmp(dstation,"ALAMDANGA")==0)
          {
              ishardi_alamdanga(start,dstation,date);
           }

            else if(strcmp(dstation,"PORADAH")==0)
          {
              ishardi_poradah(start,dstation,date);
           }

            else if(strcmp(dstation,"MIRPUR")==0)
          {
              ishardi_mirpur(start,dstation,date);
           }

            else if(strcmp(dstation,"VERAMARA")==0)
          {
              ishardi_veramara(start,dstation,date);
           }

            else if(strcmp(dstation,"PAKSHI")==0)
          {
              ishardi_pakshi(start,dstation,date);
           }

            else if(strcmp(dstation,"KHULNA")==0)
          {
              ishardi_khulna(start,dstation,date);//    KHULNA TO ISHARDI COMMON TRAIN
           }

            else if(strcmp(dstation,"ABDULPUR")==0)
          {
              ishardi_abdulpur(start,dstation,date);
           }

            else if(strcmp(dstation,"RAJSHAHI")==0)
          {
              ishardi_rajshahi(start,dstation,date); // KHUL TO RAJ
           }


            else if(strcmp(dstation,"CHATMOHOR")==0)
          {
              ishardi_chatmohor(start,dstation,date);
           }


            else if(strcmp(dstation,"BORAL_BRIDGE")==0)
          {
              ishardi_boralb(start,dstation,date);
           }


            else if(strcmp(dstation,"ULLAPARA")==0)
          {
              ishardi_ullapara(start,dstation,date);
           }


            else if(strcmp(dstation,"B.SETU_EAST")==0)
          {
              ishardi_setu(start,dstation,date);
           }


            else if(strcmp(dstation,"TANGAIL")==0)
          {
              ishardi_tangail(start,dstation,date);
           }

            else if(strcmp(dstation,"JAYDEVPUR")==0)
          {
              ishardi_jaydevpur(start,dstation,date);
           }


            else if(strcmp(dstation,"DHAKA")==0)
          {
              ishardi_dhaka(start,dstation,date);
           }


            else
          { system("cls");
           printf("\n\n\twrong destinaton station input");
           printf("\n\tpress any key to try again...");
           getch();
           system("cls");
           user_ticket_purchass();
            }


     }


    else
    {
         system("cls");
        printf("\n\n\twrong start station input");
         printf("\n\tpress any key to try again...");
           getch();
           system("cls");
           user_ticket_purchass();

    }



   }//from khiul





int User()               //user
{

   printf("\n\n\n\t\t\t                                                       [  HOME  ]                                \n\n");
    printf("HOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOMEHOME");
    printf("\n\n\n\n");

    printf("                                        <><><><><><><><><><><><><>><><><><><><><><><><><><><><><><><><><><><><><><><><><><>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                              1. TRAIN SCHEDULE                                <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                              2. TICKET PURCHASE                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                              3. MY ACCOUNT                                    <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                              4. COMPLAIN                                      <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                              5. EMERGENCY CONTACT                             <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                              6. TRAIN INFORMATION                             <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                              7. EXIT                                          <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>     \n");
    int ch;
     printf("\n\n\t\t  \n");
    printf("\t\t\t\t\t                        CHOOSE YOUR OPTION                                     \n");
    printf("\t\t\t\t\t                        --------------------------- ");
    scanf("%d", &ch);
    system("cls");
    switch(ch)
    {
    case 1:
       user_train_schedule();
     // showtrain();
        User();

    case 2:
      user_ticket_purchass();
       break;
    case 3:

         my_account();
        break;
    case 4:
        user_complain();
       break;

    case 5:
        show_list_contact();
       User();

    case 6:
       user_inform();
        User();

    case 7:
        system("cls");
        main();
        break;

    default:
        printf("\t\n\aSORRY SIR , YOU HAVE PRESSED WRONG INPUT\n");
        printf("\tPLEASE TRY AGAIN ");

    }

}


/*


//admin logim

 struct adlogin       //admin login
{
    char adfname[100];
    char adlname[20];
    char adusername[20];
    char adpassword[20];
}

adminloginform()
{

     printf("\n\n\n\t\t\t                                                      [  LOGIN PANEL  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");

    printf("                                                                                                                           \n");
    printf("                                                                                                                             \n");
    printf("                                                                                                                             \n");
    printf("                                                                                                                             \n");
    printf("                                                                                                                             \n");
    printf("                                                                                                                             \n");
    printf("                                                            :::::::::::::::    1. REGISTRATION   :::::::::::::::             \n");
    printf("                                                                                                                             \n");
    printf("                                                                                                                             \n");
    printf("                                                            :::::::::::::::    2. LOGIN          :::::::::::::::             \n");
    printf("                                                                                                                             \n");
    printf("                                                                                                                             \n");
    printf("                                                            :::::::::::::::    3. BACK           :::::::::::::::             \n");
    printf("                                                                                                                             \n");
    printf("                                                                                                                             \n");
    printf("                                                                                                                             \n");
    printf("                                                                                                                             \n");
    printf("                                                                                                                             \n");
    int ch;
     printf("\n\n\t\t  \n");
    printf("\t\t\t\t\t                               CHOOSE YOUR OPTION                                     \n");
    printf("\t\t\t\t\t                               --------------------------- ");
    scanf("%d", &ch);
    system("cls");

    switch(ch)
    {
    case 1:
        adregiste();
        break;
    case 2:
        adlogin();
        break;
    case 3:
        main();
        break;

    default:
        printf("\n\n\t\aSORRY SIR , YOU HAVE PRESSED WRONG INPUT.\n");
        printf("\tPLEASE TRY AGAIN.... \n\n");

    }

}


adregiste()
{

    FILE *logp;
    logp=fopen("login2.txt","w+");
    struct adlogin k;

    printf("\n\n\n\t\t\t                                                      [  REGISTRATION FORM  ]                                \n\n");
    printf("REGISTRATIONFORMREGISTRATIONFORMREGISTRATIONFORMREGISTRATIONFORMREGISTRATIONFORMREGISTRATIONFORMREGISTRATIONFORMREGISTRATIONFORMREGISTRATIONFORMREGISTRATIONFORMREGISTRA");
    printf("\n\n\n\n\n\n\n");

    printf("                                            <><><><><><><><><><><><><>><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n");
    printf("                                                                                                                           \n");
    printf("                                                                                                                           \n");
    printf("                                                                                                                           \n");
    printf("                                                                      :::::: ENTER YOUR FIRST NAME : ");
    scanf("%s",k.adfname);
    printf("                                                                                                                           \n");
    printf("                                                                      :::::: ENTER YOUR LAST NAME : ");
    scanf("%s",k.adlname);
    printf("                                                                                                                           \n");
    printf("                                                                      :::::: ENTER USERNAME : ");
    scanf("%s",k.adusername);
    printf("                                                                                                                           \n");
    printf("                                                                      :::::: ENTER PASSWORD : ");
    scanf("%s",k.adpassword);
    printf("                                                                                                                            \n");
    printf("                                                                                                                             \n");


    fwrite(&k,sizeof(k),1,logp);

    fclose(logp);

    printf("\n\n\n\n");
    printf("\n\n\n\n\n\t                                            Your USERNAME is your USER ID. Now log in with USER ID and PASSWORD.\n");
    printf("\n\t\t\t                                               Press any key to continue....");
    getch();
    system("cls");
    adlogin();


}
adlogin()
{
    char adusername[200],adpassword[20];
    FILE *logp;
    logp=fopen("login2.txt","r");

    struct adlogin k;

     printf("\n\n\n\t\t\t                                                      [  LOGIN FORM  ]                                \n\n");
    printf("LOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINF");
    printf("\n\n\n\n\n\n\n");

    printf("                                            <><><><><><><><><><><><><>><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n");
    printf("                                                                                                                           \n");
    printf("                                                                                                                           \n");
    printf("                                                                                                                           \n");
    printf("                                                                          :::::: ENTER USER ID : ");
    scanf("%s",&adusername);
    printf("                                                                                                                           \n");
    printf("                                                                          :::::: ENTER PASSWORD : ");
    scanf("%s",&adpassword);
    printf("                                                                                                                            \n");
    printf("                                                                                                                             \n");


    while(fread(&k,sizeof(k),1,logp))
    {
        if(strcmp(adusername,k.adusername)==0 && strcmp(adpassword,k.adpassword)==0)
        {
            system("cls");
            Admin();
        }
        else
        {
             printf("\n\n\n\n\n\n\n");
             printf("\n\n\n\n\n\n\t\t\t                                 Please enter correct USER ID and PASSWORD. Press any key");
             getch();
             system("cls");
             adminloginform();
        }

    }
    fclose(logp);

}


 struct login       //user login
{
    char fname[100];
    char lname[20];
    char username[20];
    char password[20];
}

loginform()
{

     printf("\n\n\n\t\t\t                                                      [  LOGIN PANEL  ]                                \n\n");
    printf("LOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINF");
    printf("\n\n\n\n");

    printf("                                                                                                                           \n");
    printf("                                                                                                                             \n");
    printf("                                                                                                                             \n");
    printf("                                                                                                                             \n");
    printf("                                                                                                                             \n");
    printf("                                                                                                                             \n");
    printf("                                                            :::::::::::::::    1. REGISTRATION   :::::::::::::::             \n");
    printf("                                                                                                                             \n");
    printf("                                                                                                                             \n");
    printf("                                                            :::::::::::::::    2. LOGIN          :::::::::::::::             \n");
    printf("                                                                                                                             \n");
    printf("                                                                                                                             \n");
    printf("                                                            :::::::::::::::    3. BACK           :::::::::::::::             \n");
    printf("                                                                                                                             \n");
    printf("                                                                                                                             \n");
    printf("                                                                                                                             \n");
    printf("                                                                                                                             \n");
    printf("                                                                                                                             \n");
    int ch;
     printf("\n\n\t\t  \n");
    printf("\t\t\t\t\t                               CHOOSE YOUR OPTION                                     \n");
    printf("\t\t\t\t\t                               --------------------------- ");
    scanf("%d", &ch);
    system("cls");

    switch(ch)
    {
    case 1:
        registe();
        break;
    case 2:
        login();
        break;
    case 3:
        main();
        break;

    default:
        printf("\n\n\t\aSORRY SIR , YOU HAVE PRESSED WRONG INPUT.\n");
        printf("\tPLEASE TRY AGAIN.... \n\n\n");

    }

}


registe()
{

    FILE *log;
    log=fopen("login1.txt","w+");
    struct login l;

    printf("\n\n\n\t\t\t                                                      [  REGISTRATION FORM  ]                                \n\n");
    printf("REGISTRATIONFORMREGISTRATIONFORMREGISTRATIONFORMREGISTRATIONFORMREGISTRATIONFORMREGISTRATIONFORMREGISTRATIONFORMREGISTRATIONFORMREGISTRATIONFORMREGISTRATIONFORMREGISTRA");
    printf("\n\n\n\n\n\n\n");

    printf("                                            <><><><><><><><><><><><><>><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n");
    printf("                                                                                                                           \n");
    printf("                                                                                                                           \n");
    printf("                                                                                                                           \n");
    printf("                                                                      :::::: ENTER YOUR FIRST NAME : ");
    scanf("%s",l.fname);
    printf("                                                                                                                           \n");
    printf("                                                                      :::::: ENTER YOUR LAST NAME : ");
    scanf("%s",l.lname);
    printf("                                                                                                                           \n");
    printf("                                                                      :::::: ENTER USERNAME : ");
    scanf("%s",l.username);
    printf("                                                                                                                           \n");
    printf("                                                                      :::::: ENTER PASSWORD : ");
    scanf("%s",l.password);
    printf("                                                                                                                            \n");
    printf("                                                                                                                             \n");

    fwrite(&l,sizeof(l),1,log);

    fclose(log);

    printf("\n\n\n\n");
    printf("\n\n\n\n\n\t                                            Your USERNAME is your USER ID. Now log in with USER ID and PASSWORD.\n");
    printf("\n\t\t\t                                               Press any key to continue....");
    getch();
    system("cls");
    login();

}
login()
{
    char username[200],password[20];
    FILE *log;
    log=fopen("login1.txt","r");

    struct login l;

     printf("\n\n\n\t\t\t                                                      [  LOGIN FORM  ]                                \n\n");
    printf("LOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINFORMLOGINF");
    printf("\n\n\n\n\n\n\n");

    printf("                                            <><><><><><><><><><><><><>><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n");
    printf("                                                                                                                           \n");
    printf("                                                                                                                           \n");
    printf("                                                                                                                           \n");
    printf("                                                                          :::::: ENTER USER ID : ");
    scanf("%s",&username);
     printf("                                                                                                                           \n");
    printf("                                                                          :::::: ENTER PASSWORD : ");
    scanf("%s",&password);
    printf("                                                                                                                            \n");
    printf("                                                                                                                             \n");

    while(fread(&l,sizeof(l),1,log))
    {
        if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0)
        {
            system("cls");
            User();
        }
        else
        {
             printf("\n\n\n\n\n\n\n");
             printf("\n\n\n\n\n\n\t\t\t                                 Please enter correct USER ID and PASSWORD. Press any key");
             getch();
             system("cls");
             loginform();
        }

    }
    fclose(log);

}

*/

int Admin()

{

    printf("\n\n\n\t\t\t                                                       [  ADMIN PANEL  ]                                \n\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=");
    printf("\n\n\n\n");

    printf("                                        <><><><><><><><><><><><><>><><><><><><><><><><><><><><><><><><><><><><><><><><><><>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                              1. TRAIN SCHEDULE                                <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                              2. TICKET PURCHASE                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                              3. COMPLAIN                                      <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                              4. EMERGENCY CONTACT                             <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                              5. TRAIN INFORMATION                             <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                              6. EXIT                                          <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <>                                                                               <>      \n");
    printf("                                        <><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>     \n");
    int ch;
     printf("\n\n\t\t  \n");
    printf("\t\t\t\t\t                        CHOOSE YOUR OPTION                                     \n");
    printf("\t\t\t\t\t                        --------------------------- ");
    scanf("%d", &ch);
    system("cls");
    switch(ch)
    {
    case 1:
        train_Schedule();
        break;
    case 2:
        ticket_purchass();
        break;
    case 3:
        complain();
        break;

    case 4:
         emergency_contact();
        break;

    case 5:

        train_information();
        break;
    case 6:
        system("cls");
        main();
        break;

    default:
        printf("\t\n\aSORRY SIR , YOU HAVE PRESSED WRONG INPUT\n");
        printf("\tPLEASE TRY AGAIN ");

    }
}



int main()

{
    printf("\n\n");
    printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX \n");
    printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX \n");
    printf("XX                                  XX                                  XX                                  XX                                  XX                       \n");
    printf("  XX                              XX  XX                              XX  XX                              XX  XX                              XX  XX                     \n");
    printf("    XX                          XX      XX                          XX      XX                          XX      XX                          XX      XX                   \n");
    printf("      XX                      XX          XX                      XX          XX        WELCOME TO    XX          XX                      XX          XX                 \n");
    printf("        XX                  XX              XX                  XX                                                  XX                  XX              XX               \n");
    printf("          XX              XX                  XX              XX              TRAIN TICKET MANAGEMENT SYSTEM          XX              XX                  XX             \n");
    printf("            XX          XX                      XX          XX                                                          XX          XX                      XX           \n");
    printf("              XX      XX                          XX      XX                          XX      XX                          XX      XX                          XX         \n");
    printf("                XX  XX                              XX  XX                              XX  XX                              XX  XX                              XX  XX   \n");
    printf("                  XX                                  XX                                  XX                                  XX                                  XX     \n");
    printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX \n\n");
    printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX \n");

    printf("\n\n\n\n\t\t     Hi, this is a system for train ticket management, on the behalf of Bangladesh Railway and also for the Bangladesh Goverment. From here \n ");
    printf("\t\t     you can know about the any train schedule, ticket fare, train route and you can purchass any train ticket that you want to travel.\n");
    printf("\t\t     This system can keep a record of your previous activity so that you can use our system fluently, to get this feature please register\n ");
    printf("\t\t     in our system. Happy journey ,good luck ....\n");
    printf("\n\n\t\t\t\t\t                                                           press any key to procede.............");


    getch();

   system("cls");

   printf(" \n\n\n\n\n\n\n\n\n");
    printf("XXXXXXXXXXXXXXXX       X       X       X       X        XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX      X       X       X       X        XXXXXXXXXXXXXXX \n");
    printf("\t\t X     X X     X X     X X     X X     X                                                       X     X X     X X     X X     X X     X  \n");
    printf("\t\t  X   X   X   X   X   X   X   X   X   X                                                         X   X   X   X   X   X   X   X   X   X    \n");
    printf("\t\t   X X     X X     X X     X X     X X                   1. USER LOGIN                           X X     X X     X X     X X     X X     \n");
    printf("\t\t    X       X       X       X       X                                                             X       X       X       X       X       \n");
    printf("\t\t   X X     X X     X X     X X     X X                   2. ADMIN LOGIN                          X X     X X     X X     X X     X X    \n");
    printf("\t\t  X   X   X   X   X   X   X   X   X   X                                                         X   X   X   X   X   X   X   X   X   X      \n");
    printf("\t\t X     X X     X X     X X     X X     X                                                       X     X X     X X     X X     X X     X    \n");
    printf("XXXXXXXXXXXXXXXX       X       X       X       X        XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX      X       X       X       X        XXXXXXXXXXXXXXX\n\n\n\n\n\n");

    int ch;
    printf("\n\n\t\t  \n");
    printf("\t\t\t\t\t                        CHOOSE YOUR OPTION                                     \n");
    printf("\t\t\t\t\t                        --------------------------- ");
    scanf("%d", &ch);
    system("cls");

    switch(ch)
    {
    case 1:
     //   loginform();
    //    break;

        User();
        break;

    case 2:
      //  adminloginform();
      //  break;

        Admin();
        break;

    default:
        printf("\n\t\aSORRY SIR , WRONG INPUT\n");
        printf("\tPLEASE TRY AGAIN");

    }

    return 0;
}
