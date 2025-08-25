class Main {
    x : Int <- 10;
    y : Int <- 20;

    set_x(new_x : Int) : Int {
        x <- new_x
    };

    set_y(new_y : Int) : Int {
        y <- new_y
    };

    get_sum() : Int {
        x + y
    };
};