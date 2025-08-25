(* a cell will live if exactly 1 of itself and it's immediate (*ABC*)
       neighbors are alive *)
       class Point {
    x : Int <- 0;  -- Поле x типа Int, инициализированное значением 0
    y : Int <- 0;  -- Поле y типа Int, инициализированное значением 0

    -- Конструктор без аргументов, инициализирующий поля значениями по умолчанию
    init() : Point {
        {
            x := 0;
            y := 0;
        }
    };

    -- Конструктор с двумя аргументами, инициализирующий поля переданными значениями
    init(x : Int, y : Int) : Point {
        {
            x := x;
            y := y;
        }
    };

    -- Метод для изменения значений полей
    set(new_x : Int, new_y : Int) : Point {
        {
            x := new_x;
            y := new_y;
            self
        }
    };

    -- Метод для получения строкового представления объекта
    to_string() : String {
        "Point(" ++ int_to_str(x) ++ ", " ++ int_to_str(y) ++ ")"
    };
};