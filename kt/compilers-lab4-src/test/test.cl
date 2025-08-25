class Ha {
    main(): Int {
        10
    };
};
class Silly {
    copy() : SELF_TYPE { self };
};

class Sally inherits Silly { };
class Main {
x : Sally <- (new Sally).copy();
main() : Sally { x };
};