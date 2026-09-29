#include <string>

using namespace std;

class GeneralInsurance {
protected:
     int id;
     int client_id;
     string policy_number;
     string type;
     string coverage;
     double premium;
     string start_date;
     string end_date;
     string status;
     string notes;
     string created_at;
     string updated_at;
};

class CarInsurance : public GeneralInsurance {
     string make;
     string model;
     int year;
     string vin;
     string license_plate;
     string driver_license;
     double vehicle_value;
     string usage;
};
