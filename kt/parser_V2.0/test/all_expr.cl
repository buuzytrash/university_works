class Main {
    x : Int <- 10;
    y : Int <- 20;

    sum() : Int {
        x + y
    };

    sub() : Int {
        x - y
    };

    mul() : Int {
        x * y
    };

    div() : Int {
        x / y
    };

    negate() : Int {
        ~x
    };

    less_than() : Int {
        x < y
    };

    equal() : Int {
        x = y
    };

    less_or_equal() : Int {
        x <= y
    };

    iv_void() : Int {
        isvoid(x)
    };

    not_() : Int {
        not(x)
    };

    
};