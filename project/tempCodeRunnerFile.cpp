void Science::Output(){
    cout << right;
    cout << setfill('0') << setw(9) << id;
    cout << left << "   ";
    green();
    cout << left;
    cout << setfill(' ')  << setw(21) << name;
    reset();
    cout << setw(10)  << gender
         << setw(15) << dfb
         << setw(7)  << table
         << setw(8)  << room
         << setw(14) << center;
    red();
    cout << setw(15) << Total();
    reset();
    cout << setw(14) << Total_Rank();
    color(Math());
    cout << setw(8)  << Math();
    reset();
    color(Sub75(biology));
    cout << setw(9) << Sub75(biology);
    reset();
    color(Sub75(khmer));
    cout << setw(9)  << Sub75(khmer);
    reset();
    color(Sub75(physics));
    cout << setw(11) << Sub75(physics);
    reset();
    color(Sub75(chemistry));
    cout<< setw(11) << Sub75(chemistry);
    reset();
    color(Sub50(history));
    cout << setw(10) << Sub50(history);
    reset();
    color(Sub50(english));
    cout << setw(9) << Sub50(english);
    reset();
    color(Grade());
    cout << Grade() << endl;
    reset();
}