#include "./generated/classes.hpp"

class ScrewYou2Manager {
    private:
        ScrewYou2Manager() {}

        std::vector<std::string> m_survivingClasses = getClasses();
        /**
         * A vector determining the classes that didn't get 'killed' yet
         */

    public:
        static ScrewYou2Manager* get();

        std::vector<std::string> getSurvivingClasses();

        bool isKilled(std::string className);

        void killClass(std::string className);

        void killRandomClass();
};