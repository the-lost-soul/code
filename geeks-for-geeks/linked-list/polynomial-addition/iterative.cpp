/* The below method print the required sum of polynomial
p1 and p2 as specified in output  */
void addPolynomial(Node *p1, Node *p2)
{
    Node* data1 = p1 ;
    Node* data2 = p2 ;
    while(data1 and data2)
    {
        if(data1->pow == data2->pow)
        {
            int sumCoeff = data1->coeff + data2->coeff ;
            cout << sumCoeff << "x^" << data1->pow ;
            data1 = data1->next ;
            data2 = data2->next ;
            if(data1 || data2)cout << " + " ;
        }
        else if(data1->pow > data2->pow)
        {
            cout << data1->coeff << "x^" << data1->pow << " + ";
            data1 = data1->next ;
        }
        else
        {
            cout << data2->coeff << "x^" << data2->pow << " + " ;
            data2 = data2->next ;
        }
    }
    while(data1 and !data2)
    {
        cout << data1->coeff << "x^" << data1->pow ;
        data1 = data1->next ;
        if(data1)cout << " + " ;
    }
    
    while(!data1 and data2)
    {
        cout << data2->coeff << "x^" << data2->pow ;
        data2 = data2->next ;
        if(data2)cout << " +" ;
    }
    
}
