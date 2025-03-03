#include "CourseCatalog.h"


// BEGIN: 3a
void CourseCatalog::addCourse(const string& key, const string& value) {
    courses[key] = value;
}
// END: 3a

// BEGIN: 3b
void CourseCatalog::removeCourse(const string& key) {
    courses.erase(key);
}
// END: 3b

// BEGIN: 3c
string CourseCatalog::getCourse(const string& key) const {
    return courses.at(key);
}
// END: 3c

// BEGIN: 3d
ostream& operator<<(ostream& os, const CourseCatalog& cc) {
    for (auto i = cc.courses.begin(); i != cc.courses.end(); i++) {
        os << "Course: " << i->first << " Description: " << i->second << endl;
    }
    return os;
}
// END: 3d

// BEGIN: 3e

// END: 3e

// BEGIN: 3g
void CourseCatalog::saveToFile(const std::string& filename) const {
    std::ofstream output_stream{filename};

    for (auto i = courses.begin(); i != courses.end(); i++) {
        output_stream << i->first << ":" << i->second << endl;
    }
}
// END: 3g

// BEGIN: 3h
void CourseCatalog::loadFromFile(const std::string& filename) {
    std::ifstream input_stream{filename};

    if (!input_stream) {
        cerr << "File aint there cunt" << endl;
        return;
    }

    string line;
    while (getline(input_stream, line)) {
        istringstream ss(line);
        string key, value;

        if (getline(ss, key, ':') && getline(ss, value)) {
            courses[key] = value;
        }
    }
}
// END: 3h