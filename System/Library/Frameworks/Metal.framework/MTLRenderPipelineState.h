/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MTLRenderPipelineState <NSObject>
@property (readonly) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) BOOL supportIndirectCommandBuffers; 
@required
-(BOOL)supportIndirectCommandBuffers;
-(id<MTLDevice>)device;
-(NSString *)label;

@end

