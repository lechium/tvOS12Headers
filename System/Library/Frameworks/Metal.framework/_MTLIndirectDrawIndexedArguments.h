/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _MTLIndirectDrawIndexedArguments : NSObject {

	unsigned long long _primitiveType;
	unsigned long long _indexCount;
	unsigned long long _indexType;
	void* _indexBufferVirtualAddress;
	unsigned long long _indexBufferOffset;
	unsigned long long _instanceCount;
	unsigned long long _baseVertex;
	unsigned long long _baseInstance;

}

@property (assign,nonatomic) unsigned long long primitiveType;                  //@synthesize primitiveType=_primitiveType - In the implementation block
@property (assign,nonatomic) unsigned long long indexCount;                     //@synthesize indexCount=_indexCount - In the implementation block
@property (assign,nonatomic) unsigned long long indexType;                      //@synthesize indexType=_indexType - In the implementation block
@property (assign,nonatomic) void* indexBufferVirtualAddress;                   //@synthesize indexBufferVirtualAddress=_indexBufferVirtualAddress - In the implementation block
@property (assign,nonatomic) unsigned long long indexBufferOffset;              //@synthesize indexBufferOffset=_indexBufferOffset - In the implementation block
@property (assign,nonatomic) unsigned long long instanceCount;                  //@synthesize instanceCount=_instanceCount - In the implementation block
@property (assign,nonatomic) unsigned long long baseVertex;                     //@synthesize baseVertex=_baseVertex - In the implementation block
@property (assign,nonatomic) unsigned long long baseInstance;                   //@synthesize baseInstance=_baseInstance - In the implementation block
-(unsigned long long)baseInstance;
-(void)setBaseInstance:(unsigned long long)arg1 ;
-(void*)indexBufferVirtualAddress;
-(void)setIndexBufferVirtualAddress:(void*)arg1 ;
-(unsigned long long)indexBufferOffset;
-(void)setIndexBufferOffset:(unsigned long long)arg1 ;
-(unsigned long long)baseVertex;
-(void)setBaseVertex:(unsigned long long)arg1 ;
-(unsigned long long)primitiveType;
-(unsigned long long)indexCount;
-(unsigned long long)indexType;
-(void)setIndexCount:(unsigned long long)arg1 ;
-(unsigned long long)instanceCount;
-(void)setPrimitiveType:(unsigned long long)arg1 ;
-(void)setIndexType:(unsigned long long)arg1 ;
-(void)setInstanceCount:(unsigned long long)arg1 ;
@end

