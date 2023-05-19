<?php

class Car_Brand{

    public $brand;

    // initialize constructor method
    function __construct($name_car)
    {
        $this->brand = $name_car;
    }

    // function for return car brand
    function get_Brand(){

        return $this->brand;
    }
}


$car_1 = new Car_Brand("Benz");

echo $car_1->get_Brand();


?>