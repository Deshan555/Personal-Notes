<?php

abstract class information_car{

    public $brand;

    abstract public function tagLine() : string;
}



class benz extends information_car{

    function __construct()
    {
        $this->brand = 'Benz';
    }

    public function tagLine(): string
    {
        // TODO: Implement tagLine() method.

        return "The Best or Nothing";
    }
}

class bmw extends information_car{

    function __construct()
    {
        $this->brand = 'BMW';
    }

    public function tagLine(): string
    {
        // TODO: Implement tagLine() method.

        return "Driving Pleasure";
    }
}


$benz = new benz();

echo $benz->brand.' => '.$benz->tagLine();

$bmw = new bmw();

echo $bmw->brand.' => '.$bmw->tagLine();