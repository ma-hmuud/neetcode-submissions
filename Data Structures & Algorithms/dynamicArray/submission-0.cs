public class DynamicArray {
    List<int> _arr;
    int _pointer;
    public DynamicArray(int capacity) {
        _arr = new List<int>(capacity);
        _pointer = 0;
    }

    public int Get(int i) {
        return _arr[i];
    }

    public void Set(int i, int n) {
        _arr[i] = n;
    }

    public void PushBack(int n) {
        _arr.Add(n);
    }

    public int PopBack() {
        int element = _arr[_arr.Count() - 1];
        _arr.Remove(element);
        return element;
    }

    private void Resize() {
        List<int> newArr = new List<int>(_arr.Count() * 2);
        for (int i = 0; i < _arr.Count(); i++)
        {
            newArr[i] = _arr[i];
        }
        
        _arr = newArr;
    }

    public int GetSize()
    {
        return _arr.Count;
    }

    public int GetCapacity() {
        return _arr.Capacity;
    }
}
