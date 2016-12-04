//
// Programa que muestra el uso de los constructores de una clase.
//

#include <iostream>

using namespace std;

class User {
private:
    string username;
    string password;
public:
    User(string username, string password) {
        this->username = username;
        this->password = password;
    }

    void setUsername(string username) {
        this->username = username;
    }

    string getUsername() {
        return username;
    }

    void setPassword(string password) {
        this->password = password;
    }

    string getPassword() {
        return password;
    }
};

int main() {
    User porfirio("porfirio", "porfiriopassword");
    cout << "user: " << porfirio.getUsername() << ", password: " << porfirio
            .getPassword() << endl;
    return 0;
}

