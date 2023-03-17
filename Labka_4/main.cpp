# include "list.h"



int main()

{



    List A;

    Queue B;

    TwoList C;

    datatype data;

    datatype key;

    datatype result;

    int choice;



    do

    {

        cout << endl;
        cout << "Select action" << endl;
        cout << "1 - push" << endl;
        cout << "2 - pop" << endl;
        cout << "3 - exit" << endl;
        cout << endl;



        cin >> choice;



        switch (choice)

        {

        case 1:

        {

            cout << "Input data" << endl;

            cin >> data;

            A.push(data);

            A.show();

            break;

        }

        case 2:

        {

            result = A.pop();

            cout << "Deleted = " << result << endl;

            A.show();

            break;

        }

        }

    } while (choice != 3);

    do

    {

        cout << endl;
        cout << "Select action" << endl;
        cout << "1 - enqueue" << endl;
        cout << "2 - dequeue" << endl;
        cout << "3 - exit" << endl;
        cout << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "Input data" << endl;
            cin >> data;
            B.enqueue(data);
            B.show();
            break;

        }

        case 2:

        {

            result = B.dequeue();

            cout << "Deleted = " << result << endl;

            B.show();

            break;

        }

        }

    } while (choice != 3);



    do

    {

        cout << endl;
        cout << "Select action" << endl;
        cout << "1 - add_begin" << endl;
        cout << "2 - add_end" << endl;
        cout << "3 - del_begin" << endl;
        cout << "4 - del_end" << endl;
        cout << "5 - search" << endl;
        cout << "6 - add_mid" << endl;
        cout << "7 - del_mid" << endl;
        cout << "8 - exit" << endl;
        cout << endl;



        cin >> choice;



        switch (choice)

        {

        case 1:

        {

            cout << "Input data" << endl;

            cin >> data;

            C.add_begin(data);

            C.show();

            break;

        }

        case 2:

        {

            cout << "Input data" << endl;

            cin >> data;

            C.add_end(data);

            C.show();

            break;

        }

        case 3:

        {

            result = C.del_begin();

            cout << "Deleted = " << result << endl;

            C.show();

            break;

        }

        case 4:

        {

            result = C.del_end();

            cout << "Deleted = " << result << endl;

            C.show();

            break;

        }

        case 5:

        {

            cout << "Input data to search" << endl;

            cin >> data;

            C.search(data);

            C.show();

            break;

        }

        case 6:

        {

            cout << "Input key" << endl;

            cin >> key;

            cout << "Input data" << endl;

            cin >> data;

            C.add_mid(key, data);

            C.show();

            break;

        }

        case 7:

        {

            cout << "Input data to delete" << endl;

            cin >> data;

            result = C.del_mid(data);

            cout << "Deleted = " << result << endl;

            C.show();

            break;

        }

        }

    } while (choice != 8);
    return 0;

}
