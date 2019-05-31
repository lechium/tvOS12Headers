/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice;
@class NSDictionary;

@interface VNMetalContext : NSObject {

	BOOL _useGPU;
	id<MTLDevice> _metalDevice;
	NSDictionary* _wisdomParams;

}

@property (readonly) id<MTLDevice> metalDevice;                //@synthesize metalDevice=_metalDevice - In the implementation block
@property (readonly) NSDictionary * wisdomParams;              //@synthesize wisdomParams=_wisdomParams - In the implementation block
@property (readonly) BOOL useGPU;                              //@synthesize useGPU=_useGPU - In the implementation block
-(id)initWithMetalDevice:(id)arg1 ;
-(NSDictionary *)wisdomParams;
-(BOOL)useGPU;
-(id<MTLDevice>)metalDevice;
@end
