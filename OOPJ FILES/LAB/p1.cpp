class asx{
    private:
        int x=10;
    public:
        void display(int x){
            cout<<"Value of x(number) variable is"<<this->x;
            cout<<"Value of argument"<<x;
        };
};

int main(){
    asx a1;
    a1.display(5);
}