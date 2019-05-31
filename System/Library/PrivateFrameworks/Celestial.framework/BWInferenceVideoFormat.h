/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BWVideoFormat, NSDictionary;

@interface BWInferenceVideoFormat : NSObject <NSCopying> {

	BWVideoFormat* _underlyingVideoFormat;
	BOOL _deviceOriented;
	long long _videoContentMode;
	BOOL _includesInvalidContent;

}

@property (nonatomic,readonly) unsigned long long width; 
@property (nonatomic,readonly) unsigned long long height; 
@property (nonatomic,readonly) unsigned pixelFormat; 
@property (nonatomic,readonly) int colorSpaceProperties; 
@property (nonatomic,readonly) BOOL deviceOriented; 
@property (nonatomic,readonly) NSDictionary * pixelBufferAttributes; 
@property (nonatomic,readonly) BWVideoFormat * underlyingVideoFormat; 
@property (nonatomic,readonly) long long videoContentMode; 
@property (nonatomic,readonly) BOOL includesInvalidContent; 
+(id)formatByResolvingRequirements:(id)arg1 ;
-(unsigned)pixelFormat;
-(int)colorSpaceProperties;
-(BOOL)deviceOriented;
-(NSDictionary *)pixelBufferAttributes;
-(long long)videoContentMode;
-(BOOL)includesInvalidContent;
-(BWVideoFormat *)underlyingVideoFormat;
-(id)initWithUnderlyingFormat:(id)arg1 isDeviceOriented:(BOOL)arg2 videoContentMode:(long long)arg3 includesInvalidContent:(BOOL)arg4 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)width;
-(unsigned long long)height;
@end

