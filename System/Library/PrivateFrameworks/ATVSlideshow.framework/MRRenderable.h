/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRRenderable
@property (nonatomic,readonly) BOOL isNative3D; 
@property (nonatomic,readonly) BOOL isOpaque; 
@property (nonatomic,readonly) BOOL isAlphaFriendly; 
@property (nonatomic,readonly) BOOL isInfinite; 
@required
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
-(id)retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
-(BOOL)isNative3D;
-(BOOL)isAlphaFriendly;
-(BOOL)isInfinite;
-(BOOL)isOpaque;

@end

