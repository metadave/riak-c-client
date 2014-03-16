#ifndef RIAK_CPP_BUCKET_H
#define RIAK_CPP_BUCKET_H
#include "riak.h"
class RiakClient;
class RiakGetResponse;

class RiakBucket {
public:
    RiakBucket(RiakClient *client, const char* bucket_type, const char* bucket_name);
    ~RiakBucket();
    RiakGetResponse* get(const char* key);
private:
    RiakClient* client;
    const char* bucket_type;
    const char* bucket_name;
};

#endif