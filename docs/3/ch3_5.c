
typedef union {
  unsigned int count; // データ個数
  float data; // 測定データ
} DATA_ROW;

DATA_ROW marker;

marker = get_data();

if(marker.count == 0){
  DATA_ROW c= get_data();

  for(int i = 0; i < c.count; i++){
    DATA_ROW d= get_data();
    printf("DATA%d: %f", i+1, d.data));
  }
}
