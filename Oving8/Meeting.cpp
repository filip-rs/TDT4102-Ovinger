#include "Meeting.h"

#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

// BEGIN 3b
std::ostream& operator<<(std::ostream& os, const Campus &campus) {
    os << campusToString.find(campus)->second << std::endl;
    return os;
}
// END 3b

// BEGIN 3e
void Meeting::addParticipant(std::shared_ptr<Person> participant) {
    Meeting::participants.push_back(participant);
}
// END 3e

// BEGIN 3f
Meeting::Meeting(int day, int startTime, int endTime, Campus location, const std::string& subject, const std::shared_ptr<Person> leader) 
: day{day}, startTime{startTime}, endTime{endTime}, location{location}, subject{subject}, leader{leader} {
    participants.push_back(leader);
}
// END 3f

// BEGIN 3h
std::vector<std::string> Meeting::getParticipantList() {
    using namespace std;
    vector<string> participantList;
    participantList.push_back(Meeting::leader->getName());

    for (int i = 0; i < participants.size(); ++i) {
        participantList.push_back(participants.at(i)->getName());
    }

    return participantList;
}
// END 3h

// BEGIN 3i
std::vector<std::shared_ptr<Person>> Meeting::findPotentialCoDriving(Meeting &meet) {
    using namespace std;
    vector<shared_ptr<Person>> coDriveList;

    vector<string> otherParticipants = meet.getParticipantList();

    for (int i = 0; i < otherParticipants.size(); ++i) {
        if (meet.getDay() == this->getDay() && meet.getLocation() == this->getLocation()) {
            if (abs((meet.getStartTime() - this->getStartTime())) < 1 && abs((meet.getEndTime() - this->getEndTime())) < 1) {
                
                coDriveList.push_back();
            }
        }
    }
}
// END 3i

// BEGIN 3j
std::ostream& operator<<(std::ostream& os, Meeting& meet) {
    os << "Meeting overview" << "\n";
    os << "Subject: " << meet.getSubject() << "\n";
    os << "Meet leader: " << meet.getLeader()->getName() << "\n";
    os << "Location: " << meet.getLocation() << "\n";
    os << "Starts at: " << meet.getStartTime() << "\n";
    os << "Ends at: " << meet.getEndTime() << "\n";
    os << "Attendees: \n";
    
    std::vector<std::string> particList = meet.getParticipantList();
    for (int i = 0; i < particList.size(); ++i) {
        os << particList.at(i) << "\n";
    }
    os << std::endl;

    return os;
}
// END 3j
