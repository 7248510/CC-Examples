#include <iostream>
#include "convertTimes.cc"
//https://stackoverflow.com/questions/224966/what-is-the-difference-between-private-and-protected-members-of-c-classes
namespace test {
        void hello() {
            std::cout << "\nHello world from the hello function" << std::endl;
        }
        class className
        {
            private: 
                int y = 53;
            protected: 
                int z = 56;
            public: 
                int x =52;
            void className::hello() {std::cout << "\nHello from class\n"; std:: cout << y << std::endl;}
            void repeatVal() {
                    std::cout << y; //Private, cannot access unless called in the write class/struct/namespace
                    std::cout << z; //Protected
                    std::cout << x; //Public;
        }
        }; 
        class Derived : className {
            public:
                void repeatProtected() {std::cout <<"PUBLIC: "<< z << std::endl;}
                void repeatPub() {std::cout <<"PRIVATE: "<< x << std::endl;}
        };
}

namespace privatePub {
    class Pub {
        private:
            std::string privateVar;
        public:
            std::string publicVar = "HELLO PUBLIC\n";
            void testPriv() {
                privateVar = "Private Variable\n";
                std::cout << privateVar;
                std::cout << publicVar;
            }
    };
    class callTest {
        private:
            std::string privateVar = "Private var";
        public:
            void callTest::testPriv() {
                std::string publicVar = "Public var";
                std::cout << publicVar;
                std::cout << "\n" << privateVar << std::endl;
            }
    };
};