<?php

class StaticClass
{
    public static $founder = 'Elon Musk';

    public $brand;

    function set_Brand($name)
    {

        $this->brand = $name;
    }

    function get_Brand()
    {
        return $this->brand;
    }

    function founder(): string
    {
        return self::$founder;
    }
}


$car_1 = new StaticClass();

$car_1->set_Brand("Tesla");

echo $car_1->get_Brand().' '.$car_1->founder();


