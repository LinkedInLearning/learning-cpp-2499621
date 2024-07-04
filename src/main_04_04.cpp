#include <iostream>

void ausgabeMeinArray(int* array, int array_size)
{
  for (int index = 0; index < array_size; index++)
  {
    std::cout << "Array[" << index << "]=" << array[index] << std::endl;
    }
}

float multiply_floaty_plus2(float par1, float par2){
  float product=0;
  product=par1*(par2+2);
  return product;
}

bool test_3_var_smaller(int var1, int var2, int var3)
{
  bool result;
  if((var1<var2)&&(var2<var3)){
    result=true;
  }else{
    result=false;
  }

  return result;
}

int main()
{
  int array_size=5;
  int array[array_size] = {1, 2, 3, 4, 5};
  ausgabeMeinArray(array, array_size);

  float a = 2.0;
  float b = 3.0; 
  float product = 0;

  product = multiply_floaty_plus2(b,a);
  std::cout<< product << std::endl;

  int var1=1;
  int var2=2;
  int var3=1;
  
  std::cout<< "Test ob Var1 < Var2 < Var3: " << test_3_var_smaller(var1, var2, var3) << std::endl;

      return 0;
}