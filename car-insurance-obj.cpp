#include <string>

class GeneralInsurance {
protected:
     int id;
     int client_id;
     std::string policy_number;
     std::string type;
     std::string coverage;
     double premium;
     std::string start_date;
     std::string end_date;
     std::string status;
     std::string notes;
     std::string created_at;
     std::string updated_at;
};

class CarInsurance : public GeneralInsurance {
     std::string make;
     std::string model;
     int year;
     std::string vin;
     std::string license_plate;
     std::string driver_license;
     double vehicle_value;
     std::string usage;
};
