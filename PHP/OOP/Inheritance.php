<?php

// that is parent class of class name car
class encapsulation{

    const MESSAGE = 'This Is Const Variable';

    public $brand;

    public $manufacture_year;

    protected $wheel_count = 4;

    function __construct($year)
    {
        $this->manufacture_year = $year;
    }


    function get_Brand(){

        return $this->brand;
    }


    function get_Age(){

        return date('Y')- $this->manufacture_year;
    }

    function set_wheels($wheels)
    {
        $this->wheel_count = $wheels;
    }

    function get_wheels()
    {
        return $this->wheel_count;
    }

    function get_Message()
    {
        return self::MESSAGE;
    }
}

// that is child class of car class
class Tesla extends encapsulation{

    private $battery_capacity;

    function __construct($year)
    {
        $this->brand = 'Tesla';

        parent::__construct($year);
    }

    function add_wheel()
    {
        return $this->wheel_count+1;
    }

    function set_capacity($capacity)
    {
        $this->battery_capacity = $capacity;
    }

    function get_capacity()
    {
        return $this->battery_capacity;
    }
}

$tesla = new Tesla(2020);

$tesla->add_wheel();

$tesla->set_capacity(100000);

echo $tesla->get_Brand().' '.$tesla->get_Age().' '.$tesla->get_wheels().' '.$tesla->get_capacity().'kwh '.$tesla->get_Message();



