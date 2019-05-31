/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/BWFormatRequirements.h>

@class NSArray, NSDictionary;

@interface BWVideoFormatRequirements : BWFormatRequirements {

	unsigned long long _width;
	unsigned long long _height;
	NSArray* _supportedPixelFormats;
	NSArray* _supportedColorSpaceProperties;
	unsigned long long _bytesPerRowAlignment;
	unsigned long long _planeAlignment;
	unsigned long long _widthAlignment;
	unsigned long long _heightAlignment;
	NSArray* _supportedCacheModes;
	BOOL _prewireBuffers;
	BOOL _memoryPoolUseAllowed;

}

@property (assign,nonatomic) unsigned long long width;                             //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned long long height;                            //@synthesize height=_height - In the implementation block
@property (nonatomic,copy) NSArray * supportedPixelFormats;                        //@synthesize supportedPixelFormats=_supportedPixelFormats - In the implementation block
@property (nonatomic,copy) NSArray * supportedColorSpaceProperties;                //@synthesize supportedColorSpaceProperties=_supportedColorSpaceProperties - In the implementation block
@property (assign,nonatomic) unsigned long long bytesPerRowAlignment;              //@synthesize bytesPerRowAlignment=_bytesPerRowAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long planeAlignment;                    //@synthesize planeAlignment=_planeAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long widthAlignment;                    //@synthesize widthAlignment=_widthAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long heightAlignment;                   //@synthesize heightAlignment=_heightAlignment - In the implementation block
@property (nonatomic,copy) NSArray * supportedCacheModes;                          //@synthesize supportedCacheModes=_supportedCacheModes - In the implementation block
@property (nonatomic,readonly) NSDictionary * pixelBufferAttributes; 
@property (assign,nonatomic) BOOL prewireBuffers;                                  //@synthesize prewireBuffers=_prewireBuffers - In the implementation block
@property (assign,nonatomic) BOOL memoryPoolUseAllowed;                            //@synthesize memoryPoolUseAllowed=_memoryPoolUseAllowed - In the implementation block
+(id)cacheModesForOptimizedHWAccess;
+(id)cacheModesForCacheProfile:(int)arg1 ;
+(id)cacheModesForOptimizedCPUAccess;
+(id)displayPipeRequirements;
+(void)initialize;
-(void)setSupportedPixelFormats:(NSArray *)arg1 ;
-(void)setSupportedCacheModes:(NSArray *)arg1 ;
-(void)setSupportedColorSpaceProperties:(NSArray *)arg1 ;
-(void)setBytesPerRowAlignment:(unsigned long long)arg1 ;
-(void)setPlaneAlignment:(unsigned long long)arg1 ;
-(void)setWidthAlignment:(unsigned long long)arg1 ;
-(void)setHeightAlignment:(unsigned long long)arg1 ;
-(unsigned long long)bytesPerRowAlignment;
-(unsigned long long)planeAlignment;
-(BOOL)memoryPoolUseAllowed;
-(void)setMemoryPoolUseAllowed:(BOOL)arg1 ;
-(NSDictionary *)pixelBufferAttributes;
-(id)initWithPixelBufferAttributes:(id)arg1 ;
-(void)setPrewireBuffers:(BOOL)arg1 ;
-(BOOL)prewireBuffers;
-(NSArray *)supportedPixelFormats;
-(Class)formatClass;
-(NSArray *)supportedColorSpaceProperties;
-(unsigned long long)widthAlignment;
-(unsigned long long)heightAlignment;
-(NSArray *)supportedCacheModes;
-(unsigned)mediaType;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(unsigned long long)width;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(unsigned long long)height;
@end

