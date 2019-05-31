/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class NSDictionary;

@interface SCNMaterialAttachment : NSObject {

	unsigned glID;
	unsigned target;
	void* context;
	CGSize size;
	NSDictionary* options;

}

@property (assign,nonatomic) unsigned glID; 
@property (assign,nonatomic) unsigned target; 
@property (assign,nonatomic) void* context; 
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,copy) NSDictionary * options; 
+(id)materialAttachmentWithGLKTextureInfo:(id)arg1 ;
-(unsigned)glID;
-(void)setGlID:(unsigned)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(void)setTarget:(unsigned)arg1 ;
-(unsigned)target;
-(void)setContext:(void*)arg1 ;
-(void*)context;
-(NSDictionary *)options;
-(void)setSize:(CGSize)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
@end

