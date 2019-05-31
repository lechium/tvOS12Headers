/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNMTLShadable : NSObject {

	id _vertexBuffers[31];
	id _fragmentBuffers[31];
	id _vertexTextures[31];
	id _fragmentTextures[31];
	id _vertexSamplers[16];
	id _fragmentSamplers[16];
	long long materialModificationCount;
	long long geometryModificationCount;

}

@property (assign,nonatomic) long long materialModificationCount; 
@property (assign,nonatomic) long long geometryModificationCount; 
-(long long)materialModificationCount;
-(long long)geometryModificationCount;
-(void)setMaterialModificationCount:(long long)arg1 ;
-(void)setGeometryModificationCount:(long long)arg1 ;
-(void)setResource:(id)arg1 ofType:(unsigned long long)arg2 atIndices:(SCD_Struct_SC57)arg3 ;
-(id)bufferAtIndices:(SCD_Struct_SC57)arg1 ;
-(id)textureAtIndices:(SCD_Struct_SC57)arg1 ;
-(id)samplerAtIndices:(SCD_Struct_SC57)arg1 ;
-(void)dealloc;
@end

