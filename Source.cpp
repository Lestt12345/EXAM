#include <iostream>
#include <windows.h>
#include <vector>
#include <string>
using namespace std;

//Задачі низького рівня (1b)

//1
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	cout << "Програмування з використанням мови С++\nБажана оцінка 12 :)";
//}

//2
//class Rectangle {
//    int width;
//    int height;
//public:
//    Rectangle(int w, int h) : width(w), height(h) {}
//
//    int calculateArea() {
//        return width * height;
//    }
//};

//3
//class Animal {
//public:
//    virtual void makeSound() {
//        cout << "sound" << endl;
//    }
//};
//
//class Dog : public Animal {
//public:
//    void makeSound() override {
//        cout << "Bark!" << endl;
//    }
//};


//Задачі середнього рівня (3b)

//1
//class Car {
//    int speed;
//public:
//    Car() : speed(0) {}
//
//    void accelerate(int value) {
//        speed += value;
//    }
//
//    void decelerate(int value) {
//        speed -= value;
//        if (speed < 0) {
//            speed = 0;
//        }
//    }
//
//    int get_speed() {
//        return speed;
//    }
//};
//
//void menu(Car& c1) {
//    int ch = -1;
//    int speed;
//    while (ch != 0)
//    {
//        cout << "\n1 - acceleration\n"
//            << "2 - deceleration\n"
//            << "3 - exit\n"
//            << "choose: ";
//        cin >> ch;
//        switch (ch)
//        {
//        case 1:
//            cout << "accelerate for: ";
//            cin >> speed;
//            c1.accelerate(speed);
//            cout << "cur speed: " << c1.get_speed() << endl;
//            break;
//        case 2:
//            cout << "decelerate for: ";
//            cin >> speed;
//            c1.decelerate(speed);
//            cout << "cur speed: " << c1.get_speed() << endl;
//            break;
//        case 3:
//            exit(0);
//            break;
//        default:
//            cout << "error\n";
//        }
//    }
//}
//
//int main() {
//    Car c1;
//    menu(c1);
//}

//2
//class Student {
//    string first_name;
//    string last_name;
//    int age;
//    string spec;
//    string course;
//    int desired_grade;
//
//public:
//    Student(string f_n, string l_n, int a, string s, string c) : first_name(f_n), last_name(l_n), age(a), spec(s), course(c), desired_grade(0) {}
//
//    void set_desired_grade(int grade) {
//        desired_grade = grade;
//    }
//
//    int get_desired_grade() {
//        return desired_grade;
//    }
//
//    void info() {
//        cout << "\nname: " << first_name << "\nlast Name: " << last_name
//            << "\nage: " << age
//            << "\nspecialization: " << spec
//            << "\ncourse: " << course
//            << "\ndesired Grade: " << desired_grade << endl;
//    }
//};
//
//void menu(Student& s1) {
//    int ch = -1;
//    int grade;
//    while (ch != 0) {
//        cout << "\n1 - set desired grade\n"
//            << "2 - student info\n"
//            << "3 - exit\n"
//            << "Choose: ";
//        cin >> ch;
//        switch (ch) {
//        case 1:
//            cout << "enter grade: ";
//            cin >> grade;
//            s1.set_desired_grade(grade);
//            break;
//        case 2:
//            s1.info();
//            break;
//        case 3:
//            exit(0);
//            break;
//        default:
//            cout << "error\n";
//        }
//    }
//}
//
//int main() {
//    Student s1("Igor", "Yakovlev", 20, "freelance", "P-31");
//    menu(s1);
//}


//Задачі високого рівня (4b)

//class Quest {
//    string name;
//    string description;
//    int required_level;
//    int current_progress;
//    int max_progress;
//    int reward;
//
//public:
//    Quest(string n, string d, int lvl, int m_p, int r) : name(n), description(d), required_level(lvl), current_progress(0), max_progress(m_p), reward(r) {}
//
//    bool is_completed() {
//        return current_progress >= max_progress;
//    }
//
//    void progress_quest(int progress) {
//        current_progress += progress;
//    }
//
//    int get_reward() {
//        return reward;
//    }
//
//    string get_name() {
//        return name;
//    }
//
//    int get_required_level() {
//        return required_level;
//    }
//
//    void info() {
//        cout << "quest: " << name
//            << "\ndescription: " << description
//            << "\nrequired level: " << required_level
//            << "\nprogress: " << current_progress << "/" << max_progress
//            << "\nreward: " << reward << " exp\n";
//    }
//};
//
//class Character {
//    string name;
//    int level;
//    int experience;
//    vector<Quest> active_quests;
//    vector<Quest> not_active_quests;
//
//public:
//    Character(string n, int lvl, int exp) : name(n), level(lvl), experience(exp) {
//        Quest q1("quest 1", "quest1 description", 1, 5, 40);
//        Quest q2("quest 2", "quest2 description", 3, 10, 100);
//        Quest q3("quest 3", "quest3 description", 8, 15, 200);
//        not_active_quests.push_back(q1);
//        not_active_quests.push_back(q2);
//        not_active_quests.push_back(q3);
//    }
//
//    void accept_quest() {
//        cout << endl;
//        for (auto& quest : not_active_quests) {
//            quest.info();
//            cout << endl;
//        }
//        string quest_name;
//        cout << "enter quest name: ";
//        cin.ignore();
//        getline(cin, quest_name);
//        for (auto it = not_active_quests.begin(); it != not_active_quests.end(); it++) {
//            if (it->get_name() == quest_name) {
//                if (it->get_required_level() <= level) {
//                    active_quests.push_back(*it);
//                    not_active_quests.erase(it);
//                    cout << "quest accepted\n";
//                    return;
//                }
//                else {
//                    cout << "level too low to accept quest\n";
//                    return;
//                }
//            }
//        }
//        cout << "invalid name\n";
//    }
//
//    void show_active_quests() {
//        cout << "\nactive quests:\n\n";
//        for (auto& quest : active_quests) {
//            quest.info();
//            cout << endl;
//        }
//    }
//
//    void progress_quest() {
//        string quest_name;
//        int progress;
//        show_active_quests();
//        cout << "enter quest name: ";
//        cin.ignore();
//        getline(cin, quest_name);
//        cout << "enter progress: ";
//        cin >> progress;
//        cout << endl;
//        for (auto& quest : active_quests) {
//            if (quest.get_name() == quest_name) {
//                quest.progress_quest(progress);
//                quest.info();
//                return;
//            }
//        }
//        cout << "invalid name\n";
//    }
//
//    void complete_quest() {
//        for (auto& quest : active_quests) {
//            quest.info();
//        }
//        string quest_name;
//        cout << "\nenter quest name: ";
//        cin.ignore();
//        getline(cin, quest_name);
//        for (auto it = active_quests.begin(); it != active_quests.end(); it++) {
//            if (it->get_name() == quest_name) {
//                if (it->is_completed()) {
//                    cout << "quest completed\n";
//                    experience += it->get_reward();
//                    active_quests.erase(it);
//                    return;
//                }
//                else {
//                    cout << "quest is not completed\n";
//                    return;
//                }
//            }
//        }
//        cout << "invalid name\n";
//    }
//
//    void level_up() {
//        if (experience >= 20)
//        {
//            experience -= 20;
//            level++;
//            cout << "level up\n";
//        }
//        else
//        {
//            cout << "not enough exp\n";
//        }
//    }
//
//    void info() {
//        cout << "name: " << name
//            << "\nlevel: " << level
//            << "\nexperience: " << experience << endl;
//    }
//};
//
//void menu(Character& c1) {
//    int choice = -1;
//    while (choice != 0) {
//        cout << "\n\n\n";
//        c1.info();
//        cout << "\n1 - accept a quest\n"
//            << "2 - show active quests\n"
//            << "3 - progress quest\n"
//            << "4 - complete quest\n"
//            << "5 - level up\n"
//            << "0 - exit\n"
//            << "choose: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            c1.accept_quest();
//            break;
//        }
//        case 2:
//            c1.show_active_quests();
//            break;
//        case 3:
//            c1.progress_quest();
//            break;
//        case 4:
//            c1.complete_quest();
//            break;
//        case 5:
//            c1.level_up();
//            break;
//        case 0:
//            exit(0);
//        default:
//            cout << "error\n";
//        }
//    }
//}
//
//int main() {
//    Character c1("Igor", 1, 0);
//    menu(c1);
//}