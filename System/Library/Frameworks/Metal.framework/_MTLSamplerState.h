/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTLSamplerStateSPI.h>

@protocol MTLDevice;
@class NSString;

@interface _MTLSamplerState : NSObject <MTLSamplerStateSPI> {

	id<MTLDevice> _device;
	NSString* _label;

}

@property (readonly) id<MTLDevice> device;                             //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long uniqueIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * label;                                 //@synthesize label=_label - In the implementation block
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)initWithDevice:(id)arg1 samplerDescriptor:(id)arg2 ;
-(id<MTLDevice>)device;
-(void)dealloc;
-(NSString *)description;
-(NSString *)label;
-(unsigned long long)uniqueIdentifier;
@end

