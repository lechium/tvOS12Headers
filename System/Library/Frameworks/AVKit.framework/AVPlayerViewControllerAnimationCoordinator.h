/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVPlayerViewControllerAnimationCoordinator.h>

@protocol AVPlayerViewControllerAnimationCoordinator <NSObject>
@required
-(void)addCoordinatedAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2;

@end


@class NSMutableArray, NSString;

@interface AVPlayerViewControllerAnimationCoordinator : NSObject <AVPlayerViewControllerAnimationCoordinator> {

	NSMutableArray* _animations;
	NSMutableArray* _completions;

}

@property (nonatomic,readonly) NSMutableArray * animations;               //@synthesize animations=_animations - In the implementation block
@property (nonatomic,readonly) NSMutableArray * completions;              //@synthesize completions=_completions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)completions;
-(void)performCoordinatedAnimations;
-(void)didFinishAnimations:(BOOL)arg1 ;
-(id)init;
-(NSMutableArray *)animations;
-(void)addCoordinatedAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end

