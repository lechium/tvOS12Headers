/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _UIStatusBarIdentifier, NSString, NSSet, NSMutableArray;

@interface _UIStatusBarAnimation : NSObject <NSCopying> {

	BOOL _delaysAnimatingItems;
	BOOL _delaysDependentItems;
	BOOL _enabled;
	_UIStatusBarIdentifier* _displayItemIdentifier;
	NSString* _identifier;
	NSString* _exclusivityGroupIdentifier;
	long long _type;
	/*^block*/id _prepareBlock;
	NSSet* _delayedItemIdentifiers;
	NSSet* _delayedDisplayItemPlacements;
	long long _priority;
	NSMutableArray* _subAnimations;
	_UIStatusBarAnimation* _parentAnimation;
	/*^block*/id _animationBlock;
	NSMutableArray* _completionHandlers;

}

@property (nonatomic,retain) NSMutableArray * subAnimations;                              //@synthesize subAnimations=_subAnimations - In the implementation block
@property (assign,nonatomic,__weak) _UIStatusBarAnimation * parentAnimation;              //@synthesize parentAnimation=_parentAnimation - In the implementation block
@property (nonatomic,copy) id animationBlock;                                             //@synthesize animationBlock=_animationBlock - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionHandlers;                         //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                               //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) long long type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSSet * effectiveDelayedItemIdentifiers; 
@property (nonatomic,copy) _UIStatusBarIdentifier * displayItemIdentifier;                //@synthesize displayItemIdentifier=_displayItemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * exclusivityGroupIdentifier;                         //@synthesize exclusivityGroupIdentifier=_exclusivityGroupIdentifier - In the implementation block
@property (nonatomic,copy) id prepareBlock;                                               //@synthesize prepareBlock=_prepareBlock - In the implementation block
@property (nonatomic,copy) NSSet * delayedItemIdentifiers;                                //@synthesize delayedItemIdentifiers=_delayedItemIdentifiers - In the implementation block
@property (nonatomic,copy) NSSet * delayedDisplayItemPlacements;                          //@synthesize delayedDisplayItemPlacements=_delayedDisplayItemPlacements - In the implementation block
@property (assign,nonatomic) BOOL delaysAnimatingItems;                                   //@synthesize delaysAnimatingItems=_delaysAnimatingItems - In the implementation block
@property (assign,nonatomic) BOOL delaysDependentItems;                                   //@synthesize delaysDependentItems=_delaysDependentItems - In the implementation block
@property (assign,nonatomic) long long priority;                                          //@synthesize priority=_priority - In the implementation block
+(void)initialize;
+(id)animationWithBlock:(/*^block*/id)arg1 ;
+(void)prepareAnimations:(id)arg1 forStatusBar:(id)arg2 ;
+(void)_addAnimations:(id)arg1 toDispatchGroup:(id)arg2 ;
+(void)_addAnimations:(id)arg1 toPreparingAnimations:(id)arg2 exclusiveAnimations:(id)arg3 visitedDisplayItemIdentifiers:(id)arg4 ;
-(NSString *)identifier;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)priority;
-(void)cancel;
-(void)addCompletionHandler:(/*^block*/id)arg1 ;
-(void)addSubAnimation:(id)arg1 forDisplayItemWithIdentifier:(id)arg2 ;
-(void)setDelaysDependentItems:(BOOL)arg1 ;
-(void)setExclusivityGroupIdentifier:(NSString *)arg1 ;
-(void)setDelayedItemIdentifiers:(NSSet *)arg1 ;
-(void)setPrepareBlock:(id)arg1 ;
-(void)setDelayedDisplayItemPlacements:(NSSet *)arg1 ;
-(void)setDelaysAnimatingItems:(BOOL)arg1 ;
-(NSSet *)effectiveDelayedItemIdentifiers;
-(void)addTotalCompletionHandler:(/*^block*/id)arg1 ;
-(_UIStatusBarIdentifier *)displayItemIdentifier;
-(void)performForStatusBar:(id)arg1 ;
-(void)setAnimationBlock:(id)arg1 ;
-(void)_prepareForStatusBar:(id)arg1 preparingAnimations:(id)arg2 exclusiveAnimations:(id)arg3 ;
-(NSString *)exclusivityGroupIdentifier;
-(NSMutableArray *)subAnimations;
-(void)setDisplayItemIdentifier:(_UIStatusBarIdentifier *)arg1 ;
-(void)setParentAnimation:(_UIStatusBarAnimation *)arg1 ;
-(NSSet *)delayedItemIdentifiers;
-(NSSet *)delayedDisplayItemPlacements;
-(id)_dependentItemIdentifiersEnabledOnly:(BOOL)arg1 ;
-(id)prepareBlock;
-(BOOL)delaysAnimatingItems;
-(BOOL)delaysDependentItems;
-(void)setSubAnimations:(NSMutableArray *)arg1 ;
-(_UIStatusBarAnimation *)parentAnimation;
-(id)animationBlock;
-(NSMutableArray *)completionHandlers;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
@end
