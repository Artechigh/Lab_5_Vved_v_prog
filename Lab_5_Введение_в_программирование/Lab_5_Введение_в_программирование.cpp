#include <iostream>

int main()
{
	//Task 1
	std::cout << "1-st task\n\n";
	std::cout << "Let's find distance between 2 points on coordinate plane\n";
	double x, x1, x2, y, y1, y2, l;//объявление переменных
	std::cout << "Write down coordinates for 1-st point:\n"; //ввод значений для первой точки
	std::cout << "x1 = ";
	std::cin >> x1;
	std::cout << "y1 = ";
	std::cin >> y1;

	std::cout << "Write down coordinates for 2-nd point:\n"; //ввод значений для второй точки
	std::cout << "x2 = ";
	std::cin >> x2;
	std::cout << "y2 = ";
	std::cin >> y2;
	if (x1 == x2 and y1 == y2) std::cout << "they are together\n";
	else
	{
		x = abs(x1 - x2); //нахождение расстояния по координате x между точками
		y = abs(y1 - y2); //нахождение расстояния по координате y между точками
		l = sqrt(pow(x, 2) + pow(y, 2)); //нахождение полного расстояния между точками
		std::cout << "The answer is ";
		std::cout << l << "\n\n"; //вывод ответа
	}
	//Task 2
	std::cout << "2-nd task\n\n";		
	std::cout << "Finding length of AC and BC on num line and it's sum\n";
	std::cout << "Write down x for point A: ";	//ввод значений
	std::cin >> x;
	std::cout << "Write down x for point B: ";
	std::cin >> x1;
	std::cout << "Write down x for point C: ";
	std::cin >> x2;

	l = abs(x - x2);	//нахождение отрезка AC
	if (l == 0) std::cout << "AC is one point:/\n";
	std::cout << "AC = ";
	std::cout << l;	//вывод значения отрезка AC
	std::cout << "\n";
	y = l;

	l = abs(x1 - x2);	//нахождение отрезка BC
	if (l == 0) std::cout << "BC is one point:/\n";
	std::cout << "BC = ";
	std::cout << l;	//вывод значения отрезка BC
	std::cout << "\n";
	y = y + l;		//подсчёт суммы отрезков

	std::cout << "Sum = ";
	std::cout << y;
	std::cout << "\n\n";	//вывод значения суммы отрезков

	//Task 3
	std::cout << "3-rd task\n\n";
	std::cout << "Finding multiplication of length AC and BC \n";
	std::cout << "(point C is between A and B so it's position will be counted automatically)\n";
	std::cout << "Write down x for point A: ";	//ввод значений для точки A
	std::cin >> x;
	std::cout << "Write down x for point B: ";	//ввод значений для точки B 
	std::cin >> x1;
	x2 = (x + x1) / 2;	//нахождение точки С - середины АВ
	l = abs(x - x2);	//нахождение длины отрезка АС
	y = l;
	l = abs(x1 - x2);	//нахождение длины отрезка ВС
	y = y * l;			//нахождение произведения отрезков АС и ВС
	std::cout << "Multiplication result (AC*BC) is ";
	std::cout << y;
	std::cout << "\n\n"; //вывод значения

	//Task 4
	std::cout << "4-th task\n\n";
	std::cout << "that will help you to find perimeter and square of rectangle knowing coords of it's opposite top points\n";

	std::cout << "Write down coordinates for 1-st point:\n";	//ввод значений для первой точки
	std::cout << "x1 = ";
	std::cin >> x1;
	std::cout << "y1 = ";
	std::cin >> y1;

	std::cout << "Write down coordinates for 2-nd point:\n";	//ввод значений для второй точки
	std::cout << "x2 = ";
	std::cin >> x2;
	std::cout << "y2 = ";
	std::cin >> y2;

	x = abs(x1 - x2);	//нахождение длины прямоугольника вдоль оси х
	y = abs(y1 - y2);	//нахождение длины прямоугольника вдоль оси у
	if ((x == 0) or (y == 0)) std::cout << "error\n\n";		//проверка прямоугольника на существование
	else {
		std::cout << "P = "; //вывод периметра
		std::cout << (2 * x + 2 * y);
		std::cout << "\n";
		std::cout << "S = "; //вывод площади
		std::cout << (x * y);
		std::cout << "\n\n";
	}

	//Task 5
	std::cout << "5-th task\n\n";
	std::cout << "Finding perimeter and square of triangle knowing coords for it's top points\n";
	std::cout << "Write down coordinates for 1-st point:\n";	//ввод значений для первой точки
	std::cout << "x1 = ";
	std::cin >> x;
	std::cout << "y1 = ";
	std::cin >> y;

	std::cout << "Write down coordinates for 2-nd point:\n";	//ввод значений для второй точки
	std::cout << "x2 = ";
	std::cin >> x1;
	std::cout << "y2 = ";
	std::cin >> y1;

	std::cout << "Write down coordinates for 3-nd point:\n";	//ввод значений для третьей точки
	std::cout << "x2 = ";
	std::cin >> x2;
	std::cout << "y2 = ";
	std::cin >> y2;

	double a = sqrt(pow(abs(x - x1), 2) + pow(abs(y - y1), 2));		//вычисление стороны между 1 и 2 точками
	double b = sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2));	//вычисление стороны между 2 и 3 точками
	double c = sqrt(pow(abs(x2 - x), 2) + pow(abs(y2 - y), 2));		//вычисление стороны между 1 и 3 точками

	if ((a == 0) or (b == 0) or (c == 0)) std::cout << "error";		//проверка треугольника на существование
	else
	{
		l = a + b + c; //вычисление периметра
		std::cout << "P = ";//вывод значения периметра
		std::cout << l;
		std::cout << "\n";

		double s = sqrt((l / 2) * ((l / 2) - a) * ((l / 2) - b) * ((l / 2) - c));	//вычисление площади
		std::cout << "S = ";//вывод значения площади
		std::cout << s;
		std::cout << "\n";
	}
}


