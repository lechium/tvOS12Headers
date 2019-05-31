/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class SCNMTLBuffer;

@interface SCNMTLMeshElement : NSObject {

	unsigned long long _primitiveType;
	long long _indexCount;
	unsigned long long _instanceCount;
	long long _sharedIndexBufferOffset;
	SCNMTLBuffer* _indexBuffer;
	unsigned long long _indexType;
	long long _effectiveIndexOffset;
	long long _effectiveIndexCount;

}

@property (assign,nonatomic) long long indexCount;                           //@synthesize indexCount=_indexCount - In the implementation block
@property (assign,nonatomic) unsigned long long instanceCount;               //@synthesize instanceCount=_instanceCount - In the implementation block
@property (assign,nonatomic) long long sharedIndexBufferOffset;              //@synthesize sharedIndexBufferOffset=_sharedIndexBufferOffset - In the implementation block
@property (nonatomic,retain) SCNMTLBuffer * indexBuffer;                     //@synthesize indexBuffer=_indexBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long indexType;                   //@synthesize indexType=_indexType - In the implementation block
@property (assign,nonatomic) unsigned long long primitiveType;               //@synthesize primitiveType=_primitiveType - In the implementation block
@property (nonatomic,readonly) long long primitiveCount; 
@property (nonatomic,readonly) long long effectiveIndexOffset;               //@synthesize effectiveIndexOffset=_effectiveIndexOffset - In the implementation block
@property (nonatomic,readonly) long long effectiveIndexCount;                //@synthesize effectiveIndexCount=_effectiveIndexCount - In the implementation block
-(long long)primitiveCount;
-(unsigned long long)primitiveType;
-(long long)indexCount;
-(SCNMTLBuffer *)indexBuffer;
-(unsigned long long)indexType;
-(long long)sharedIndexBufferOffset;
-(void)setIndexBuffer:(SCNMTLBuffer *)arg1 ;
-(void)setIndexCount:(long long)arg1 ;
-(void)setSharedIndexBufferOffset:(long long)arg1 ;
-(void)setupWithElement:(_C3DMeshElement*)arg1 ;
-(long long)effectiveIndexCount;
-(long long)effectiveIndexOffset;
-(void)setPrimitiveRange:(SCD_Struct_SC92)arg1 ;
-(unsigned long long)instanceCount;
-(void)setPrimitiveType:(unsigned long long)arg1 ;
-(void)setIndexType:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setInstanceCount:(unsigned long long)arg1 ;
@end
