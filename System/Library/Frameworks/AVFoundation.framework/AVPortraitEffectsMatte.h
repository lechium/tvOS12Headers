/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVPortraitEffectsMatteInternal;

@interface AVPortraitEffectsMatte : NSObject {

	AVPortraitEffectsMatteInternal* _internal;

}

@property (readonly) unsigned pixelFormatType; 
@property (readonly) CVBufferRef mattingImage; 
+(id)_allSupportedPortraitEffectsMattePixelFormatTypes;
+(id)portraitEffectsMatteFromDictionaryRepresentation:(id)arg1 error:(id*)arg2 ;
+(void)initialize;
-(unsigned)pixelFormatType;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 auxiliaryMetadata:(CGImageMetadataRef)arg2 ;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 portraitEffectsMatteMetadataDictionary:(id)arg2 ;
-(CVBufferRef)mattingImage;
-(const CGImageMetadataRef)copyAuxiliaryMetadata;
-(const CFStringRef)auxiliaryImageType;
-(id)portraitEffectsMatteByApplyingExifOrientation:(unsigned)arg1 ;
-(id)portraitEffectsMatteByReplacingPortraitEffectsMatteWithPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(id)dictionaryRepresentationForAuxiliaryDataType:(id*)arg1 ;
-(short)versionMajor;
-(short)versionMinor;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
@end

