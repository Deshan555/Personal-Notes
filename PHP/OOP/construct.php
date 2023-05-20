<?php

class Car_Brand{

    public $brand;

    public $manufacture_year;

    // initialize constructor method
    function __construct($name_car, $year)
    {
        $this->brand = $name_car;

        $this->manufacture_year = $year;
    }

    // function for return car brand
    function get_Brand(){

        return $this->brand;
    }

    // function for return year gap
    function get_Age(){

        return date('Y')- $this->manufacture_year;
    }
}


$car_1 = new Car_Brand("Benz", 2012);

$car_2 = new Car_Brand("Ford Mustang", 2022);

$car_3 = new Car_Brand("Lamborghini", 2015);

$car_4 = new Car_Brand("Benz AMG", 2010);

$car_5 = new Car_Brand("BMW", 2018);


$cars = array($car_1, $car_2, $car_3, $car_4, $car_5);

foreach($cars as $car)
{
    echo 'Car Name : '. $car->get_Brand();

    echo 'Car Age : '. $car->get_Age().'<br>';
}

?>