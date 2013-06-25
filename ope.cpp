#ifdef _OPE_h


template <typename elemtype>
elemtype OPE<typename  elemtype>::add(elemtype val1,elemtype val2){
  int carry = 0;
    int result = 0;
    int i;

    for(i = 0; i < 32; ++i) {
        int a = (val1 >> i) & 1;
        int b = (val2 >> i) & 1;
        result |= ((a ^ b) ^ carry) << i;
        carry = (a & b) | (b & carry) | (carry & a);
    }

    return result;
}


template <typename elemtype>
elemtype OPE<typename elemtype>::subtract(elemtype val3,elemtype val4){
	  return add(val3, negate(val4));
}

template <typename elemtype>
elemtype OPE<typename elemtype>::divide(elemtype val5,elemtype val6){
	return val5/val6;
}

template <typename elemtype>
elemtype OPE<typename elemtype>::multiply(elemtype x,elemtype y){
	int result = 0;

    if(x < 0 && y < 0) {
        return multiply(negate(x), negate(y));
    }

    if(x >= 0 && y < 0) {
        return multiply(y, x);
    }

    while(y > 0) {
        if(is_even(y)) {
            x = multiplybytwo(x);
            y = dividebytwo(y);
        } else {
            result = add(result, x);
            y = add(y, -1);
        }
    }

    return result;
	
}

template <typename elemtype>
bool OPE<typename elemtype>::equality(elemtype val9,elemtype val10){
	if (val9 == val10) return true;
	else return false;
}

template <typename elemtype>
bool OPE<typename elemtype>::unequal(elemtype val11,elemtype val12){
	if (val11 != val12) return true;
	else return false;
}

template <typename elemtype>
bool OPE<typename elemtype>::lessthan(elemtype val13,elemtype val14){
	if (val13 < val14) return true;
	else return false;
}

template <typename elemtype>
bool OPE<typename elemtype>::greaterthan(elemtype val15,elemtype val16){
	if (val15 > val16) return true;
	else return false;
}

template <typename elemtype>
elemtype OPE<typename elemtype>::negate(elemtype val7){
	 return add(~(val7), 1);
}


template <typename elemtype>
int OPE<typename elemtype>::is_even(elemtype val18){
	 return !(val18 & 1);
}

template <typename elemtype>
elemtype OPE<typename elemtype>::dividebytwo(elemtype val19){
	return val19 >> 1;
}

template <typename elemtype>
elemtype OPE<typename elemtype>::multiplybytwo(elemtype val20){
	return val20 << 1;
}

#endif
