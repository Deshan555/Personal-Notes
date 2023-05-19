<?php

class car{

    public $brand;

    function set_Brand($name){

        $this->brand = $name;
    }

    function get_Brand(){

        return $this->brand;
    }
}


$car_1 = new car();

$car_1->set_Brand("Tesla");

echo $car_1->get_Brand();


?>