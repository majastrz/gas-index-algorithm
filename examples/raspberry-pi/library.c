#include "library.h"

GasIndexAlgorithmParams params;

void init(void)
{
    GasIndexAlgorithm_init(&params, GasIndexAlgorithm_ALGORITHM_TYPE_VOC);
}

int32_t process(int32_t voc_raw_value)
{
    int32_t voc_index_value = 0;    
    GasIndexAlgorithm_process(&params, voc_raw_value, &voc_index_value);

    return voc_index_value;
}