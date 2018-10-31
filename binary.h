#ifndef BOOLEAN_H
#define BOOLEAN_H

class boolean {
    private:
        char* array;
        int size;
    
    public:
        boolean(int size):size(size) {
            array = new char[size/8+1];
        }
        
        void bitOn(int position) {
            array[position/8] |= 1 << position % 8;
        }
             
        void bitOff(int position) {
            array[position/8] &= ~(1<<position%8);
        }
             
        bool operator[](int position) {
            return (array[position/8]>>position%8)&1;
        }
    
        void clear() {    
            for(int i=0;i<size;i++)
                array[i/8] &= 0;
        }
             
        ~boolean() {
            delete[] array;
        }
};

#endif