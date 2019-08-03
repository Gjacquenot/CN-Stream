#include "commCNS.h"

void calcRF(const std::string& ConfigFile, RF_type &RF, Option_type &option)
{
    __modcns_MOD_calcrf(ConfigFile.c_str(),&RF, &option);
}

void recRF(RF_type &RF, Option_type &option, const double &x, const double &y,const double &z,const double &t,const double &thetaincident,const bool &hydrostatic, Output_type &output)
{
    __modcns_MOD_recrf(&RF, &option, &x, &y,&z, &t,&thetaincident,&hydrostatic,&output);
}

void initAiry(const std::string& ConfigFile, RF_type &RF, Option_type &option)
{
    __modcns_MOD_initairy(ConfigFile.c_str(),&RF, &option);
}

void airy(RF_type &RF, Option_type &option, const double &x, const double &y,const double &z,const double &t,const double &thetaincident,const bool &hydrostatic, Output_type &output)
{
    __modcns_MOD_airy(&RF, &option, &x, &y,&z, &t,&thetaincident,&hydrostatic,&output);
}