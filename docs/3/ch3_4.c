
unsigned int marker;

marker = get_data();

if(marker == 0){
  int count = get_data();

  for(int i = 0; i < count; i++){
    int data = get_data();
    printf("DATA%d: %f", i+1, *((float*)data));
  }
}

