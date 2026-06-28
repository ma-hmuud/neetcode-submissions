public class DynamicArray {
    private int[] _arr;
    private int _size;
    private int _capacity;

    public DynamicArray(int capacity)
    {
        _arr = new int[capacity];
        _size = 0;
        _capacity = capacity;
    }
    
    public int Get(int i) {
        return _arr[i];
    }

    public void Set(int i, int n) {
        _arr[i] = n;
    }

    public void PushBack(int n) {
        if (_size == _capacity)
        {
            Resize();
        }

        _arr[_size] = n;
        _size++;
    }

    public int PopBack() {
        if (_size > 0)
        {
            _size--;
        }

        return _arr[_size];
    }

    private void Resize()
    {
        _capacity *= 2;
        int[] newArr = new int[_capacity];
        for (int i = 0; i < _size; i++)
        {
            newArr[i] = _arr[i];
        }
        
        _arr = newArr;
    }

    public int GetSize()
    {
        return _size;
    }

    public int GetCapacity() {
        return _capacity;
    }
}
