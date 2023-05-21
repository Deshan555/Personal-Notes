<?php

trait LivingThings{

    public $dna;
}

trait amphibians{

    function primary_colors(): array
    {
        return array('Green', 'Black', 'Brown', 'Yellow');
    }
}

trait animals{

    function breed(): string{
        return 'amphibians';
    }
}


class frog{
    use LivingThings, animals, amphibians;

    function __construct($dna)
    {
        $this->dna = $dna;
    }
}


$animal = new frog("XXY");

$colors = $animal->primary_colors();

echo $animal->dna.' '.$colors[0].' '.$animal->breed();