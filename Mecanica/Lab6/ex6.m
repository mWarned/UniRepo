clc; clear all;

student(1).Nume = "Alex";
student(1).Nota_Examen = 7.2;
student(2).Nume = "Crist";
student(2).Nota_Examen = 8.5;
student(3).Nume = "Mihai";
student(3).Nota_Examen = 9.3;
student(4).Nume = "Ion";
student(4).Nota_Examen = 5.5;
student(5).Nume = "Vasile";
student(5).Nota_Examen = 7.9;

sum = 0;
for i = 1:5
    sum = sum + student(i).Nota_Examen;
end

sum / 5

note = [student.Nota_Examen];
maxim = max(note); minim = min(note);

maxim - minim