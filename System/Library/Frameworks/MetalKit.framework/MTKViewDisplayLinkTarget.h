/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MTKView;

@interface MTKViewDisplayLinkTarget : NSObject {

	MTKView* _target;

}

@property (assign,nonatomic,__weak) MTKView * target;              //@synthesize target=_target - In the implementation block
-(void)draw;
-(void)setTarget:(MTKView *)arg1 ;
-(MTKView *)target;
-(id)initWithTarget:(id)arg1 ;
@end

