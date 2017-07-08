/*
 * SEE_types.h
 *
 * Code generation for function 'SEE'
 *
 */

#ifndef __SEE_TYPES_H__
#define __SEE_TYPES_H__

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_b_struct_T
#define typedef_b_struct_T
typedef struct
{
    double V_opt[500];
    double i_0_accel;
    double i_end_accel;
    double i_0_main;
    double i_end_main;
    double i_0_decel;
    double i_end_decel;
} b_struct_T;
#endif /*typedef_b_struct_T*/
#ifndef typedef_c_struct_T
#define typedef_c_struct_T
typedef struct
{
    double V_opt[500];
    double i_0_accel;
    double i_end_accel;
    double i_0_main;
    double i_end_main;
    double i_0_decel;
    double i_end_decel;
    double flag_parabole;
} c_struct_T;
#endif /*typedef_c_struct_T*/
#ifndef struct_emxArray__common
#define struct_emxArray__common
struct emxArray__common
{
    void *data;
    int *size;
    int allocatedSize;
    int numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray__common*/
#ifndef typedef_emxArray__common
#define typedef_emxArray__common
typedef struct emxArray__common emxArray__common;
#endif /*typedef_emxArray__common*/
#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T
struct emxArray_boolean_T
{
    boolean_T *data;
    int *size;
    int allocatedSize;
    int numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_boolean_T*/
#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T
typedef struct emxArray_boolean_T emxArray_boolean_T;
#endif /*typedef_emxArray_boolean_T*/
#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T
struct emxArray_int32_T
{
    int *data;
    int *size;
    int allocatedSize;
    int numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_int32_T*/
#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T
typedef struct emxArray_int32_T emxArray_int32_T;
#endif /*typedef_emxArray_int32_T*/
#ifndef struct_emxArray_int32_T_1x201
#define struct_emxArray_int32_T_1x201
struct emxArray_int32_T_1x201
{
    int data[201];
    int size[2];
};
#endif /*struct_emxArray_int32_T_1x201*/
#ifndef typedef_emxArray_int32_T_1x201
#define typedef_emxArray_int32_T_1x201
typedef struct emxArray_int32_T_1x201 emxArray_int32_T_1x201;
#endif /*typedef_emxArray_int32_T_1x201*/
#ifndef struct_emxArray_int32_T_1x37
#define struct_emxArray_int32_T_1x37
struct emxArray_int32_T_1x37
{
    int data[37];
    int size[2];
};
#endif /*struct_emxArray_int32_T_1x37*/
#ifndef typedef_emxArray_int32_T_1x37
#define typedef_emxArray_int32_T_1x37
typedef struct emxArray_int32_T_1x37 emxArray_int32_T_1x37;
#endif /*typedef_emxArray_int32_T_1x37*/
#ifndef struct_emxArray_int32_T_1x500
#define struct_emxArray_int32_T_1x500
struct emxArray_int32_T_1x500
{
    int data[500];
    int size[2];
};
#endif /*struct_emxArray_int32_T_1x500*/
#ifndef typedef_emxArray_int32_T_1x500
#define typedef_emxArray_int32_T_1x500
typedef struct emxArray_int32_T_1x500 emxArray_int32_T_1x500;
#endif /*typedef_emxArray_int32_T_1x500*/
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T
{
    double *data;
    int *size;
    int allocatedSize;
    int numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_real_T*/
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /*typedef_emxArray_real_T*/
#ifndef struct_emxArray_real_T_1x1498
#define struct_emxArray_real_T_1x1498
struct emxArray_real_T_1x1498
{
    double data[1498];
    int size[2];
};
#endif /*struct_emxArray_real_T_1x1498*/
#ifndef typedef_emxArray_real_T_1x1498
#define typedef_emxArray_real_T_1x1498
typedef struct emxArray_real_T_1x1498 emxArray_real_T_1x1498;
#endif /*typedef_emxArray_real_T_1x1498*/
#ifndef struct_emxArray_real_T_1x201
#define struct_emxArray_real_T_1x201
struct emxArray_real_T_1x201
{
    double data[201];
    int size[2];
};
#endif /*struct_emxArray_real_T_1x201*/
#ifndef typedef_emxArray_real_T_1x201
#define typedef_emxArray_real_T_1x201
typedef struct emxArray_real_T_1x201 emxArray_real_T_1x201;
#endif /*typedef_emxArray_real_T_1x201*/
#ifndef struct_emxArray_real_T_1x202
#define struct_emxArray_real_T_1x202
struct emxArray_real_T_1x202
{
    double data[202];
    int size[2];
};
#endif /*struct_emxArray_real_T_1x202*/
#ifndef typedef_emxArray_real_T_1x202
#define typedef_emxArray_real_T_1x202
typedef struct emxArray_real_T_1x202 emxArray_real_T_1x202;
#endif /*typedef_emxArray_real_T_1x202*/
#ifndef struct_emxArray_real_T_1x500
#define struct_emxArray_real_T_1x500
struct emxArray_real_T_1x500
{
    double data[500];
    int size[2];
};
#endif /*struct_emxArray_real_T_1x500*/
#ifndef typedef_emxArray_real_T_1x500
#define typedef_emxArray_real_T_1x500
typedef struct emxArray_real_T_1x500 emxArray_real_T_1x500;
#endif /*typedef_emxArray_real_T_1x500*/
#ifndef struct_emxArray_real_T_1x6000
#define struct_emxArray_real_T_1x6000
struct emxArray_real_T_1x6000
{
    double data[6000];
    int size[2];
};
#endif /*struct_emxArray_real_T_1x6000*/
#ifndef typedef_emxArray_real_T_1x6000
#define typedef_emxArray_real_T_1x6000
typedef struct emxArray_real_T_1x6000 emxArray_real_T_1x6000;
#endif /*typedef_emxArray_real_T_1x6000*/
#ifndef struct_emxArray_real_T_1x6001
#define struct_emxArray_real_T_1x6001
struct emxArray_real_T_1x6001
{
    double data[6001];
    int size[2];
};
#endif /*struct_emxArray_real_T_1x6001*/
#ifndef typedef_emxArray_real_T_1x6001
#define typedef_emxArray_real_T_1x6001
typedef struct emxArray_real_T_1x6001 emxArray_real_T_1x6001;
#endif /*typedef_emxArray_real_T_1x6001*/
#ifndef struct_emxArray_real_T_1x6002
#define struct_emxArray_real_T_1x6002
struct emxArray_real_T_1x6002
{
    double data[6002];
    int size[2];
};
#endif /*struct_emxArray_real_T_1x6002*/
#ifndef typedef_emxArray_real_T_1x6002
#define typedef_emxArray_real_T_1x6002
typedef struct emxArray_real_T_1x6002 emxArray_real_T_1x6002;
#endif /*typedef_emxArray_real_T_1x6002*/
#ifndef typedef_struct0_T
#define typedef_struct0_T
typedef struct
{
    char Soft_version[3];
    double V_veh_th_kmh;
    double VEHICLE_Mass;
    double VEHICLE_R_tire;
    double VEHICLE_a;
    double VEHICLE_b;
    double VEHICLE_c;
    double VEHICLE_Conso_EUDC;
    double TRANSMISSION_GearShiftNumber;
    double c_TRANSMISSION_V_veh_kmh_to_N_e[6];
    double c_TRANSMISSION_Trq_engine_to_Tr[6];
    double TRANSMISSION_GearShiftLaw_x[44];
    double TRANSMISSION_GearShiftLaw_y[5];
    double TRANSMISSION_GearShiftLaw_z[220];
    double FUEL_PCI;
    double FUEL_rho_fuel;
    double FUEL_Fuel_ratio_CO2_energy;
    double ENGINE_P_max_kW;
    double ENGINE_Trq_min_x[19];
    double ENGINE_Trq_min_y[19];
    double ENGINE_Trq_max_x[19];
    double ENGINE_Trq_max_y[19];
    double ENGINE_Conso_x[19];
    double ENGINE_Conso_y[17];
    double ENGINE_Conso_z[323];
    double VEHICLE_Trq_brake_max;
    double VEHICLE_Trq_wheel_min_x[37];
    double VEHICLE_Trq_wheel_min_y[37];
    double VEHICLE_Trq_wheel_max_x[37];
    double VEHICLE_Trq_wheel_max_y[37];
    double CLASSE_CO2_classe_A;
    double CLASSE_CO2_classe_E;
    double OOL_trajectories_length;
    double VEHICLE_OOL_x[37];
    double VEHICLE_OOL_y[37];
    double VEHICLE_Conso_x[37];
    double VEHICLE_Conso_y[92];
    double VEHICLE_Conso_z[3404];
    double VEHICLE_Acc_Slope0_v_veh_kmh[724];
    double VEHICLE_Acc_Slope0_v_dot[724];
    double VEHICLE_Acc_Slope0_tau_w[724];
    double VEHICLE_Acc_Slope0_tau_w_sat[724];
    double VEHICLE_OOL_traj_Time[804];
    double VEHICLE_OOL_traj_Trq_wheel[804];
    double VEHICLE_OOL_traj_Trq_wheel_sat[804];
    double VEHICLE_OOL_traj_V_kmh[804];
    double VEHICLE_OOL_traj_D[804];
    double net_IW_1[20];
    double net_LW_1[5];
    double net_bI_1[5];
    double net_bO_1;
    double net_Pnorm_1[8];
    double net_Tnorm_1[2];
    double net_IW_2[20];
    double net_LW_2[5];
    double net_bI_2[5];
    double net_bO_2;
    double net_Pnorm_2[8];
    double net_Tnorm_2[2];
    double net_IW_345[20];
    double net_LW_345[15];
    double net_bI_345[5];
    double net_bO_345[3];
    double net_Pnorm_345[8];
    double net_Tnorm_345[6];
    double net_IW_UW[20];
    double net_LW_UW[15];
    double net_bI_UW[5];
    double net_bO_UW[3];
    double net_Pnorm_UW[8];
    double net_Tnorm_UW[6];
} struct0_T;
#endif /*typedef_struct0_T*/
#ifndef typedef_struct1_T
#define typedef_struct1_T
typedef struct
{
    double Time_s;
    double V_veh_mes_kmh;
    double Accel_ms2;
    double Slope_pct;
    double Speed_state;
    double Lat_mes_deg;
    double Long_mes_deg;
    double Bearing;
    double Accuracy;
    double Neng_rpm;
    double Flag_Endfile;
} struct1_T;
#endif /*typedef_struct1_T*/
#ifndef typedef_struct2_T
#define typedef_struct2_T
typedef struct
{
    double Time_prev_s;
    double V_veh_mes_prev_kmh;
    double Lat_mes_prev_deg;
    double Long_mes_prev_deg;
    double dt;
    double V_veh_moy_kmh;
    double Accel_ms2;
    double Vehicle_stopped_prev;
    double Vehicle_stopped;
    double Disp_running;
    double Start_disp;
    double Stop_disp;
    double GearNb_opt;
    double Trq_eng_prev;
    double Time_disp_mes_s;
    double D_veh_disp_mes_m;
    double E_disp_mes_kJ;
    double ind_vec;
    double ind_vec_prev;
    double Delta_ind_vec;
    double Subdisp_Nb;
    double I_min_1[3];
    double Mean_Nb;
    double Breakpoint_detected;
    double v_min_1;
    double v_max_1;
    double v_min_2;
    double v_max_2;
    double i_min_1;
    double i_min_2;
    double Slope_pct;
    double Time_disp_vec_s[500];
    double D_veh_mes_disp_vec_m[500];
    double V_veh_mes_disp_vec_kmh[500];
    double E_mes_disp_vec_kJ[500];
    double V_veh_opti_disp_vec_kmh[500];
    double E_opti_disp_vec_kJ[500];
    double Neng_rpm;
} struct2_T;
#endif /*typedef_struct2_T*/
#ifndef typedef_struct3_T
#define typedef_struct3_T
typedef struct
{
    double Stop_disp;
    double Disp_In_Progress;
    double Subdisp_Nb;
    double Update_Display;
    double T_0_s;
    double T_end_s;
    double V_veh_mes_disp_vec_kmh[100];
    double V_veh_opti_disp_vec_kmh[100];
    double V_veh_mes_subdisp_vec_kmh[100];
    double V_veh_opti_subdisp_vec_kmh[100];
    double GearNb_opt;
    double D_veh_trip_mes_m;
    double Time_trip_mes_s;
    double V_veh_moy_trip_mes_kmh;
    double D_veh_disp_mes_m;
    double Time_disp_mes_s;
    double V_veh_moy_disp_mes_kmh;
    double D_veh_subdisp_mes_m;
    double Time_subdisp_mes_s;
    double V_veh_moy_subdisp_mes_kmh;
    double V_veh_max_subdisp_mes_kmh;
    double V_veh_moy_mean_mes_kmh;
    double V_max_disp_kmh;
    double E_mes_trip_kJ;
    double E_opti_trip_kJ;
    double E_mes_disp_kJ;
    double E_opti_disp_kJ;
    double E_mes_subdisp_kJ;
    double E_opti_subdisp_kJ;
    double CO2_mes_trip_gkm;
    double CO2_opti_trip_gkm;
    double CO2_mes_disp_gkm;
    double CO2_opti_disp_gkm;
    double CO2_mes_subdisp_gkm;
    double CO2_opti_subdisp_gkm;
    double CO2_mes_mean_gkm;
    double CO2_opti_mean_gkm;
    double Ring_min_trip;
    double Ring_max_trip;
    double Ring_min_mean;
    double Ring_max_mean;
    double Classe_mes_trip;
    double Classe_opti_trip;
    double Classe_mes_mean;
    double Classe_opti_mean;
    double CO2_mes_evol;
    double CO2_opti_evol;
    double Driving_note_tot;
    double Driving_note_trip;
    double Driving_note_accel_trip;
    double Driving_note_main_trip;
    double Driving_note_decel_trip;
    double Driving_note_disp;
    double Driving_note_accel_disp;
    double Driving_note_main_disp;
    double Driving_note_decel_disp;
    double Driving_note_subdisp;
    double Driving_note_accel_subdisp;
    double Driving_note_main_subdisp;
    double Driving_note_decel_subdisp;
    double Driving_note_mean;
    double Driving_note_accel_mean;
    double Driving_note_main_mean;
    double Driving_note_decel_mean;
    double Wording_note_accel_trip;
    double Wording_note_maintien_trip;
    double Wording_note_decel_trip;
} struct3_T;
#endif /*typedef_struct3_T*/
#ifndef typedef_struct4_T
#define typedef_struct4_T
typedef struct
{
    double Type;
    double Engine_type;
    double Engine_power_ch;
    double Weight_kg;
    double GearBox_type;
    double Fuel_consumption_L;
} struct4_T;
#endif /*typedef_struct4_T*/
#ifndef typedef_struct_T
#define typedef_struct_T
typedef struct
{
    double Time[500];
    double V_opt[500];
    double flag_parabole;
    double i_0_accel;
    double i_end_accel;
    double i_0_main;
    double i_end_main;
    double i_0_decel;
    double i_end_decel;
} struct_T;
#endif /*typedef_struct_T*/

#endif
/* End of code generation (SEE_types.h) */
