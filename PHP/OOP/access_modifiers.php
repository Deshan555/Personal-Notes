<?php

class Car_Data{

    public $brand;

    public $manufacture_year;

    private $wheel_count = 4;

    function __construct($name_car, $year)
    {
        $this->brand = $name_car;

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
}


$car_1 = new Car_Data("Benz", 2012);

$car_2 = new Car_Data("Ford Mustang", 2022);

$car_3 = new Car_Data("Lamborghini", 2015);

$car_4 = new Car_Data("Benz AMG", 2010);

$car_5 = new Car_Data("BMW", 2018);


$cars = array($car_1, $car_2, $car_3, $car_4, $car_5);

foreach($cars as $car)
{
    echo 'Car Name : '. $car->get_Brand();

    echo 'Car Age : '. $car->get_Age().'<br>';
}

$car_5->set_wheels(6);

echo $car_5->get_wheels();

echo $car_5->brand;

?>


