/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoVision/PhotoVision-Structs.h>
#import <PhotoVision/PVObject.h>

@class NSData;

@interface PVFaceprint : PVObject {

	unsigned _faceprintVersion;
	NSData* _faceprintData;

}

@property (assign,nonatomic) unsigned faceprintVersion;              //@synthesize faceprintVersion=_faceprintVersion - In the implementation block
@property (nonatomic,retain) NSData * faceprintData;                 //@synthesize faceprintData=_faceprintData - In the implementation block
+(id)faceprintWithFaceprintData:(id)arg1 faceprintVersion:(unsigned)arg2 ;
-(unsigned)faceprintVersion;
-(void)setFaceprintVersion:(unsigned)arg1 ;
-(NSData *)faceprintData;
-(void)_setPropertiesFrom:(id)arg1 ;
-(void)setFaceprintData:(NSData *)arg1 ;
-(BOOL)getDistance:(float*)arg1 toOtherFaceprint:(id)arg2 error:(id*)arg3 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

