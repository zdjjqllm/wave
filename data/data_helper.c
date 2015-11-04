#include"data_handle.h"
#include"../utils/debug.h"
#include"../utils/string.h"

int sec_data_2_string(sec_data* sec_data,string* data){
	if(data == NULL || data->buf != NULL){
		wave_error_printf("输入参数有误，请检查");
		return -1;
	}
	int res;
	char *buf = NULL;
	int len = 1024;

	do{
		if(buf != NULL)
			free(buf);
		buf = (char*)malloc(len);
		if(buf == NULL){
			wave_malloc_error();
			goto fail;
		}
		res = sec_data_2_buf(sec_data,buf,len);
		if(res == -1)
			goto fail;
		len *= 2;
	}while(res == NOT_ENOUGHT);

	data->buf = (u8*)malloc(res);
	if(data->buf == NULL){
		wave_malloc_error();
		goto fail;
	}
	data->len = res;
	memcpy(data->buf,buf,res);
	free(buf);
	return 0;

fail:
	if(buf != NULL)
		free(buf);
	return -1;
}

int string_2_sec_data(string* data,sec_data* sec_data){
	if(data->buf == NULL){
		wave_error_printf("输入参数有误，请检查");
		return -1;
	}
	int res;
	res = buf_2_sec_data(data->buf,data->len,sec_data);
	return res;
}

int encrypted_data_2_string(encrypted_data* enc_data,string* data){
	if(data == NULL || data->buf != NULL){
		wave_error_printf("输入参数有误，请检查");
		return -1;
	}
	int res;
	char *buf = NULL;
	int len = 1024;

	do{
		if(buf != NULL)
			free(buf);
		buf = (char*)malloc(len);
		if(buf == NULL){
			wave_malloc_error();
			goto fail;
		}
		res = encrypted_data_2_buf(enc_data,buf,len);
		if(res == -1)
			goto fail;
		len *= 2;
	}while(res == NOT_ENOUGHT);

	data->buf = (u8*)malloc(res);
	if(data->buf == NULL){
		wave_malloc_error();
		goto fail;
	}
	data->len = res;
	memcpy(data->buf,buf,res);
	free(buf);
	return 0;

fail:
	if(buf != NULL)
		free(buf);
	return -1;
}

int string_2_encrypted_data(string* data,encrypted_data* enc_data){
	if(data->buf == NULL){
		wave_error_printf("输入参数有误，请检查");
		return -1;
	}
	int res;
	res = buf_2_encrypted_data(data->buf,data->len,enc_data);
	return res;
}

int certificate_2_string(certificate* cert,string* data){
	if(data == NULL || data->buf != NULL){
		wave_error_printf("输入参数有误，请检查");
		return -1;
	}
	int res;
	char *buf = NULL;
	int len = 1024;

	do{
		if(buf != NULL)
			free(buf);
		buf = (char*)malloc(len);
		if(buf == NULL){
			wave_malloc_error();
			goto fail;
		}
		res = certificate_2_buf(cert,buf,len);
		if(res == -1)
			goto fail;
		len *= 2;
	}while(res == NOT_ENOUGHT);

	data->buf = (u8*)malloc(res);
	if(data->buf == NULL){
		wave_malloc_error();
		goto fail;
	}
	data->len = res;
	memcpy(data->buf,buf,res);
	free(buf);
	return 0;

fail:
	if(buf != NULL)
		free(buf);
	return -1;
}

int string_2_certificate(string* data,certificate* cert){
	if(data->buf == NULL){
		wave_error_printf("输入参数有误，请检查");
		return -1;
	}
	int res;
	res = buf_2_certificate(data->buf,data->len,cert);
	return res;
}

int signed_data_2_string(signed_data* s_data,string* data){
	if(data == NULL || data->buf != NULL){
		wave_error_printf("输入参数有误，请检查");
		return -1;
	}
	int res;
	char *buf = NULL;
	int len = 1024;

	do{
		if(buf != NULL)
			free(buf);
		buf = (char*)malloc(len);
		if(buf == NULL){
			wave_malloc_error();
			goto fail;
		}
		res = signed_data_2_buf(s_data,buf,len);
		if(res == -1)
			goto fail;
		len *= 2;
	}while(res == NOT_ENOUGHT);

	data->buf = (u8*)malloc(res);
	if(data->buf == NULL){
		wave_malloc_error();
		goto fail;
	}
	data->len = res;
	memcpy(data->buf,buf,res);
	free(buf);
	return 0;

fail:
	if(buf != NULL)
		free(buf);
	return -1;
}

int string_2_signed_data(string* data,signed_data* s_data){
	if(data->buf == NULL){
		wave_error_printf("输入参数有误，请检查");
		return -1;
	}
	int res;
	res = buf_2_signed_data(data->buf,data->len,s_data);
	return res;
}

int crl_2_string(crl* crl,string* data){
	if(data == NULL || data->buf != NULL){
		wave_error_printf("输入参数有误，请检查");
		return -1;
	}
	int res;
	char *buf = NULL;
	int len = 1024;

	do{
		if(buf != NULL)
			free(buf);
		buf = (char*)malloc(len);
		if(buf == NULL){
			wave_malloc_error();
			goto fail;
		}
		res = crl_2_buf(crl,buf,len);
		if(res == -1)
			goto fail;
		len *= 2;
	}while(res == NOT_ENOUGHT);

	data->buf = (u8*)malloc(res);
	if(data->buf == NULL){
		wave_malloc_error();
		goto fail;
	}
	data->len = res;
	memcpy(data->buf,buf,res);
	free(buf);
	return 0;

fail:
	if(buf != NULL)
		free(buf);
	return -1;
}

int string_2_crl(string* data,crl* crl){
	if(data->buf == NULL){
		wave_error_printf("输入参数有误，请检查");
		return -1;
	}
	int res;
	res = buf_2_crl(data->buf,data->len,crl);
	return res;
}

int hashedid8_2_string(hashedid8* hashed,string* data){
	if(data == NULL || data->buf != NULL){
		wave_error_printf("输入参数有误，请检查");
		return -1;
	}
	int res;
	char *buf = NULL;
	int len = 1024;

	do{
		if(buf != NULL)
			free(buf);
		buf = (char*)malloc(len);
		if(buf == NULL){
			wave_malloc_error();
			goto fail;
		}
		res = hashedid8_2_buf(hashed,buf,len);
		if(res == -1)
			goto fail;
		len *= 2;
	}while(res == NOT_ENOUGHT);

	data->buf = (u8*)malloc(res);
	if(data->buf == NULL){
		wave_malloc_error();
		goto fail;
	}
	data->len = res;
	memcpy(data->buf,buf,res);
	free(buf);
	return 0;
fail:
	if(buf != NULL)
		free(buf);
	return -1;
}

int string_2_hashedid8(string* data,hashedid8* hashed){
	if(data->buf == NULL){
		wave_error_printf("输入参数有误，请检查");
		return -1;
	}
	int res;
	res = buf_2_hashedid8(data->buf,data->len,hashed);
	return res;
}

bool hashedid8_equal(hashedid8* a,hashedid8* b){
	int i=0;
	bool res = true;
	while(i<8 && res==true){
		if(a->hashedid8[i] != b->hashedid8[i])
			res = false;
		i++;
	}
	return res;
}

int tobesigned_crl_2_string(tobesigned_crl* tbs_crl,string* data){
	if(data == NULL || data->buf != NULL){
		wave_error_printf("输入参数有误，请检查");
		return -1;
	}
	int res;
	char *buf = NULL;
	int len = 1024;

	do{
		if(buf != NULL)
			free(buf);
		buf = (char*)malloc(len);
		if(buf == NULL){
			wave_malloc_error();
			goto fail;
		}
		res = tobesigned_crl_2_buf(tbs_crl,buf,len);
		if(res == -1)
			goto fail;
		len *= 2;
	}while(res == NOT_ENOUGHT);

	data->buf = (u8*)malloc(res);
	if(data->buf == NULL){
		wave_malloc_error();
		goto fail;
	}
	data->len = res;
	memcpy(data->buf,buf,res);
	free(buf);
	return 0;

fail:
	if(buf != NULL)
		free(buf);
	return -1;
}

int string_2_tobesigned_crl(string* data,tobesigned_crl* tbs_crl){
	if(data->buf == NULL){
		wave_error_printf("输入参数有误，请检查");
		return -1;
	}
	int res;
	res = buf_2_tobesigned_crl(data->buf,data->len,tbs_crl);
	return res;
}

/**
 * 该函数实现调用了certificate_2_string和string_2_certificate,并不高效
 */
int certificate_cpy(certificate* dst,certificate *src){
	string* data;
	int res;

	res = certificate_2_string(src,data);
	if(res != 0){
		wave_error_printf("certificate_2_string失败");
		return res;
	}
	res = string_2_certificate(data,dst);
	if(res != 0){
		wave_error_printf("string_2_certificate失败");
		return res;
	}
	return 0;
}

/**
 * 该函数实现调用了certificate_2_string和string_2_certificate,并不高效
 */
bool certificate_equal(certificate* a,certificate* b){
	string* str_a;
	string* str_b;
	int res;
	int i = 0;

	res = certificate_2_string(a,str_a);
	if(res != 0){
		wave_error_printf("certificate_2_string失败");
		return res;
	}
	res = certificate_2_string(b,str_b);
	if(res != 0){
		wave_error_printf("certificate_2_string失败");
		return res;
	}
	if(str_a->len != str_b->len)
		return false;
	while(i < str_b->len){
		if(*(str_a->buf + i) != *(str_b->buf + i))
			return false;
		i++;
	}
	return true;
}


int elliptic_curve_point_cpy(elliptic_curve_point* dst,elliptic_curve_point* src){ 
    dst->type = src->type;
    dst->x.len = src->x.len;
    dst->x.buf = (u8*)malloc(dst->x.len); 
    if(dst->x.buf == NULL){
        wave_error_printf("内存分配失败 %s %d",__FILE__,__LINE__);
        return -1;
    }
    memcpy(dst->x.buf,src->x.buf,src->x.len);
    if(src->type == UNCOMPRESSED){
        dst->u.y.len = src->u.y.len;
        dst->u.y.buf = (u8*)malloc(src->u.y.len); 
        if(dst->u.y.buf == NULL){
             wave_error_printf("内存分配失败 %s %d",__FILE__,__LINE__);
                return -1;
        }
        memcpy(dst->u.y.buf,src->u.y.buf,src->u.y.len);
	}
	return 0;
}

int public_key_cpy(public_key* a,public_key* b){
	int res;

	a->algorithm = b->algorithm;
	switch(b->algorithm){
		case ECDSA_NISTP224_WITH_SHA224:
		case ECDSA_NISTP256_WITH_SHA256:
			res = elliptic_curve_point_cpy(&a->u.public_key,&b->u.public_key);
			if(res == -1)
				return -1;
			break;
		case ECIES_NISTP256:
			a->u.ecies_nistp256.supported_symm_alg = b->u.ecies_nistp256.supported_symm_alg;
			break;
		default:
			a->u.other_key.len = b->u.other_key.len;
			a->u.other_key.buf = (u8*)malloc(b->u.other_key.len);
			if(a->u.other_key.buf == NULL){
				wave_malloc_error();
				return -1;
			}
			memcpy(a->u.other_key.buf,b->u.other_key.buf,b->u.other_key.len);
	}
	return 0;
}

int tobesigned_certificate_request_2_string(tobesigned_certificate_request* tbs,string* data){
	if(data == NULL || data->buf != NULL){
		wave_error_printf("输入参数有误，请检查");
		return -1;
	}
	int res;
	char *buf = NULL;
	int len = 1024;

	do{
		if(buf != NULL)
			free(buf);
		buf = (char*)malloc(len);
		if(buf == NULL){
			wave_malloc_error();
			goto fail;
		}
		res = tobesigned_certificate_request_2_buf(tbs,buf,len);
		if(res == -1)
			goto fail;
		len *= 2;
	}while(res == NOT_ENOUGHT);

	data->buf = (u8*)malloc(res);
	if(data->buf == NULL){
		wave_malloc_error();
		goto fail;
	}
	data->len = res;
	memcpy(data->buf,buf,res);
	free(buf);
	return 0;

fail:
	if(buf != NULL)
		free(buf);
	return -1;
}

int certificate_request_2_string(certificate_request* cert_req,string* data){
	if(data == NULL || data->buf != NULL){
		wave_error_printf("输入参数有误，请检查");
		return -1;
	}
	int res;
	char *buf = NULL;
	int len = 1024;

	do{
		if(buf != NULL)
			free(buf);
		buf = (char*)malloc(len);
		if(buf == NULL){
			wave_malloc_error();
			goto fail;
		}
		res = certificate_request_2_buf(cert_req,buf,len);
		if(res == -1)
			goto fail;
		len *= 2;
	}while(res == NOT_ENOUGHT);

	data->buf = (u8*)malloc(res);
	if(data->buf == NULL){
		wave_malloc_error();
		goto fail;
	}
	data->len = res;
	memcpy(data->buf,buf,res);
	free(buf);
	return 0;

fail:
	if(buf != NULL)
		free(buf);
	return -1;
}
