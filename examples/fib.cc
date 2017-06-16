#include <equites.h>
using namespace equites;

task(int, fib, int i){
  if(i < 2) return 1; 
  auto x = call(fib, i-1);
  auto y = call(fib, i-2);
  return x.get() + y.get();
}

task(int, toplevel){
  int n = 15;
  printf("fib(%d) = %d\n", n, call(fib, n).get()); 
  return 0; 
}

int main(int argc, char** argv){
  start(toplevel, argc, argv);
  return 0;
}