#include <QCoreApplication>
#include <qDebug>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <time.h>
#include <windows.h>

#include "constants.h"
#include "coremag.hxx"
#include "magvar.hxx"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //    double lat_deg,lon_deg,h,var;
    //    int /* model,*/yy,mm,dd;
    //    double field[6];

    //    //if ((argc != 8) && (argc !=7)) {
    //    fprintf(stdout,"Usage: mag lat_deg lon_deg h mm dd yy [model]\n");
    //    fprintf(stdout,"N latitudes, E longitudes positive degrees, h in km, mm dd yy is date\n");
    //    fprintf(stdout,"model 1,2,3,4,5,6,7 <=> IGRF90,WMM85,WMM90,WMM95,IGRF95,WMM2000,IGRF2000\n");
    //    fprintf(stdout,"Default model is IGRF2000, valid 1/1/00 - 12/31/05\n");
    //    fprintf(stdout,"Output Bx (N) By (E) Bz (down) (in nTesla) dip (degrees down positive)\n");
    //    fprintf(stdout,"variation (degrees E positive)\n");
    //    //exit(1);
    //    //}

    //    lat_deg = strtod(argv[1],NULL);
    //    lon_deg = strtod(argv[2],NULL);
    //    h=        strtod(argv[3],NULL);
    //    mm=       (int)strtol(argv[4],NULL,10);
    //    dd=       (int)strtol(argv[5],NULL,10);
    //    yy=       (int)strtol(argv[6],NULL,10);
    //    qDebug() << lat_deg << "    " << lon_deg;
    //    if (argc == 8){
    //        //  model=  (int)strtol(argv[7],NULL,10);
    //    }else{
    //        //  model=7;
    //    }

    //    var = calc_magvar( SGD_DEGREES_TO_RADIANS * lat_deg, SGD_DEGREES_TO_RADIANS * lon_deg, h,
    //                       yymmdd_to_julian_days(yy,mm,dd), field );

    //    fprintf(stdout,"%6.0f %6.0f %6.0f\n", field[0], field[1], field[2] );
    //    fprintf(stdout,"%6.0f %6.0f %6.0f\n", field[3], field[4], field[5] );
    //    fprintf(stdout,"%6.0f %6.0f %6.0f %4.2f %4.2f \n",
    //            field[3],field[4],field[5],
    //            SGD_RADIANS_TO_DEGREES * (atan(field[5]/pow(field[3]*field[3]+field[4]*field[4],0.5))),
    //            SGD_RADIANS_TO_DEGREES * var);

    DWORD start, stop;
       start = GetTickCount();

    SGMagVar test_mar;
    test_mar.update(SGD_DEGREES_TO_RADIANS * 118, SGD_DEGREES_TO_RADIANS * 32, 1245, yymmdd_to_julian_days(18,12,28));
    qDebug() << SGD_RADIANS_TO_DEGREES * test_mar.get_magvar();
Sleep(2845);
    stop = GetTickCount();
       printf("time: %ld ms\n", (stop - start));

    return a.exec();
}
