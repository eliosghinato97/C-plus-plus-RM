#include <string>
#include <ctime>

using namespace std;

class Client {
     int id;
     string name;
     string surname;
     string email;
     string phone;
     string address;
     string city;
     string state;
     string zip;
     string country;
     string notes;
     string id;
     string created_at;
     string updated_at;

     public:
          Client() {
               time_t now = time(nullptr);
               char buffer[11];
               strftime(buffer, sizeof(buffer), "%Y-%m-%d", localtime(&now));
               created_at = buffer;
          }
};
