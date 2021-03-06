/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class CIImage, NSData, NSString;

@interface PLImageContainer : NSObject {

	void* _ioSurface;
	CIImage* _CIImage;
	CGSize _pixelSize;
	CGImageRef _CGImage;
	NSData* _data;
	NSString* _uniformTypeIdentifier;

}

@property (nonatomic,readonly) CGSize pixelSize; 
@property (nonatomic,readonly) CGImageRef CGImage;                            //@synthesize CGImage=_CGImage - In the implementation block
@property (nonatomic,readonly) NSData * data;                                 //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSString * uniformTypeIdentifier;              //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
@property (nonatomic,readonly) void* ioSurface; 
-(id)initWithUIImage:(id)arg1 backingData:(id)arg2 uniformTypeIdentifier:(id)arg3 ;
-(id)initWithCGImage:(CGImageRef)arg1 ioSurface:(void*)arg2 CIImage:(id)arg3 backingData:(id)arg4 uniformTypeIdentifier:(id)arg5 size:(CGSize)arg6 ;
-(id)initWithUIImage:(id)arg1 ;
-(NSString *)uniformTypeIdentifier;
-(void)dealloc;
-(CGImageRef)CGImage;
-(CGSize)pixelSize;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(NSData *)data;
-(void*)ioSurface;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 ;
@end

