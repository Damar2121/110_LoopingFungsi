void Masukan()
{
    int Isian;
    cout << "Masukan Isian: ";
    cin >> Isian;

    Node* newNode = new Node(); //1
    newNode->data = Isian; //2
    newNode->next = NULL;

    if (isEmpty())
    {
        front = newNode;
        rear = newNode;

    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }


}

void MenghapusAntrean()
{
    if (isEmpty())
    {
        cout << " Kosong" << endl;
        return;
    }

    Node* temp = front;
    front = front->next;

    delete temp;



}