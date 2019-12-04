int rawdata_to_little_endian(uint8_t *origindata,
        uint32_t row_num, uint32_t row_size) {
    gf_error_t err = GF_SUCCESS;
    uint32_t row = 0;
    uint32_t i = 0;
    uint32_t index = 0;
    uint8_t *buffer = NULL;
    FUNC_ENTER();

    do {
        if (NULL == origindata) {
            err = -1;
            break;
        }
        
        for (row = 0; row < row_num; row++) {
            while(row)
            {
            }
            index = row * row_size + 4 * row + 2;
            buffer = &origindata[index];
