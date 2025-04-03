clc; clear;

casa.adresa = 'str.Barbu Lautaru 11';
casa.dimensiune = 55;
casa.nr_camere = 2;
casa.gradina = 'Da';
casa.garaj = 'Da';
casa.apartament = 'Nu';
casa.izolatie_fonica = 'Da';

casaCell = struct2cell(casa);
disp(casaCell)