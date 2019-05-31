/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCPProtoLivePhotoVariationParams, NSMutableArray;

@interface VCPProtoLivePhotoEffectsRecipe : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	long long _epoch;
	long long _outputFrameDurValue;
	VCPProtoLivePhotoVariationParams* _autoloop;
	VCPProtoLivePhotoVariationParams* _bounce;
	int _cropRectHeight;
	int _cropRectWidth;
	int _cropRectX;
	int _cropRectY;
	int _flags;
	NSMutableArray* _frameInstructions;
	VCPProtoLivePhotoVariationParams* _longexposure;
	int _minVersion;
	VCPProtoLivePhotoVariationParams* _stabilize;
	int _stabilizeResult;
	int _timeScale;
	int _version;
	SCD_Struct_VC34 _has;

}

@property (assign,nonatomic) int stabilizeResult;                                          //@synthesize stabilizeResult=_stabilizeResult - In the implementation block
@property (assign,nonatomic) long long outputFrameDurValue;                                //@synthesize outputFrameDurValue=_outputFrameDurValue - In the implementation block
@property (assign,nonatomic) int cropRectX;                                                //@synthesize cropRectX=_cropRectX - In the implementation block
@property (assign,nonatomic) int cropRectY;                                                //@synthesize cropRectY=_cropRectY - In the implementation block
@property (assign,nonatomic) int cropRectHeight;                                           //@synthesize cropRectHeight=_cropRectHeight - In the implementation block
@property (assign,nonatomic) int cropRectWidth;                                            //@synthesize cropRectWidth=_cropRectWidth - In the implementation block
@property (assign,nonatomic) int timeScale;                                                //@synthesize timeScale=_timeScale - In the implementation block
@property (assign,nonatomic) BOOL hasEpoch; 
@property (assign,nonatomic) long long epoch;                                              //@synthesize epoch=_epoch - In the implementation block
@property (assign,nonatomic) BOOL hasFlags; 
@property (assign,nonatomic) int flags;                                                    //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSMutableArray * frameInstructions;                           //@synthesize frameInstructions=_frameInstructions - In the implementation block
@property (nonatomic,retain) VCPProtoLivePhotoVariationParams * autoloop;                  //@synthesize autoloop=_autoloop - In the implementation block
@property (nonatomic,retain) VCPProtoLivePhotoVariationParams * bounce;                    //@synthesize bounce=_bounce - In the implementation block
@property (nonatomic,retain) VCPProtoLivePhotoVariationParams * longexposure;              //@synthesize longexposure=_longexposure - In the implementation block
@property (nonatomic,retain) VCPProtoLivePhotoVariationParams * stabilize;                 //@synthesize stabilize=_stabilize - In the implementation block
@property (assign,nonatomic) int minVersion;                                               //@synthesize minVersion=_minVersion - In the implementation block
@property (assign,nonatomic) int version;                                                  //@synthesize version=_version - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
+(Class)frameInstructionsType;
-(void)setHasFlags:(BOOL)arg1 ;
-(BOOL)hasFlags;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)flags;
-(int)timeScale;
-(void)setFlags:(int)arg1 ;
-(id)exportToLegacyDictionary;
-(id)exportToLegacyDictionaryFromFrameInstruction:(id)arg1 withTimeParam:(SCD_Struct_VC6)arg2 ;
-(id)exportToLegacyDictionaryFromParam:(id)arg1 withLoopFlavor:(id)arg2 ;
-(void)addFrameInstructions:(id)arg1 ;
-(unsigned long long)frameInstructionsCount;
-(void)clearFrameInstructions;
-(id)frameInstructionsAtIndex:(unsigned long long)arg1 ;
-(void)setAutoloop:(VCPProtoLivePhotoVariationParams *)arg1 ;
-(void)setBounce:(VCPProtoLivePhotoVariationParams *)arg1 ;
-(void)setLongexposure:(VCPProtoLivePhotoVariationParams *)arg1 ;
-(void)setStabilize:(VCPProtoLivePhotoVariationParams *)arg1 ;
-(void)setHasEpoch:(BOOL)arg1 ;
-(BOOL)hasEpoch;
-(int)stabilizeResult;
-(void)setStabilizeResult:(int)arg1 ;
-(long long)outputFrameDurValue;
-(void)setOutputFrameDurValue:(long long)arg1 ;
-(int)cropRectX;
-(void)setCropRectX:(int)arg1 ;
-(int)cropRectY;
-(void)setCropRectY:(int)arg1 ;
-(int)cropRectHeight;
-(void)setCropRectHeight:(int)arg1 ;
-(int)cropRectWidth;
-(void)setCropRectWidth:(int)arg1 ;
-(void)setTimeScale:(int)arg1 ;
-(NSMutableArray *)frameInstructions;
-(void)setFrameInstructions:(NSMutableArray *)arg1 ;
-(VCPProtoLivePhotoVariationParams *)autoloop;
-(VCPProtoLivePhotoVariationParams *)longexposure;
-(VCPProtoLivePhotoVariationParams *)stabilize;
-(int)minVersion;
-(void)setMinVersion:(int)arg1 ;
-(long long)epoch;
-(void)setEpoch:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(int)arg1 ;
-(int)version;
-(VCPProtoLivePhotoVariationParams *)bounce;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

