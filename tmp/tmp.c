#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

typedef int DataType;
typedef struct array
{
    DataType *Data;
    int size;
    int max_size;
    void (*Constructor)(struct array *); // 构造函数
    void (*Input)(DataType, struct array *); // 输入数据
    int (*get_array_size)(struct array *); // 获取数组大小
    int (*return_index_value)(struct array *, int); // 返回下标为index的值
    void (*print)(struct array*); // 打印结果
    void (*Destructor)(struct array *);// 析构函数
}Array;

void Init(Array *this);
void _print(Array *this);
void _constructor(Array *this);
void _denstructor(Array *this);
void _input(DataType data, Array *this);
int _get_array_size(Array *this);
int _return_index_value(Array *this, int index);


void Init(Array *this)
{
    this->Input = _input;
    this->print = _print;
    this->get_array_size = _get_array_size;
    this->return_index_value = _return_index_value;
    this->Constructor = _constructor;
    this->Destructor = _denstructor;
    this->Constructor(this);
}

/**
 * 构造函数
 */
void _constructor(Array *this)
{
    this->size = 0;
    this->max_size = 10;
    this->Data = (DataType*)malloc(this->max_size*sizeof(DataType));
    memset(this->Data, 0, 10);
}

/**
 * 输入
 */
void _input(DataType data, Array *this)
{
    int i;
    DataType *ptr;
    if(this->size >= this->max_size)
    {
        this->max_size += 10;
        ptr = (DataType*)malloc(this->max_size*sizeof(DataType));
        for(i=0; i<this->size; i++)
            ptr[i] = this->Data[i];
        free(this->Data);
        this->Data = ptr;
    }
    this->Data[this->size] = data;
    this->size += 1;
}

void _print(Array *this)
{
    assert(this != NULL);
    Array *ptr = this;
    int i = 0;
    for(i=0; i<ptr->size; i++)
        printf("data is %d\n", ptr->Data[i]);
}

int _get_array_size(Array *this)
{
    assert(this != NULL);
    return this->size+1;
}

int _return_index_value(Array *this, int index)
{
    assert(this != NULL);
    return (this->Data[index]);
}

void _denstructor(Array *this)
{
    int i=0;
    assert(this != NULL);
    for(i=0; i<this->max_size; i++)
        this->Data[i] = 0;
    free(this->Data);
}

int main(void)
{
    Array my_array;
    Init(&my_array);
    my_array.Input(1, &my_array);
    my_array.Input(2, &my_array);
    my_array.Input(3, &my_array);
    my_array.Input(4, &my_array);
    my_array.print(&my_array);
}
