//
//  SeeInit.h
//  Geco
//
//  Created by VME on 15/10/13.
//  Copyright (c) 2013 Airweb. All rights reserved.
//

#ifndef Geco_SeeInit_h
#define Geco_SeeInit_h

#define SEEVALUESIZE 53

#include "SEE.h"

void LoadSee(int VehiculeType, int VehiculeMotorisation, float VehiculePuissance, float VehiculeMasse, int VehiculeBoiteVitesseType, float VehiculeConso);
void SeeAlloc(struct0_T **SEE_Parameters, struct1_T **SEE_Inputs, struct2_T **SEE_Signals, struct3_T **SEE_Outputs, struct4_T **VEHICLE);
void SeeInitSignal(double speed, double engine_speed);
void SeeCompute(double time, double speed, double accel, double slope, int speed_status, double engine_speed, int lastPoint);
void SeeDestroy();
double* getSpeedTrajMeas(void);
double* getSpeedTrajOpti(void);
double* getSeeValues(void);
double getDispInProgress(void);
double getSubDispNb(void);
double getSubDispVmax(void);
double getUpDateSeeValues(void);
double* getSubDispSpeedTrajMeas(void);
double* getSubDispSpeedTrajOpti(void);

#endif
