/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MRAnimationManager : NSObject {

	NSMutableDictionary* mAnimations;

}
+(void)loadAnimationManagerWithPaths:(id)arg1 ;
+(void)initialize;
+(id)sharedManager;
-(id)initWithPaths:(id)arg1 ;
-(void)dealloc;
-(void)cleanup;
@end
