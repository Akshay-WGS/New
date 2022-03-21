#ifndef REPORT
#define REPORT
using namespace std;
#include <string>
#include <map>

#include "./appointment.hh"

class report 
{
    private:
        void loadDoctorData();
        map<int, doctor> doctorsList;

    public:
        void doctorPatientReport();
};

#endif // !REPORT